/* 
 * File:   main.h
 * Author: robert.hoehne
 *
 * Created on February 25, 2025, 2:49 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "definitions.h"


#ifdef	__cplusplus
}
#endif

// Register address definitions
#define REG_UPDATE_PERIOD     0x00    // Read from EEPROM
#define REG_TYPE              0x01    // Read from EEPROM
#define REG_VERSION           0x02    // Read from EEPROM
#define REG_SERIAL_HIGH       0x03    // Read from EEPROM
#define REG_SERIAL_LOW        0x04    // Read from EEPROM
#define REG_LED_STATUS_0_3    0x05
#define REG_LED_STATUS_4_7    0x06
#define REG_LED_STATUS_8_11   0x07
#define REG_LED_STATUS_12_15  0x08
#define REG_LED_STATUS_16_19  0x09
#define REG_LED_STATUS_20_23  0x0A
#define REG_LED_STATUS_24_27  0x0B
#define REG_SWITCH_STATUS_0_7  0x0C
#define REG_SWITCH_STATUS_8_15 0x0D
#define REG_LED_SLOW_TIMING    0x0E
#define REG_LED_FAST_TIMING    0x0F

// LED status values
#define LED_STATUS_OFF            0
#define LED_STATUS_SLOW_FLASH     1
#define LED_STATUS_FAST_FLASH     2
#define LED_STATUS_ON             3

// Switch status values
#define SWITCH_OPEN        0
#define SWITCH_SWITCHED    1

typedef union {
    UnsignedChar ar[16];      // Array mapped in parallel with structures
    struct {
        // []---------------------------------------------[]
        // |               FA40 UI Registers               |
        // []---------------------------------------------[]        
        // Device information registers (from EEPROM)
        UnsignedChar update_period;             // Register 0x00
        struct {
            unsigned hardware_type        :4;
            unsigned device_type          :3;
            unsigned reserved             :1;
        } device_info;  // Register 0x01
        
        UnsignedChar version;                   // Register 0x02
        
        struct {
            UnsignedChar serial_high;           // Register 0x03
            UnsignedChar serial_low;            // Register 0x04
        } serial_number;
        
        // LED Registers 0-3 (Register 0x05)
        struct {
            unsigned LED03                :2;
            unsigned LED02                :2;
            unsigned LED01                :2;
            unsigned LED00                :2;
        } LEDStatus0_3;  
        
        // LED Registers 4-7 (Register 0x06)
        struct {
            unsigned LED07                :2;
            unsigned LED06                :2;
            unsigned LED05                :2;
            unsigned LED04                :2;
        } LEDStatus4_7;  
        
        // LED Registers 8-11 (Register 0x07)
        struct {
            unsigned LED11                :2;
            unsigned LED10                :2;
            unsigned LED09                :2;
            unsigned LED08                :2;
        } LEDStatus8_11;  
        
        // LED Registers 12-15 (Register 0x08)
        struct {
            unsigned LED15                :2;
            unsigned LED14                :2;
            unsigned LED13                :2;
            unsigned LED12                :2;
        } LEDStatus12_15;  
        
        // LED Registers 16-19 (Register 0x09)
        struct {
            unsigned LED19                :2;
            unsigned LED18                :2;
            unsigned LED17                :2;
            unsigned LED16                :2;
        } LEDStatus16_19;
        
        // LED Registers 20-23 (Register 0x0A)
        struct {
            unsigned LED23                :2;
            unsigned LED22                :2;
            unsigned LED21                :2;
            unsigned LED20                :2;
        } LEDStatus20_23;
        
        // LED Registers 24-27 (Register 0x0B)
        struct {
            unsigned reserved             :2;  // Assuming the remaining bits are reserved
            unsigned LED27                :2;
            unsigned LED26                :2;
            unsigned LED25                :2;
            unsigned LED24                :2;
        } LEDStatus24_27;
        
        // SWITCH Registers 0-7 (Register 0x0C)
        struct {
            unsigned SW07                 :1;
            unsigned SW06                 :1;
            unsigned SW05                 :1;
            unsigned SW04                 :1;
            unsigned SW03                 :1;
            unsigned SW02                 :1;
            unsigned SW01                 :1;
            unsigned SW00                 :1;
        } SwitchStatus0_7;  
        
        // SWITCH Registers 8-15 (Register 0x0D)
        struct {
            unsigned SW15                 :1;
            unsigned SW14                 :1;
            unsigned SW13                 :1;
            unsigned SW12                 :1;
            unsigned SW11                 :1;
            unsigned SW10                 :1;
            unsigned SW09                 :1;
            unsigned SW08                 :1;
        } SwitchStatus8_15;  
        
        // LED timing registers
        UnsignedChar led_slow_timing;         // Register 0x0E - Controls slow flash rate
        UnsignedChar led_fast_timing;         // Register 0x0F - Controls fast flash rate
    } st;
} i2cData;

	// Global Variables
	#ifdef MAIN_C

		volatile Flag flagMAIN1mSTimer;
		Flag flagMAINRestart;
		i2cData i2cDat;
        
	#else

		extern volatile Flag flagMAIN1mSTimer;
		extern Flag flagMAINRestart;
        extern i2cData i2cDat;


	#endif


#endif	/* MAIN_H */

