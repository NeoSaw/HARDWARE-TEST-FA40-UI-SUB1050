 /*
 * MAIN Generated Driver File
 * 
 * @file main.c
 * 
 * @defgroup main MAIN
 * 
 * @brief This is the generated driver implementation file for the MAIN driver.
 *
 * @version MAIN Driver Version 1.0.0
*/

/*
© [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/
#define MAIN_C
#include "main.h"
#include "mcc_generated_files/system/system.h"
#include "i2c_client_app.h"
#include "key.h"
#include "led.h"

/*
    Main application
*/

void WDT_a( void );
void WDT_b( void );
void InitializeI2CRegisters(void);



/* Variables static to this source. */
UnsignedInt intMAINWatchdog;
uint16_t ui_irsensor = 0; // Variable to store IR sensor reading from RA6/AN_IR


#define IR_FILTER_SIZE 8U
uint16_t sum = 0U;
uint16_t ir_filter_buffer[IR_FILTER_SIZE] = {0U};
uint8_t ir_filter_index = 0U;
uint16_t ui_irsensor_filtered = 0U; // Filtered IR sensor reading

//#define SWITCH_AND_LED_TEST
#ifdef SWITCH_AND_LED_TEST
static uint8_t led12_state = 0U; // 0 = OFF, 1 = FLASH, 2 = ON
static uint8_t flasher = 0U;
#endif


int main(void)
{
    UnsignedChar timer_10mS;
    UnsignedChar key;
    
    SYSTEM_Initialize();
    InitializeI2CRegisters();
    I2C1_Client.CallbackRegister(Client_Application);
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    INTERRUPT_GlobalInterruptEnable(); 

    // Enable the Peripheral Interrupts 
    INTERRUPT_PeripheralInterruptEnable();
    


    //MAINSetLEDAction(LIGHT_27_FAST_FLASH);
    
    while(1)
    {
        if( flagMAIN1mSTimer )
        {
            flagMAIN1mSTimer = CLEAR;
            /* A new 1mS increment has occurred */
            intMAINWatchdog = 0x5555U;
            WDT_a();

            
            if( timer_10mS ) --timer_10mS;
            else
            {
                timer_10mS = 10U;

                /******************************/
                /* Perform 10mS tasks.        */
                /******************************/
                
                /* Read raw IR sensor value from RA6/AN_IR */
                ui_irsensor = ADC_GetConversion(AN_IR);

                // Apply moving average filter
                ir_filter_buffer[ir_filter_index] = ui_irsensor;
                ir_filter_index = (ir_filter_index + 1) % IR_FILTER_SIZE;

                // Calculate the average
                sum = 0;
                for (uint8_t i = 0; i < IR_FILTER_SIZE; i++) {
                    sum += ir_filter_buffer[i];
                }
                ui_irsensor_filtered = sum / IR_FILTER_SIZE;
                
                
                key = KEYPoll();

            }

            /******************************/
            /* Perform 1mS tasks.         */
            /******************************/
            
            POLLLed();
            
            if( key ) {
                switch( key ) {
                    case KEY_SWITCH_0:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW00 = SWITCH_SWITCHED; 
                        break; 
                    case KEY_SWITCH_1:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW01 = SWITCH_SWITCHED;
                        break;
                    case KEY_SWITCH_2:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW02 = SWITCH_SWITCHED;
                        break;
                    case KEY_SWITCH_3:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW03 = SWITCH_SWITCHED;
                        break;
                    case KEY_SWITCH_4:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW04 = SWITCH_SWITCHED;

#ifdef SWITCH_AND_LED_TEST
                        // Cycle LED12 state: OFF -> FLASH -> ON -> OFF
                        led12_state = (led12_state + 1) % 2;

                        // Apply the appropriate action based on state
                        switch(led12_state) {
                            case 0: // OFF
                                MAINSetLEDAction(MAIN_LIGHT_ALL_OFF);
                                break;
                            case 2: // FLASH
                                MAINSetLEDAction(LIGHT_12_FAST_FLASH);
                                break;
                            case 1: // ON
                                MAINSetLEDAction(MAIN_LIGHT_ALL_ON);
                                break;
                        }
#endif
                        break;
                    case KEY_SWITCH_5:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW05 = SWITCH_SWITCHED;
                        break;
                    case KEY_SWITCH_6:
                        // load register, clear on I2C poll
                        i2cDat.st.SwitchStatus0_7.SW06 = SWITCH_SWITCHED;
                        break;
                    case KEY_NO_KEY:
                        // Logically unreachable due to if(key) check
                        // But leave for completeness and in case logic changes
                        //LOG_ERROR("Unexpected KEY_NO_KEY reached in switch");
                        MAINSetLEDAction( MAIN_LIGHT_ALL_ON );
                        break;
                    default:
                        // Handle unknown key values
                        //LOG_ERROR("Unknown key value: %u", key);
                        break;
                        
                }

                key = KEY_NO_KEY;   // key read, clear.
                                      
            }
            intMAINWatchdog += 0x2222U;
			WDT_b();
        }
    }    
}

void WDT_a( void )
{
	if( intMAINWatchdog != 0x5555U ) asm( "RESET" );
	intMAINWatchdog += 0x1111U;
}

void WDT_b( void )
{
	if( intMAINWatchdog != 0x8888U ) asm( "RESET" );
	intMAINWatchdog = 0x0000U;
	asm( "CLRWDT" );
}

