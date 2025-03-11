#define EEROM_C
#include <xc.h>
#include "definitions.h"
#include "parameters.h"
#include "main.h"
#include "mcc_generated_files/nvm/nvm.h"


void EEPollWriteParameters( void )
{
    /* Custom routine for writing parameters to the eerom. */
    static UnsignedChar ee_send_time;
    static UnsignedInt index;
    UnsignedChar a;

    /* Attempt a new write only after 'EE_POLL_WRITE_TIME' */
    ++ee_send_time;
    if( ee_send_time > EE_POLL_WRITE_TIME )
    {
        /* Restart the send time. */
        ee_send_time = 0U;

        /* Test that device is able to be written. */
        if( NVM_IsBusy() == CLEAR )
        {
            /* Increment to the next eerom location. */
            ++index;

            /* Determine the parameter value which should lie in the EEROM. */
            switch( index )
            {

                /******************/
                /* Serial Number. */
                /******************/
                case 4U:	/* LSByte. */
                a = (UnsignedChar)i2cDat.st.serial_number.serial_low;
                    break;

                case 3U:	/* MSByte. */
                a = (UnsignedChar)(i2cDat.st.serial_number.serial_high);
                    break;

                /***************************/
                /* Version. */
                /***************************/
                case 2U:
                a = i2cDat.st.version;
                    break;

                /****************/
                /* Device Type. */
                /****************/
                case 1U:
                //a = i2cDat.st.device_info;
                    break;

                /*****************/
                /* Base Address. */
                /*****************/
                case 0U:
                default:
                index = 0U;
                a = i2cDat.st.update_period;
                    break;
            }

            /* Determine whether eerom compares with parameter. */
            if( a != FLASH_Read( index ) )
            {
                //eeprom_write( index, a );
            }
        }
    }
}

void EEReadParameters( void )
/* Custom function for reading out the eerom parameters. */
{

    /* Test that device is able to be read. */
    if( NVM_IsBusy() == CLEAR )
    {
	/* Read eerom out to the parameters. */

	/*****************/
	/* Base Address. */
	/*****************/
	//i2cDat.st.update_period = FLASH_Read( 0U );
	asm( "NOP" );

	/****************/
	/* Device Type. */
	/****************/
	//i2cDat.st.device_info = FLASH_Read( 1U );
	asm( "NOP" );

	/***************************/
	/* Code Version. */
	/***************************/
	//i2cDat.st.version = FLASH_Read( 2U );
	asm( "NOP" );

	/*****************/
	/* Serial Number */
	/*****************/
	//i2cDat.st.serial_number.serial_high = FLASH_Read( 3U );
	asm( "NOP" );
		
	//i2cDat.st.serial_number.serial_low = FLASH_Read( 4U );		/* LSByte. */

    }
}
