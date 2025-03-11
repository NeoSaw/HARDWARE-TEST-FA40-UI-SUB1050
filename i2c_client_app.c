
#include "i2c_client_app.h"
#include "mcc_generated_files/i2c_client/mssp1.h"
#include "main.h" // For access to i2cDat
#include "led.h"

static uint8_t clientLocation  = 0x00;
static bool isClientLocation  = false;

bool Client_Application(i2c_client_transfer_event_t event)
{
    static uint8_t registerAddr = 0x00;
    static bool isRegisterAddr = false;

    switch (event)
    {
        case I2C_CLIENT_TRANSFER_EVENT_ADDR_MATCH:
            if (I2C1_Client.TransferDirGet() == I2C_CLIENT_TRANSFER_DIR_WRITE) {
                isRegisterAddr = true;
            }
            break;

        case I2C_CLIENT_TRANSFER_EVENT_RX_READY:
            if (isRegisterAddr) {
                registerAddr = I2C1_Client.ReadByte();
                if (registerAddr >= 16) {
                    registerAddr = 0; // Prevent out-of-bounds access
                }
                isRegisterAddr = false;
            } else {
                // Write data to the specified register
                if (registerAddr < 16) {
                    i2cDat.ar[registerAddr] = I2C1_Client.ReadByte();
                    
                    // Process the written data - implement special handling if needed
                    // if writing to LED registers, update LED states
                    if (registerAddr >= REG_LED_STATUS_0_3 && registerAddr <= REG_LED_STATUS_24_27) {
                        // Update LEDs based on register values
                        ProcessLEDRegisterUpdate(registerAddr);
                    }
                    
                    // Auto-increment register address for sequential writes
                    registerAddr++;
                    if (registerAddr >= 16) {
                        registerAddr = 0;
                    }
                }
            }
            break;

        case I2C_CLIENT_TRANSFER_EVENT_TX_READY:
            // Host is reading from the specified register
            if (registerAddr < 16) {
                // Special handling for switch status registers
                if (registerAddr == REG_SWITCH_STATUS_0_7 || registerAddr == REG_SWITCH_STATUS_8_15) {
                    // Clear switch flags once read
                    I2C1_Client.WriteByte(i2cDat.ar[registerAddr]);
                    
                    // Clear switch status flags after reading
                    if (registerAddr == REG_SWITCH_STATUS_0_7) {
                        i2cDat.st.SwitchStatus0_7.SW00 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW01 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW02 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW03 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW04 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW05 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW06 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus0_7.SW07 = SWITCH_OPEN;
                    } else {
                        // Clear REG_SWITCH_STATUS_8_15 (FA80)
                        i2cDat.st.SwitchStatus8_15.SW08 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW09 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW10 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW11 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW12 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW13 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW14 = SWITCH_OPEN;
                        i2cDat.st.SwitchStatus8_15.SW15 = SWITCH_OPEN;
                    }
                } else {
                    // Read other registers normally
                    I2C1_Client.WriteByte(i2cDat.ar[registerAddr]);
                }
                
                // Auto-increment register address for sequential reads
                registerAddr++;
                if (registerAddr >= 16) {
                    registerAddr = 0;
                }
            } else {
                // Invalid register address, return 0
                I2C1_Client.WriteByte(0);
            }
            break;

        case I2C_CLIENT_TRANSFER_EVENT_STOP_BIT_RECEIVED:
            // No action needed on stop bit and as there is no interrupt, you'll never get here
            break;

        case I2C_CLIENT_TRANSFER_EVENT_ERROR:
            // Error handling
            registerAddr = 0;
            isRegisterAddr = false;
            break;

        default:
            break;
    }
    return true;
}

void InitializeI2CRegisters(void)
{
    // Clear all registers initially
    for (int i = 0; i < 16; i++) {
        i2cDat.ar[i] = 0;
    }
    
    // Set up device information
    i2cDat.st.device_info.hardware_type = 0x2; // FA40 UI
    i2cDat.st.device_info.device_type = 0x1;
    
    // Set version
    i2cDat.st.version = 0x10; // Version 1.0
    
    // Set serial number (example)
    i2cDat.st.serial_number.serial_high = 0x12;
    i2cDat.st.serial_number.serial_low = 0x34;
    
    // Initialize LED timings
    i2cDat.st.led_slow_timing = LAMP_FAST_OFF_TIME / 100; // Convert to appropriate value
    i2cDat.st.led_fast_timing = LAMP_FAST_ON_TIME / 100;
}

void ProcessLEDRegisterUpdate(uint8_t regAddress)
{
    switch (regAddress) {
        case REG_LED_STATUS_0_3:
            // Process LEDs 0-3
            if (i2cDat.st.LEDStatus0_3.LED00 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_1_ON);
            else if (i2cDat.st.LEDStatus0_3.LED00 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_1_FAST_FLASH);
            else if (i2cDat.st.LEDStatus0_3.LED00 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_1_OFF);
            
            if (i2cDat.st.LEDStatus0_3.LED01 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_2_ON);
            else if (i2cDat.st.LEDStatus0_3.LED01 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_2_FAST_FLASH);
            else if (i2cDat.st.LEDStatus0_3.LED01 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_2_OFF);
            
            if (i2cDat.st.LEDStatus0_3.LED02 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_3_ON);
            else if (i2cDat.st.LEDStatus0_3.LED02 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_3_FAST_FLASH);
            else if (i2cDat.st.LEDStatus0_3.LED02 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_3_OFF);
            
            if (i2cDat.st.LEDStatus0_3.LED03 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_4_ON);
            else if (i2cDat.st.LEDStatus0_3.LED03 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_4_FAST_FLASH);
            else if (i2cDat.st.LEDStatus0_3.LED03 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_4_OFF);
            
            break;
            
        case REG_LED_STATUS_4_7:
            // Process LEDs 4-7
            if (i2cDat.st.LEDStatus4_7.LED04 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_5_ON);
            else if (i2cDat.st.LEDStatus4_7.LED04 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_5_FAST_FLASH);
            else if (i2cDat.st.LEDStatus4_7.LED04 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_5_OFF);
            
            if (i2cDat.st.LEDStatus4_7.LED05 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_6_ON);
            else if (i2cDat.st.LEDStatus4_7.LED05 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_6_FAST_FLASH);
            else if (i2cDat.st.LEDStatus4_7.LED05 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_6_OFF);
            
            if (i2cDat.st.LEDStatus4_7.LED06 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_7_ON);
            else if (i2cDat.st.LEDStatus4_7.LED06 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_7_FAST_FLASH);
            else if (i2cDat.st.LEDStatus4_7.LED06 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_7_OFF);
            
            if (i2cDat.st.LEDStatus4_7.LED07 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_8_ON);
            else if (i2cDat.st.LEDStatus4_7.LED07 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_8_FAST_FLASH);
            else if (i2cDat.st.LEDStatus4_7.LED07 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_8_OFF);
            
            break;
            
        case REG_LED_STATUS_8_11:
            // Process LEDs 8-11
            if (i2cDat.st.LEDStatus8_11.LED08 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_9_ON);
            else if (i2cDat.st.LEDStatus8_11.LED08 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_9_FAST_FLASH);
            else if (i2cDat.st.LEDStatus8_11.LED08 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_9_OFF);
            
            if (i2cDat.st.LEDStatus8_11.LED09 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_10_ON);
            else if (i2cDat.st.LEDStatus8_11.LED09 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_10_FAST_FLASH);
            else if (i2cDat.st.LEDStatus8_11.LED09 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_10_OFF);
            
            if (i2cDat.st.LEDStatus8_11.LED10 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_11_ON);
            else if (i2cDat.st.LEDStatus8_11.LED10 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_11_FAST_FLASH);
            else if (i2cDat.st.LEDStatus8_11.LED10 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_11_OFF);
            
            if (i2cDat.st.LEDStatus8_11.LED11 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_12_ON);
            else if (i2cDat.st.LEDStatus8_11.LED11 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_12_FAST_FLASH);
            else if (i2cDat.st.LEDStatus8_11.LED11 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_12_OFF);
            
            break;
            
        case REG_LED_STATUS_12_15:
            // Process LEDs 12-15
            if (i2cDat.st.LEDStatus12_15.LED12 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_13_ON);
            else if (i2cDat.st.LEDStatus12_15.LED12 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_13_FAST_FLASH);
            else if (i2cDat.st.LEDStatus12_15.LED12 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_13_OFF);
            
            if (i2cDat.st.LEDStatus12_15.LED13 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_14_ON);
            else if (i2cDat.st.LEDStatus12_15.LED13 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_14_FAST_FLASH);
            else if (i2cDat.st.LEDStatus12_15.LED13 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_14_OFF);
            
            if (i2cDat.st.LEDStatus12_15.LED14 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_15_ON);
            else if (i2cDat.st.LEDStatus12_15.LED14 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_15_FAST_FLASH);
            else if (i2cDat.st.LEDStatus12_15.LED14 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_15_OFF);
            
            if (i2cDat.st.LEDStatus12_15.LED15 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_16_ON);
            else if (i2cDat.st.LEDStatus12_15.LED15 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_16_FAST_FLASH);
            else if (i2cDat.st.LEDStatus12_15.LED15 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_16_OFF);
            
            break;
            
        case REG_LED_STATUS_16_19:
            // Process LEDs 16-19
            if (i2cDat.st.LEDStatus16_19.LED16 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_17_ON);
            else if (i2cDat.st.LEDStatus16_19.LED16 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_17_FAST_FLASH);
            else if (i2cDat.st.LEDStatus16_19.LED16 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_17_OFF);
            
            if (i2cDat.st.LEDStatus16_19.LED17 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_18_ON);
            else if (i2cDat.st.LEDStatus16_19.LED17 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_18_FAST_FLASH);
            else if (i2cDat.st.LEDStatus16_19.LED17 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_18_OFF);
            
            if (i2cDat.st.LEDStatus16_19.LED18 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_19_ON);
            else if (i2cDat.st.LEDStatus16_19.LED18 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_19_FAST_FLASH);
            else if (i2cDat.st.LEDStatus16_19.LED18 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_19_OFF);
            
            if (i2cDat.st.LEDStatus16_19.LED19 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_20_ON);
            else if (i2cDat.st.LEDStatus16_19.LED19 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_20_FAST_FLASH);
            else if (i2cDat.st.LEDStatus16_19.LED19 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_20_OFF);
            
            break;
            
        case REG_LED_STATUS_20_23:
            // Process LEDs 20-23
            if (i2cDat.st.LEDStatus20_23.LED20 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_21_ON);
            else if (i2cDat.st.LEDStatus20_23.LED20 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_21_FAST_FLASH);
            else if (i2cDat.st.LEDStatus20_23.LED20 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_21_OFF);
            
            if (i2cDat.st.LEDStatus20_23.LED21 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_22_ON);
            else if (i2cDat.st.LEDStatus20_23.LED21 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_22_FAST_FLASH);
            else if (i2cDat.st.LEDStatus20_23.LED21 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_22_OFF);
            
            if (i2cDat.st.LEDStatus20_23.LED22 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_23_ON);
            else if (i2cDat.st.LEDStatus20_23.LED22 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_23_FAST_FLASH);
            else if (i2cDat.st.LEDStatus20_23.LED22 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_23_OFF);
            
            if (i2cDat.st.LEDStatus20_23.LED23 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_24_ON);
            else if (i2cDat.st.LEDStatus20_23.LED23 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_24_FAST_FLASH);
            else if (i2cDat.st.LEDStatus20_23.LED23 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_24_OFF);
            
            break;
            
        case REG_LED_STATUS_24_27:
            // Process LEDs 24-27
            if (i2cDat.st.LEDStatus24_27.LED24 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_25_ON);
            else if (i2cDat.st.LEDStatus24_27.LED24 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_25_FAST_FLASH);
            else if (i2cDat.st.LEDStatus24_27.LED24 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_25_OFF);
            
            if (i2cDat.st.LEDStatus24_27.LED25 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_26_ON);
            else if (i2cDat.st.LEDStatus24_27.LED25 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_26_FAST_FLASH);
            else if (i2cDat.st.LEDStatus24_27.LED25 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_26_OFF);
            
            if (i2cDat.st.LEDStatus24_27.LED26 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_27_ON);
            else if (i2cDat.st.LEDStatus24_27.LED26 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_27_FAST_FLASH);
            else if (i2cDat.st.LEDStatus24_27.LED26 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_27_OFF);
            
            if (i2cDat.st.LEDStatus24_27.LED27 == LED_STATUS_ON)
                MAINSetLEDAction(LIGHT_28_ON);
            else if (i2cDat.st.LEDStatus24_27.LED27 == LED_STATUS_FAST_FLASH)
                MAINSetLEDAction(LIGHT_28_FAST_FLASH);
            else if (i2cDat.st.LEDStatus24_27.LED27 == LED_STATUS_OFF)
                MAINSetLEDAction(LIGHT_28_OFF);
            
            break;
        
        default:
            break;
    }
}