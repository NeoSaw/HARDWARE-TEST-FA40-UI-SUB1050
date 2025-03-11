/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.0.0
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

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define LED_7_TRIS                 TRISAbits.TRISA0
#define LED_7_LAT                  LATAbits.LATA0
#define LED_7_PORT                 PORTAbits.RA0
#define LED_7_WPU                  WPUAbits.WPUA0
#define LED_7_OD                   ODCONAbits.ODCA0
#define LED_7_ANS                  ANSELAbits.ANSA0
#define LED_7_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED_7_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED_7_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED_7_GetValue()           PORTAbits.RA0
#define LED_7_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED_7_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED_7_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED_7_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED_7_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED_7_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED_7_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED_7_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)
// get/set IO_RA1 aliases
#define LED_6_TRIS                 TRISAbits.TRISA1
#define LED_6_LAT                  LATAbits.LATA1
#define LED_6_PORT                 PORTAbits.RA1
#define LED_6_WPU                  WPUAbits.WPUA1
#define LED_6_OD                   ODCONAbits.ODCA1
#define LED_6_ANS                  ANSELAbits.ANSA1
#define LED_6_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED_6_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED_6_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED_6_GetValue()           PORTAbits.RA1
#define LED_6_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED_6_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED_6_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED_6_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED_6_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED_6_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED_6_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED_6_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)
// get/set IO_RA2 aliases
#define LED_11_TRIS                 TRISAbits.TRISA2
#define LED_11_LAT                  LATAbits.LATA2
#define LED_11_PORT                 PORTAbits.RA2
#define LED_11_WPU                  WPUAbits.WPUA2
#define LED_11_OD                   ODCONAbits.ODCA2
#define LED_11_ANS                  ANSELAbits.ANSA2
#define LED_11_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_11_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_11_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_11_GetValue()           PORTAbits.RA2
#define LED_11_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_11_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_11_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_11_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_11_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED_11_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED_11_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_11_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)
// get/set IO_RA3 aliases
#define LED_23_TRIS                 TRISAbits.TRISA3
#define LED_23_LAT                  LATAbits.LATA3
#define LED_23_PORT                 PORTAbits.RA3
#define LED_23_WPU                  WPUAbits.WPUA3
#define LED_23_OD                   ODCONAbits.ODCA3
#define LED_23_ANS                  ANSELAbits.ANSA3
#define LED_23_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED_23_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED_23_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED_23_GetValue()           PORTAbits.RA3
#define LED_23_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED_23_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED_23_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED_23_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED_23_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED_23_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED_23_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED_23_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)
// get/set IO_RA4 aliases
#define LED_24_TRIS                 TRISAbits.TRISA4
#define LED_24_LAT                  LATAbits.LATA4
#define LED_24_PORT                 PORTAbits.RA4
#define LED_24_WPU                  WPUAbits.WPUA4
#define LED_24_OD                   ODCONAbits.ODCA4
#define LED_24_ANS                  ANSELAbits.ANSA4
#define LED_24_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_24_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_24_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_24_GetValue()           PORTAbits.RA4
#define LED_24_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_24_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_24_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_24_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_24_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_24_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_24_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED_24_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)
// get/set IO_RA5 aliases
#define IO_SW4_TRIS                 TRISAbits.TRISA5
#define IO_SW4_LAT                  LATAbits.LATA5
#define IO_SW4_PORT                 PORTAbits.RA5
#define IO_SW4_WPU                  WPUAbits.WPUA5
#define IO_SW4_OD                   ODCONAbits.ODCA5
#define IO_SW4_ANS                  ANSELAbits.ANSA5
#define IO_SW4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_SW4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_SW4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_SW4_GetValue()           PORTAbits.RA5
#define IO_SW4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_SW4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_SW4_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_SW4_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define IO_SW4_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define IO_SW4_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define IO_SW4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_SW4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)
// get/set IO_RA6 aliases
#define AN_IR_TRIS                 TRISAbits.TRISA6
#define AN_IR_LAT                  LATAbits.LATA6
#define AN_IR_PORT                 PORTAbits.RA6
#define AN_IR_WPU                  WPUAbits.WPUA6
#define AN_IR_OD                   ODCONAbits.ODCA6
#define AN_IR_ANS                  ANSELAbits.ANSA6
#define AN_IR_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define AN_IR_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define AN_IR_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define AN_IR_GetValue()           PORTAbits.RA6
#define AN_IR_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define AN_IR_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define AN_IR_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define AN_IR_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define AN_IR_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define AN_IR_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define AN_IR_SetAnalogMode()      do { ANSELAbits.ANSA6 = 1; } while(0)
#define AN_IR_SetDigitalMode()     do { ANSELAbits.ANSA6 = 0; } while(0)
// get/set IO_RA7 aliases
#define IR_SENSOR_EN_TRIS                 TRISAbits.TRISA7
#define IR_SENSOR_EN_LAT                  LATAbits.LATA7
#define IR_SENSOR_EN_PORT                 PORTAbits.RA7
#define IR_SENSOR_EN_WPU                  WPUAbits.WPUA7
#define IR_SENSOR_EN_OD                   ODCONAbits.ODCA7
#define IR_SENSOR_EN_ANS                  ANSELAbits.ANSA7
#define IR_SENSOR_EN_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define IR_SENSOR_EN_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define IR_SENSOR_EN_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define IR_SENSOR_EN_GetValue()           PORTAbits.RA7
#define IR_SENSOR_EN_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define IR_SENSOR_EN_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define IR_SENSOR_EN_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define IR_SENSOR_EN_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define IR_SENSOR_EN_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define IR_SENSOR_EN_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define IR_SENSOR_EN_SetAnalogMode()      do { ANSELAbits.ANSA7 = 1; } while(0)
#define IR_SENSOR_EN_SetDigitalMode()     do { ANSELAbits.ANSA7 = 0; } while(0)
// get/set IO_RB0 aliases
#define LED_28_TRIS                 TRISBbits.TRISB0
#define LED_28_LAT                  LATBbits.LATB0
#define LED_28_PORT                 PORTBbits.RB0
#define LED_28_WPU                  WPUBbits.WPUB0
#define LED_28_OD                   ODCONBbits.ODCB0
#define LED_28_ANS                  ANSELBbits.ANSB0
#define LED_28_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define LED_28_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define LED_28_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define LED_28_GetValue()           PORTBbits.RB0
#define LED_28_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define LED_28_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define LED_28_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define LED_28_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define LED_28_SetPushPull()        do { ODCONBbits.ODCB0 = 0; } while(0)
#define LED_28_SetOpenDrain()       do { ODCONBbits.ODCB0 = 1; } while(0)
#define LED_28_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define LED_28_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)
// get/set IO_RB1 aliases
#define IO_SCL_TRIS                 TRISBbits.TRISB1
#define IO_SCL_LAT                  LATBbits.LATB1
#define IO_SCL_PORT                 PORTBbits.RB1
#define IO_SCL_WPU                  WPUBbits.WPUB1
#define IO_SCL_OD                   ODCONBbits.ODCB1
#define IO_SCL_ANS                  ANSELBbits.ANSB1
#define IO_SCL_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_SCL_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_SCL_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_SCL_GetValue()           PORTBbits.RB1
#define IO_SCL_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_SCL_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_SCL_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_SCL_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_SCL_SetPushPull()        do { ODCONBbits.ODCB1 = 0; } while(0)
#define IO_SCL_SetOpenDrain()       do { ODCONBbits.ODCB1 = 1; } while(0)
#define IO_SCL_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_SCL_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)
// get/set IO_RB2 aliases
#define IO_SDA_TRIS                 TRISBbits.TRISB2
#define IO_SDA_LAT                  LATBbits.LATB2
#define IO_SDA_PORT                 PORTBbits.RB2
#define IO_SDA_WPU                  WPUBbits.WPUB2
#define IO_SDA_OD                   ODCONBbits.ODCB2
#define IO_SDA_ANS                  ANSELBbits.ANSB2
#define IO_SDA_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define IO_SDA_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define IO_SDA_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define IO_SDA_GetValue()           PORTBbits.RB2
#define IO_SDA_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define IO_SDA_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define IO_SDA_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define IO_SDA_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define IO_SDA_SetPushPull()        do { ODCONBbits.ODCB2 = 0; } while(0)
#define IO_SDA_SetOpenDrain()       do { ODCONBbits.ODCB2 = 1; } while(0)
#define IO_SDA_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define IO_SDA_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)
// get/set IO_RB3 aliases
#define IO_SW5_TRIS                 TRISBbits.TRISB3
#define IO_SW5_LAT                  LATBbits.LATB3
#define IO_SW5_PORT                 PORTBbits.RB3
#define IO_SW5_WPU                  WPUBbits.WPUB3
#define IO_SW5_OD                   ODCONBbits.ODCB3
#define IO_SW5_ANS                  ANSELBbits.ANSB3
#define IO_SW5_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_SW5_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_SW5_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_SW5_GetValue()           PORTBbits.RB3
#define IO_SW5_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_SW5_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_SW5_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_SW5_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_SW5_SetPushPull()        do { ODCONBbits.ODCB3 = 0; } while(0)
#define IO_SW5_SetOpenDrain()       do { ODCONBbits.ODCB3 = 1; } while(0)
#define IO_SW5_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_SW5_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)
// get/set IO_RB4 aliases
#define LED_15_TRIS                 TRISBbits.TRISB4
#define LED_15_LAT                  LATBbits.LATB4
#define LED_15_PORT                 PORTBbits.RB4
#define LED_15_WPU                  WPUBbits.WPUB4
#define LED_15_OD                   ODCONBbits.ODCB4
#define LED_15_ANS                  ANSELBbits.ANSB4
#define LED_15_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define LED_15_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define LED_15_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define LED_15_GetValue()           PORTBbits.RB4
#define LED_15_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define LED_15_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define LED_15_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define LED_15_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define LED_15_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define LED_15_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define LED_15_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define LED_15_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)
// get/set IO_RB5 aliases
#define LED_16_TRIS                 TRISBbits.TRISB5
#define LED_16_LAT                  LATBbits.LATB5
#define LED_16_PORT                 PORTBbits.RB5
#define LED_16_WPU                  WPUBbits.WPUB5
#define LED_16_OD                   ODCONBbits.ODCB5
#define LED_16_ANS                  ANSELBbits.ANSB5
#define LED_16_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define LED_16_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define LED_16_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define LED_16_GetValue()           PORTBbits.RB5
#define LED_16_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define LED_16_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define LED_16_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define LED_16_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define LED_16_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define LED_16_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define LED_16_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define LED_16_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)
// get/set IO_RB6 aliases
#define IO_PGEC_TRIS                 TRISBbits.TRISB6
#define IO_PGEC_LAT                  LATBbits.LATB6
#define IO_PGEC_PORT                 PORTBbits.RB6
#define IO_PGEC_WPU                  WPUBbits.WPUB6
#define IO_PGEC_OD                   ODCONBbits.ODCB6
#define IO_PGEC_ANS                  ANSELBbits.ANSB6
#define IO_PGEC_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_PGEC_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_PGEC_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_PGEC_GetValue()           PORTBbits.RB6
#define IO_PGEC_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_PGEC_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_PGEC_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_PGEC_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define IO_PGEC_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define IO_PGEC_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define IO_PGEC_SetAnalogMode()      do { ANSELBbits.ANSB6 = 1; } while(0)
#define IO_PGEC_SetDigitalMode()     do { ANSELBbits.ANSB6 = 0; } while(0)
// get/set IO_RB7 aliases
#define IO_PGED_TRIS                 TRISBbits.TRISB7
#define IO_PGED_LAT                  LATBbits.LATB7
#define IO_PGED_PORT                 PORTBbits.RB7
#define IO_PGED_WPU                  WPUBbits.WPUB7
#define IO_PGED_OD                   ODCONBbits.ODCB7
#define IO_PGED_ANS                  ANSELBbits.ANSB7
#define IO_PGED_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_PGED_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_PGED_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_PGED_GetValue()           PORTBbits.RB7
#define IO_PGED_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_PGED_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_PGED_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_PGED_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define IO_PGED_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define IO_PGED_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define IO_PGED_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define IO_PGED_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)
// get/set IO_RC0 aliases
#define LED_22_TRIS                 TRISCbits.TRISC0
#define LED_22_LAT                  LATCbits.LATC0
#define LED_22_PORT                 PORTCbits.RC0
#define LED_22_WPU                  WPUCbits.WPUC0
#define LED_22_OD                   ODCONCbits.ODCC0
#define LED_22_ANS                  ANSELCbits.ANSC0
#define LED_22_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_22_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_22_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_22_GetValue()           PORTCbits.RC0
#define LED_22_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_22_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define LED_22_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define LED_22_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define LED_22_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define LED_22_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define LED_22_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define LED_22_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)
// get/set IO_RC1 aliases
#define LED_21_TRIS                 TRISCbits.TRISC1
#define LED_21_LAT                  LATCbits.LATC1
#define LED_21_PORT                 PORTCbits.RC1
#define LED_21_WPU                  WPUCbits.WPUC1
#define LED_21_OD                   ODCONCbits.ODCC1
#define LED_21_ANS                  ANSELCbits.ANSC1
#define LED_21_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define LED_21_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define LED_21_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define LED_21_GetValue()           PORTCbits.RC1
#define LED_21_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define LED_21_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define LED_21_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define LED_21_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define LED_21_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define LED_21_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define LED_21_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define LED_21_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)
// get/set IO_RC2 aliases
#define LED_20_TRIS                 TRISCbits.TRISC2
#define LED_20_LAT                  LATCbits.LATC2
#define LED_20_PORT                 PORTCbits.RC2
#define LED_20_WPU                  WPUCbits.WPUC2
#define LED_20_OD                   ODCONCbits.ODCC2
#define LED_20_ANS                  ANSELCbits.ANSC2
#define LED_20_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define LED_20_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define LED_20_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define LED_20_GetValue()           PORTCbits.RC2
#define LED_20_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define LED_20_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define LED_20_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define LED_20_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define LED_20_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define LED_20_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define LED_20_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define LED_20_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)
// get/set IO_RC3 aliases
#define LED_19_TRIS                 TRISCbits.TRISC3
#define LED_19_LAT                  LATCbits.LATC3
#define LED_19_PORT                 PORTCbits.RC3
#define LED_19_WPU                  WPUCbits.WPUC3
#define LED_19_OD                   ODCONCbits.ODCC3
#define LED_19_ANS                  ANSELCbits.ANSC3
#define LED_19_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define LED_19_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define LED_19_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define LED_19_GetValue()           PORTCbits.RC3
#define LED_19_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define LED_19_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define LED_19_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define LED_19_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define LED_19_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define LED_19_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define LED_19_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define LED_19_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)
// get/set IO_RC4 aliases
#define LED_18_TRIS                 TRISCbits.TRISC4
#define LED_18_LAT                  LATCbits.LATC4
#define LED_18_PORT                 PORTCbits.RC4
#define LED_18_WPU                  WPUCbits.WPUC4
#define LED_18_OD                   ODCONCbits.ODCC4
#define LED_18_ANS                  ANSELCbits.ANSC4
#define LED_18_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_18_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_18_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_18_GetValue()           PORTCbits.RC4
#define LED_18_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_18_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_18_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define LED_18_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define LED_18_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define LED_18_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define LED_18_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_18_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)
// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_WPU                  WPUCbits.WPUC5
#define IO_RC5_OD                   ODCONCbits.ODCC5
#define IO_RC5_ANS                  ANSELCbits.ANSC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IO_RC5_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IO_RC5_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define IO_RC5_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define IO_RC5_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define IO_RC5_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define IO_RC5_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)
// get/set IO_RC6 aliases
#define IO_TX_TRIS                 TRISCbits.TRISC6
#define IO_TX_LAT                  LATCbits.LATC6
#define IO_TX_PORT                 PORTCbits.RC6
#define IO_TX_WPU                  WPUCbits.WPUC6
#define IO_TX_OD                   ODCONCbits.ODCC6
#define IO_TX_ANS                  ANSELCbits.ANSC6
#define IO_TX_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_TX_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_TX_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_TX_GetValue()           PORTCbits.RC6
#define IO_TX_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_TX_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_TX_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IO_TX_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IO_TX_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define IO_TX_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define IO_TX_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_TX_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)
// get/set IO_RC7 aliases
#define IO_RX_TRIS                 TRISCbits.TRISC7
#define IO_RX_LAT                  LATCbits.LATC7
#define IO_RX_PORT                 PORTCbits.RC7
#define IO_RX_WPU                  WPUCbits.WPUC7
#define IO_RX_OD                   ODCONCbits.ODCC7
#define IO_RX_ANS                  ANSELCbits.ANSC7
#define IO_RX_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RX_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RX_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RX_GetValue()           PORTCbits.RC7
#define IO_RX_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RX_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RX_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IO_RX_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IO_RX_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define IO_RX_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define IO_RX_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RX_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)
// get/set IO_RD0 aliases
#define LED_9_TRIS                 TRISDbits.TRISD0
#define LED_9_LAT                  LATDbits.LATD0
#define LED_9_PORT                 PORTDbits.RD0
#define LED_9_WPU                  WPUDbits.WPUD0
#define LED_9_OD                   ODCONDbits.ODCD0
#define LED_9_ANS                  ANSELDbits.ANSD0
#define LED_9_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED_9_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED_9_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED_9_GetValue()           PORTDbits.RD0
#define LED_9_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED_9_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LED_9_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define LED_9_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define LED_9_SetPushPull()        do { ODCONDbits.ODCD0 = 0; } while(0)
#define LED_9_SetOpenDrain()       do { ODCONDbits.ODCD0 = 1; } while(0)
#define LED_9_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define LED_9_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)
// get/set IO_RD1 aliases
#define LED_4_TRIS                 TRISDbits.TRISD1
#define LED_4_LAT                  LATDbits.LATD1
#define LED_4_PORT                 PORTDbits.RD1
#define LED_4_WPU                  WPUDbits.WPUD1
#define LED_4_OD                   ODCONDbits.ODCD1
#define LED_4_ANS                  ANSELDbits.ANSD1
#define LED_4_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_4_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_4_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_4_GetValue()           PORTDbits.RD1
#define LED_4_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_4_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_4_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define LED_4_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define LED_4_SetPushPull()        do { ODCONDbits.ODCD1 = 0; } while(0)
#define LED_4_SetOpenDrain()       do { ODCONDbits.ODCD1 = 1; } while(0)
#define LED_4_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define LED_4_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)
// get/set IO_RD2 aliases
#define IO_SW1_TRIS                 TRISDbits.TRISD2
#define IO_SW1_LAT                  LATDbits.LATD2
#define IO_SW1_PORT                 PORTDbits.RD2
#define IO_SW1_WPU                  WPUDbits.WPUD2
#define IO_SW1_OD                   ODCONDbits.ODCD2
#define IO_SW1_ANS                  ANSELDbits.ANSD2
#define IO_SW1_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_SW1_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_SW1_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_SW1_GetValue()           PORTDbits.RD2
#define IO_SW1_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_SW1_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_SW1_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define IO_SW1_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define IO_SW1_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define IO_SW1_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define IO_SW1_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_SW1_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)
// get/set IO_RD3 aliases
#define LED_25_TRIS                 TRISDbits.TRISD3
#define LED_25_LAT                  LATDbits.LATD3
#define LED_25_PORT                 PORTDbits.RD3
#define LED_25_WPU                  WPUDbits.WPUD3
#define LED_25_OD                   ODCONDbits.ODCD3
#define LED_25_ANS                  ANSELDbits.ANSD3
#define LED_25_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED_25_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED_25_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED_25_GetValue()           PORTDbits.RD3
#define LED_25_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED_25_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LED_25_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define LED_25_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define LED_25_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define LED_25_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define LED_25_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define LED_25_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)
// get/set IO_RD4 aliases
#define LED_17_TRIS                 TRISDbits.TRISD4
#define LED_17_LAT                  LATDbits.LATD4
#define LED_17_PORT                 PORTDbits.RD4
#define LED_17_WPU                  WPUDbits.WPUD4
#define LED_17_OD                   ODCONDbits.ODCD4
#define LED_17_ANS                  ANSELDbits.ANSD4
#define LED_17_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define LED_17_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define LED_17_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define LED_17_GetValue()           PORTDbits.RD4
#define LED_17_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define LED_17_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define LED_17_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define LED_17_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define LED_17_SetPushPull()        do { ODCONDbits.ODCD4 = 0; } while(0)
#define LED_17_SetOpenDrain()       do { ODCONDbits.ODCD4 = 1; } while(0)
#define LED_17_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define LED_17_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)
// get/set IO_RD5 aliases
#define LED_8_TRIS                 TRISDbits.TRISD5
#define LED_8_LAT                  LATDbits.LATD5
#define LED_8_PORT                 PORTDbits.RD5
#define LED_8_WPU                  WPUDbits.WPUD5
#define LED_8_OD                   ODCONDbits.ODCD5
#define LED_8_ANS                  ANSELDbits.ANSD5
#define LED_8_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define LED_8_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define LED_8_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define LED_8_GetValue()           PORTDbits.RD5
#define LED_8_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define LED_8_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define LED_8_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define LED_8_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define LED_8_SetPushPull()        do { ODCONDbits.ODCD5 = 0; } while(0)
#define LED_8_SetOpenDrain()       do { ODCONDbits.ODCD5 = 1; } while(0)
#define LED_8_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define LED_8_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)
// get/set IO_RD6 aliases
#define LED_3_TRIS                 TRISDbits.TRISD6
#define LED_3_LAT                  LATDbits.LATD6
#define LED_3_PORT                 PORTDbits.RD6
#define LED_3_WPU                  WPUDbits.WPUD6
#define LED_3_OD                   ODCONDbits.ODCD6
#define LED_3_ANS                  ANSELDbits.ANSD6
#define LED_3_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define LED_3_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define LED_3_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define LED_3_GetValue()           PORTDbits.RD6
#define LED_3_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define LED_3_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define LED_3_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define LED_3_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define LED_3_SetPushPull()        do { ODCONDbits.ODCD6 = 0; } while(0)
#define LED_3_SetOpenDrain()       do { ODCONDbits.ODCD6 = 1; } while(0)
#define LED_3_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define LED_3_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)
// get/set IO_RD7 aliases
#define LED_2_TRIS                 TRISDbits.TRISD7
#define LED_2_LAT                  LATDbits.LATD7
#define LED_2_PORT                 PORTDbits.RD7
#define LED_2_WPU                  WPUDbits.WPUD7
#define LED_2_OD                   ODCONDbits.ODCD7
#define LED_2_ANS                  ANSELDbits.ANSD7
#define LED_2_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED_2_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED_2_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED_2_GetValue()           PORTDbits.RD7
#define LED_2_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED_2_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define LED_2_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define LED_2_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define LED_2_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define LED_2_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define LED_2_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define LED_2_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)
// get/set IO_RE0 aliases
#define LED_27_TRIS                 TRISEbits.TRISE0
#define LED_27_LAT                  LATEbits.LATE0
#define LED_27_PORT                 PORTEbits.RE0
#define LED_27_WPU                  WPUEbits.WPUE0
#define LED_27_OD                   ODCONEbits.ODCE0
#define LED_27_ANS                  ANSELEbits.ANSE0
#define LED_27_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define LED_27_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define LED_27_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define LED_27_GetValue()           PORTEbits.RE0
#define LED_27_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define LED_27_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define LED_27_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define LED_27_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define LED_27_SetPushPull()        do { ODCONEbits.ODCE0 = 0; } while(0)
#define LED_27_SetOpenDrain()       do { ODCONEbits.ODCE0 = 1; } while(0)
#define LED_27_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define LED_27_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)
// get/set IO_RE1 aliases
#define IO_SW3_TRIS                 TRISEbits.TRISE1
#define IO_SW3_LAT                  LATEbits.LATE1
#define IO_SW3_PORT                 PORTEbits.RE1
#define IO_SW3_WPU                  WPUEbits.WPUE1
#define IO_SW3_OD                   ODCONEbits.ODCE1
#define IO_SW3_ANS                  ANSELEbits.ANSE1
#define IO_SW3_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_SW3_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_SW3_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_SW3_GetValue()           PORTEbits.RE1
#define IO_SW3_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_SW3_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_SW3_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define IO_SW3_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define IO_SW3_SetPushPull()        do { ODCONEbits.ODCE1 = 0; } while(0)
#define IO_SW3_SetOpenDrain()       do { ODCONEbits.ODCE1 = 1; } while(0)
#define IO_SW3_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_SW3_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)
// get/set IO_RE2 aliases
#define IO_SW0_TRIS                 TRISEbits.TRISE2
#define IO_SW0_LAT                  LATEbits.LATE2
#define IO_SW0_PORT                 PORTEbits.RE2
#define IO_SW0_WPU                  WPUEbits.WPUE2
#define IO_SW0_OD                   ODCONEbits.ODCE2
#define IO_SW0_ANS                  ANSELEbits.ANSE2
#define IO_SW0_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define IO_SW0_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define IO_SW0_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define IO_SW0_GetValue()           PORTEbits.RE2
#define IO_SW0_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define IO_SW0_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define IO_SW0_SetPullup()          do { WPUEbits.WPUE2 = 1; } while(0)
#define IO_SW0_ResetPullup()        do { WPUEbits.WPUE2 = 0; } while(0)
#define IO_SW0_SetPushPull()        do { ODCONEbits.ODCE2 = 0; } while(0)
#define IO_SW0_SetOpenDrain()       do { ODCONEbits.ODCE2 = 1; } while(0)
#define IO_SW0_SetAnalogMode()      do { ANSELEbits.ANSE2 = 1; } while(0)
#define IO_SW0_SetDigitalMode()     do { ANSELEbits.ANSE2 = 0; } while(0)
// get/set IO_RE3 aliases
#define IO_RE3_TRIS                 TRISEbits.
#define IO_RE3_LAT                  LATEbits.
#define IO_RE3_PORT                 PORTEbits.RE3
#define IO_RE3_WPU                  WPUEbits.WPUE3
#define IO_RE3_OD                   ODCONEbits.
#define IO_RE3_ANS                  ANSELEbits.
#define IO_RE3_SetHigh()            do { LATEbits. = 1; } while(0)
#define IO_RE3_SetLow()             do { LATEbits. = 0; } while(0)
#define IO_RE3_Toggle()             do { LATEbits. = ~LATEbits.; } while(0)
#define IO_RE3_GetValue()           PORTEbits.RE3
#define IO_RE3_SetDigitalInput()    do { TRISEbits. = 1; } while(0)
#define IO_RE3_SetDigitalOutput()   do { TRISEbits. = 0; } while(0)
#define IO_RE3_SetPullup()          do { WPUEbits.WPUE3 = 1; } while(0)
#define IO_RE3_ResetPullup()        do { WPUEbits.WPUE3 = 0; } while(0)
#define IO_RE3_SetPushPull()        do { ODCONEbits. = 0; } while(0)
#define IO_RE3_SetOpenDrain()       do { ODCONEbits. = 1; } while(0)
#define IO_RE3_SetAnalogMode()      do { ANSELEbits. = 1; } while(0)
#define IO_RE3_SetDigitalMode()     do { ANSELEbits. = 0; } while(0)
// get/set IO_RF0 aliases
#define LED_10_TRIS                 TRISFbits.TRISF0
#define LED_10_LAT                  LATFbits.LATF0
#define LED_10_PORT                 PORTFbits.RF0
#define LED_10_WPU                  WPUFbits.WPUF0
#define LED_10_OD                   ODCONFbits.ODCF0
#define LED_10_ANS                  ANSELFbits.ANSF0
#define LED_10_SetHigh()            do { LATFbits.LATF0 = 1; } while(0)
#define LED_10_SetLow()             do { LATFbits.LATF0 = 0; } while(0)
#define LED_10_Toggle()             do { LATFbits.LATF0 = ~LATFbits.LATF0; } while(0)
#define LED_10_GetValue()           PORTFbits.RF0
#define LED_10_SetDigitalInput()    do { TRISFbits.TRISF0 = 1; } while(0)
#define LED_10_SetDigitalOutput()   do { TRISFbits.TRISF0 = 0; } while(0)
#define LED_10_SetPullup()          do { WPUFbits.WPUF0 = 1; } while(0)
#define LED_10_ResetPullup()        do { WPUFbits.WPUF0 = 0; } while(0)
#define LED_10_SetPushPull()        do { ODCONFbits.ODCF0 = 0; } while(0)
#define LED_10_SetOpenDrain()       do { ODCONFbits.ODCF0 = 1; } while(0)
#define LED_10_SetAnalogMode()      do { ANSELFbits.ANSF0 = 1; } while(0)
#define LED_10_SetDigitalMode()     do { ANSELFbits.ANSF0 = 0; } while(0)
// get/set IO_RF1 aliases
#define LED_5_TRIS                 TRISFbits.TRISF1
#define LED_5_LAT                  LATFbits.LATF1
#define LED_5_PORT                 PORTFbits.RF1
#define LED_5_WPU                  WPUFbits.WPUF1
#define LED_5_OD                   ODCONFbits.ODCF1
#define LED_5_ANS                  ANSELFbits.ANSF1
#define LED_5_SetHigh()            do { LATFbits.LATF1 = 1; } while(0)
#define LED_5_SetLow()             do { LATFbits.LATF1 = 0; } while(0)
#define LED_5_Toggle()             do { LATFbits.LATF1 = ~LATFbits.LATF1; } while(0)
#define LED_5_GetValue()           PORTFbits.RF1
#define LED_5_SetDigitalInput()    do { TRISFbits.TRISF1 = 1; } while(0)
#define LED_5_SetDigitalOutput()   do { TRISFbits.TRISF1 = 0; } while(0)
#define LED_5_SetPullup()          do { WPUFbits.WPUF1 = 1; } while(0)
#define LED_5_ResetPullup()        do { WPUFbits.WPUF1 = 0; } while(0)
#define LED_5_SetPushPull()        do { ODCONFbits.ODCF1 = 0; } while(0)
#define LED_5_SetOpenDrain()       do { ODCONFbits.ODCF1 = 1; } while(0)
#define LED_5_SetAnalogMode()      do { ANSELFbits.ANSF1 = 1; } while(0)
#define LED_5_SetDigitalMode()     do { ANSELFbits.ANSF1 = 0; } while(0)
// get/set IO_RF2 aliases
#define IO_SW2_TRIS                 TRISFbits.TRISF2
#define IO_SW2_LAT                  LATFbits.LATF2
#define IO_SW2_PORT                 PORTFbits.RF2
#define IO_SW2_WPU                  WPUFbits.WPUF2
#define IO_SW2_OD                   ODCONFbits.ODCF2
#define IO_SW2_ANS                  ANSELFbits.ANSF2
#define IO_SW2_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define IO_SW2_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define IO_SW2_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define IO_SW2_GetValue()           PORTFbits.RF2
#define IO_SW2_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define IO_SW2_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define IO_SW2_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define IO_SW2_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define IO_SW2_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define IO_SW2_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define IO_SW2_SetAnalogMode()      do { ANSELFbits.ANSF2 = 1; } while(0)
#define IO_SW2_SetDigitalMode()     do { ANSELFbits.ANSF2 = 0; } while(0)
// get/set IO_RF3 aliases
#define LED_26_TRIS                 TRISFbits.TRISF3
#define LED_26_LAT                  LATFbits.LATF3
#define LED_26_PORT                 PORTFbits.RF3
#define LED_26_WPU                  WPUFbits.WPUF3
#define LED_26_OD                   ODCONFbits.ODCF3
#define LED_26_ANS                  ANSELFbits.ANSF3
#define LED_26_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED_26_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED_26_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED_26_GetValue()           PORTFbits.RF3
#define LED_26_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED_26_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED_26_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED_26_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED_26_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED_26_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED_26_SetAnalogMode()      do { ANSELFbits.ANSF3 = 1; } while(0)
#define LED_26_SetDigitalMode()     do { ANSELFbits.ANSF3 = 0; } while(0)
// get/set IO_RF4 aliases
#define IO_SW6_TRIS                 TRISFbits.TRISF4
#define IO_SW6_LAT                  LATFbits.LATF4
#define IO_SW6_PORT                 PORTFbits.RF4
#define IO_SW6_WPU                  WPUFbits.WPUF4
#define IO_SW6_OD                   ODCONFbits.ODCF4
#define IO_SW6_ANS                  ANSELFbits.ANSF4
#define IO_SW6_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define IO_SW6_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define IO_SW6_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define IO_SW6_GetValue()           PORTFbits.RF4
#define IO_SW6_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define IO_SW6_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define IO_SW6_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define IO_SW6_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define IO_SW6_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define IO_SW6_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define IO_SW6_SetAnalogMode()      do { ANSELFbits.ANSF4 = 1; } while(0)
#define IO_SW6_SetDigitalMode()     do { ANSELFbits.ANSF4 = 0; } while(0)
// get/set IO_RF5 aliases
#define LED_12_TRIS                 TRISFbits.TRISF5
#define LED_12_LAT                  LATFbits.LATF5
#define LED_12_PORT                 PORTFbits.RF5
#define LED_12_WPU                  WPUFbits.WPUF5
#define LED_12_OD                   ODCONFbits.ODCF5
#define LED_12_ANS                  ANSELFbits.ANSF5
#define LED_12_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define LED_12_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define LED_12_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define LED_12_GetValue()           PORTFbits.RF5
#define LED_12_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define LED_12_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define LED_12_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define LED_12_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define LED_12_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define LED_12_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define LED_12_SetAnalogMode()      do { ANSELFbits.ANSF5 = 1; } while(0)
#define LED_12_SetDigitalMode()     do { ANSELFbits.ANSF5 = 0; } while(0)
// get/set IO_RF6 aliases
#define LED_13_TRIS                 TRISFbits.TRISF6
#define LED_13_LAT                  LATFbits.LATF6
#define LED_13_PORT                 PORTFbits.RF6
#define LED_13_WPU                  WPUFbits.WPUF6
#define LED_13_OD                   ODCONFbits.ODCF6
#define LED_13_ANS                  ANSELFbits.ANSF6
#define LED_13_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define LED_13_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define LED_13_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define LED_13_GetValue()           PORTFbits.RF6
#define LED_13_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define LED_13_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define LED_13_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define LED_13_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define LED_13_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define LED_13_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define LED_13_SetAnalogMode()      do { ANSELFbits.ANSF6 = 1; } while(0)
#define LED_13_SetDigitalMode()     do { ANSELFbits.ANSF6 = 0; } while(0)
// get/set IO_RF7 aliases
#define LED_14_TRIS                 TRISFbits.TRISF7
#define LED_14_LAT                  LATFbits.LATF7
#define LED_14_PORT                 PORTFbits.RF7
#define LED_14_WPU                  WPUFbits.WPUF7
#define LED_14_OD                   ODCONFbits.ODCF7
#define LED_14_ANS                  ANSELFbits.ANSF7
#define LED_14_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define LED_14_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define LED_14_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define LED_14_GetValue()           PORTFbits.RF7
#define LED_14_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define LED_14_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define LED_14_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define LED_14_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define LED_14_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define LED_14_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define LED_14_SetAnalogMode()      do { ANSELFbits.ANSF7 = 1; } while(0)
#define LED_14_SetDigitalMode()     do { ANSELFbits.ANSF7 = 0; } while(0)
/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/