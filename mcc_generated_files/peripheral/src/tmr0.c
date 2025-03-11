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

#include <xc.h>
#include "../tmr0.h"
#include "../../../main.h"

// Set the TMR0 module to the options selected in the user interface.
void TMR0_Initialize(void) {
    // T0EN enabled; T016BIT 16-bit; T0OUTPS 1:2; 
    T0CON0 = 0x91;
    // T0CS FOSC/4; T0ASYNC synchronised; T0CKPS 1:1; 
    T0CON1 = 0x40;
    // TMR0H 255; 
    TMR0H = 0xFF;  
    TMR0L = 0xFE;

    // Enable Timer0 interrupt
    PIE0bits.TMR0IE = 1;
    
    // Clear the interrupt flag
    PIR0bits.TMR0IF = 0;
}

void TMR0_ISR(void)
{
    // Clear the TMR0 interrupt flag
    PIR0bits.TMR0IF = 0;
    
    // Reset TMR0 for next 1ms interval
    TMR0H = 0xFF;  
    TMR0L = 0xFE;
    
    // Set the flag to indicate a 1ms timer event
    //flagMAIN1mSTimer = TRUE;
}
