#define LED_C

#include <xc.h>
#include "definitions.h"
#include "led.h"
#include "mcc_generated_files/system/pins.h"


void POLLLed(void)
{

	static UnsignedInt timer;
	static Flag status;

	/* Increment the timer. */
	++timer;

	if( status == LED_ON )
	{
		if( timer > LAMP_FAST_ON_TIME )
		{
			status = LED_OFF;
			timer = 0U;
		}
	}
	else
	{
		if( timer > LAMP_FAST_OFF_TIME )
		{
			status = LED_ON;
			timer = 0U;
		}
	}

	/*************************/
	/*	control lights		 */
	/*************************/
	if( light_1.control == LED_ON )
	{
		//LED_1_SetHigh();
	}
	else
	if(	 light_1.control == FLASH )
	{
		if( status == LED_OFF )
		{
			//LED_1_SetLow();

		}
		else
		{
			//LED_1_SetHigh();

		}
	}
	else
	{
		//LED_1_SetLow();
	}


	if( light_2.control == LED_ON )
	{
		LED_2_SetHigh();
	}
	else
	if(	 light_2.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_2_SetLow();

		}
		else
		{
			LED_2_SetHigh();

		}
	}
	else
	{
		LED_2_SetLow();
	}


	if( light_3.control == LED_ON )
	{
		LED_3_SetHigh();
	}
	else
	if(	 light_3.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_3_SetLow();

		}
		else
		{
			LED_3_SetHigh();

		}
	}
	else
	{
		LED_3_SetLow();
	}


	if( light_4.control == LED_ON )
	{
		LED_4_SetHigh();
	}
	else
	if(	 light_4.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_4_SetLow();

		}
		else
		{
			LED_4_SetHigh();

		}
	}
	else
	{
		LED_4_SetLow();
	}

	if( light_5.control == LED_ON )
	{
		LED_5_SetHigh();
	}
	else
	if(	 light_5.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_5_SetLow();

		}
		else
		{
			LED_5_SetHigh();

		}
	}
	else
	{
		LED_5_SetLow();
	}

	if( light_6.control == LED_ON )
	{
		LED_6_SetHigh();
	}
	else
	if(	 light_6.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_6_SetLow();

		}
		else
		{
			LED_6_SetHigh();

		}
	}
	else
	{
		LED_6_SetLow();
	}

	if( light_7.control == LED_ON )
	{
		LED_7_SetHigh();
	}
	else
	if(	 light_7.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_7_SetLow();

		}
		else
		{
			LED_7_SetHigh();

		}
	}
	else
	{
		LED_7_SetLow();
	}

	if( light_8.control == LED_ON )
	{
		LED_8_SetHigh();
	}
	else
	if(	 light_8.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_8_SetLow();

		}
		else
		{
			LED_8_SetHigh();

		}
	}
	else
	{
		LED_8_SetLow();
	}

	if( light_9.control == LED_ON )
	{
		LED_9_SetHigh();
	}
	else
	if(	 light_9.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_9_SetLow();

		}
		else
		{
			LED_9_SetHigh();

		}
	}
	else
	{
		LED_9_SetLow();
	}


	if( light_10.control == LED_ON )
	{
		LED_10_SetHigh();
	}
	else
	if(	 light_10.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_10_SetLow();

		}
		else
		{
			LED_10_SetHigh();

		}
	}
	else
	{
		LED_10_SetLow();
	}


	if( light_11.control == LED_ON )
	{
		LED_11_SetHigh();
	}
	else
	if(	 light_11.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_11_SetLow();

		}
		else
		{
			LED_11_SetHigh();

		}
	}
	else
	{
		LED_11_SetLow();
	}

    
	if( light_12.control == LED_ON )
	{
		LED_12_SetHigh();
	}
	else
	if(	 light_12.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_12_SetLow();

		}
		else
		{
			LED_12_SetHigh();

		}
	}
	else
	{
		LED_12_SetLow();
	}
    
    
	if( light_13.control == LED_ON )
	{
		LED_13_SetHigh();
	}
	else
	if(	 light_13.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_13_SetLow();

		}
		else
		{
			LED_13_SetHigh();

		}
	}
	else
	{
		LED_13_SetLow();
	}

	if( light_14.control == LED_ON )
	{
		LED_14_SetHigh();
	}
	else
	if(	 light_14.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_14_SetLow();

		}
		else
		{
			LED_14_SetHigh();

		}
	}
	else
	{
		LED_14_SetLow();
	}

    
	if( light_15.control == LED_ON )
	{
		LED_15_SetHigh();
	}
	else
	if(	 light_15.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_15_SetLow();

		}
		else
		{
			LED_15_SetHigh();

		}
	}
	else
	{
		LED_15_SetLow();
	}

	if( light_16.control == LED_ON )
	{
		LED_16_SetHigh();
	}
	else
	if(	 light_16.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_16_SetLow();

		}
		else
		{
			LED_16_SetHigh();

		}
	}
	else
	{
		LED_16_SetLow();
	}

	if( light_17.control == LED_ON )
	{
		LED_17_SetHigh();
	}
	else
	if(	 light_17.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_17_SetLow();

		}
		else
		{
			LED_17_SetHigh();

		}
	}
	else
	{
		LED_17_SetLow();
	}


	if( light_18.control == LED_ON )
	{
		LED_18_SetHigh();
	}
	else
	if(	 light_18.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_18_SetLow();

		}
		else
		{
			LED_18_SetHigh();

		}
	}
	else
	{
		LED_18_SetLow();
	}


	if( light_19.control == LED_ON )
	{
		LED_19_SetHigh();
	}
	else
	if(	 light_19.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_19_SetLow();

		}
		else
		{
			LED_19_SetHigh();

		}
	}
	else
	{
		LED_19_SetLow();
	}


	if( light_20.control == LED_ON )
	{
		LED_20_SetHigh();
	}
	else
	if(	 light_20.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_20_SetLow();

		}
		else
		{
			LED_20_SetHigh();

		}
	}
	else
	{
		LED_20_SetLow();
	}

	if( light_21.control == LED_ON )
	{
		LED_21_SetHigh();
	}
	else
	if(	 light_21.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_21_SetLow();

		}
		else
		{
			LED_21_SetHigh();

		}
	}
	else
	{
		LED_21_SetLow();
	}

	if( light_22.control == LED_ON )
	{
		LED_22_SetHigh();
	}
	else
	if(	 light_22.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_22_SetLow();

		}
		else
		{
			LED_22_SetHigh();

		}
	}
	else
	{
		LED_22_SetLow();
	}

	if( light_23.control == LED_ON )
	{
		LED_23_SetHigh();
	}
	else
	if(	 light_23.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_23_SetLow();

		}
		else
		{
			LED_23_SetHigh();

		}
	}
	else
	{
		LED_23_SetLow();
	}

	if( light_24.control == LED_ON )
	{
		LED_24_SetHigh();
	}
	else
	if(	 light_24.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_24_SetLow();

		}
		else
		{
			LED_24_SetHigh();

		}
	}
	else
	{
		LED_24_SetLow();
	}
    
	if( light_25.control == LED_ON )
	{
		LED_25_SetHigh();
	}
	else
	if(	 light_25.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_25_SetLow();

		}
		else
		{
			LED_25_SetHigh();

		}
	}
	else
	{
		LED_25_SetLow();
	}


	if( light_26.control == LED_ON )
	{
		LED_26_SetHigh();
	}
	else
	if(	 light_26.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_26_SetLow();

		}
		else
		{
			LED_26_SetHigh();

		}
	}
	else
	{
		LED_26_SetLow();
	}


	if( light_27.control == LED_ON )
	{
		LED_27_SetHigh();
	}
	else
	if(	 light_27.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_27_SetLow();

		}
		else
		{
			LED_27_SetHigh();

		}
	}
	else
	{
		LED_27_SetLow();
	}


	if( light_28.control == LED_ON )
	{
		LED_28_SetHigh();
	}
	else
	if(	 light_28.control == FLASH )
	{
		if( status == LED_OFF )
		{
			LED_28_SetLow();

		}
		else
		{
			LED_28_SetHigh();

		}
	}
	else
	{
		LED_28_SetLow();
	}

}


void MAINSetLEDAction( enum lamp_action_enum led_action )
{
	
	
	switch( led_action )
	{

		case LIGHT_1_ON:
			light_1.control = LED_ON;
			break;

		case LIGHT_1_FAST_FLASH:
			light_1.control = FLASH;
			break;

		case LIGHT_1_OFF:
			light_1.control = LED_OFF;
			break;

		case LIGHT_2_ON:
			light_2.control = LED_ON;
			break;

		case LIGHT_2_FAST_FLASH:
			light_2.control = FLASH;
			break;

		case LIGHT_2_OFF:
			light_2.control = LED_OFF;
			break;

		case LIGHT_3_ON:
			light_3.control = LED_ON;
			break;

		case LIGHT_3_FAST_FLASH:
			light_3.control = FLASH;
			break;

		case LIGHT_3_OFF:
			light_3.control = LED_OFF;
			break;

		case LIGHT_4_ON:
			light_4.control = LED_ON;
			break;

		case LIGHT_4_FAST_FLASH:
			light_4.control = FLASH;
			break;

		case LIGHT_4_OFF:
			light_4.control = LED_OFF;
			break;

		case LIGHT_5_ON:
			light_5.control = LED_ON;
			break;

		case LIGHT_5_FAST_FLASH:
			light_5.control = FLASH;
			break;

		case LIGHT_5_OFF:
			light_5.control = LED_OFF;
			break;

		case LIGHT_6_ON:
			light_6.control = LED_ON;
			break;

		case LIGHT_6_FAST_FLASH:
			light_6.control = FLASH;
			break;

		case LIGHT_6_OFF:
			light_6.control = LED_OFF;
			break;

		case LIGHT_7_ON:
			light_7.control = LED_ON;
			break;

		case LIGHT_7_FAST_FLASH:
			light_7.control = FLASH;
			break;

		case LIGHT_7_OFF:
			light_7.control = LED_OFF;
			break;

		case LIGHT_8_ON:
			light_8.control = LED_ON;
			break;

		case LIGHT_8_FAST_FLASH:
			light_8.control = FLASH;
			break;

		case LIGHT_8_OFF:
			light_8.control = LED_OFF;
			break;

		case LIGHT_9_ON:
			light_9.control = LED_ON;
			break;

		case LIGHT_9_FAST_FLASH:
			light_9.control = FLASH;
			break;

		case LIGHT_9_OFF:
			light_9.control = LED_OFF;
			break;

		case LIGHT_10_ON:
			light_10.control = LED_ON;
			break;

		case LIGHT_10_FAST_FLASH:
			light_10.control = FLASH;
			break;

		case LIGHT_10_OFF:
			light_10.control = LED_OFF;
			break;

		case LIGHT_11_ON:
			light_11.control = LED_ON;
			break;

		case LIGHT_11_FAST_FLASH:
			light_11.control = FLASH;
			break;

		case LIGHT_11_OFF:
			light_11.control = LED_OFF;
			break;

		case LIGHT_12_ON:
			light_12.control = LED_ON;
			break;

		case LIGHT_12_FAST_FLASH:
			light_12.control = FLASH;
			break;

		case LIGHT_12_OFF:
			light_12.control = LED_OFF;
			break;

		case LIGHT_13_ON:
			light_13.control = LED_ON;
			break;

		case LIGHT_13_FAST_FLASH:
			light_13.control = FLASH;
			break;

		case LIGHT_13_OFF:
			light_13.control = LED_OFF;
			break;

		case LIGHT_14_ON:
			light_14.control = LED_ON;
			break;

		case LIGHT_14_FAST_FLASH:
			light_14.control = FLASH;
			break;

		case LIGHT_14_OFF:
			light_14.control = LED_OFF;
			break;

		case LIGHT_15_ON:
			light_15.control = LED_ON;
			break;

		case LIGHT_15_FAST_FLASH:
			light_15.control = FLASH;
			break;

		case LIGHT_15_OFF:
			light_15.control = LED_OFF;
			break;

		case LIGHT_16_ON:
			light_16.control = LED_ON;
			break;

		case LIGHT_16_FAST_FLASH:
			light_16.control = FLASH;
			break;

		case LIGHT_16_OFF:
			light_16.control = LED_OFF;
			break;

		case LIGHT_17_ON:
			light_17.control = LED_ON;
			break;

		case LIGHT_17_FAST_FLASH:
			light_17.control = FLASH;
			break;

		case LIGHT_17_OFF:
			light_17.control = LED_OFF;
			break;

		case LIGHT_18_ON:
			light_18.control = LED_ON;
			break;

		case LIGHT_18_FAST_FLASH:
			light_18.control = FLASH;
			break;

		case LIGHT_18_OFF:
			light_18.control = LED_OFF;
			break;

		case LIGHT_19_ON:
			light_19.control = LED_ON;
			break;

		case LIGHT_19_FAST_FLASH:
			light_19.control = FLASH;
			break;

		case LIGHT_19_OFF:
			light_19.control = LED_OFF;
			break;

		case LIGHT_20_ON:
			light_20.control = LED_ON;
			break;

		case LIGHT_20_FAST_FLASH:
			light_20.control = FLASH;
			break;

		case LIGHT_20_OFF:
			light_20.control = LED_OFF;
			break;

		case LIGHT_21_ON:
			light_21.control = LED_ON;
			break;

		case LIGHT_21_FAST_FLASH:
			light_21.control = FLASH;
			break;

		case LIGHT_21_OFF:
			light_21.control = LED_OFF;
			break;

		case LIGHT_22_ON:
			light_22.control = LED_ON;
			break;

		case LIGHT_22_FAST_FLASH:
			light_22.control = FLASH;
			break;

		case LIGHT_22_OFF:
			light_22.control = LED_OFF;
			break;

		case LIGHT_23_ON:
			light_23.control = LED_ON;
			break;

		case LIGHT_23_FAST_FLASH:
			light_23.control = FLASH;
			break;

		case LIGHT_23_OFF:
			light_23.control = LED_OFF;
			break;

		case LIGHT_24_ON:
			light_24.control = LED_ON;
			break;

		case LIGHT_24_FAST_FLASH:
			light_24.control = FLASH;
			break;

		case LIGHT_24_OFF:
			light_24.control = LED_OFF;
			break;
            
		case LIGHT_25_ON:
			light_25.control = LED_ON;
			break;

		case LIGHT_25_FAST_FLASH:
			light_25.control = FLASH;
			break;

		case LIGHT_25_OFF:
			light_25.control = LED_OFF;
			break;

		case LIGHT_26_ON:
			light_26.control = LED_ON;
			break;

		case LIGHT_26_FAST_FLASH:
			light_26.control = FLASH;
			break;

		case LIGHT_26_OFF:
			light_26.control = LED_OFF;
			break;

		case LIGHT_27_ON:
			light_27.control = LED_ON;
			break;

		case LIGHT_27_FAST_FLASH:
			light_27.control = FLASH;
			break;

		case LIGHT_27_OFF:
			light_27.control = LED_OFF;
			break;

		case LIGHT_28_ON:
			light_28.control = LED_ON;
			break;

		case LIGHT_28_FAST_FLASH:
			light_28.control = FLASH;
			break;

		case LIGHT_28_OFF:
			light_28.control = LED_OFF;
			break;            

		case MAIN_LIGHT_ALL_OFF:
		default:
			/* Reset to a known state */
			light_1.control = LED_OFF;
			light_2.control = LED_OFF;
			light_3.control = LED_OFF;
			light_4.control = LED_OFF;
			light_5.control = LED_OFF;
			light_6.control = LED_OFF;
			light_7.control = LED_OFF;
			light_8.control = LED_OFF;
			light_9.control = LED_OFF;
			light_10.control = LED_OFF;
			light_11.control = LED_OFF;
			light_12.control = LED_OFF;
			light_13.control = LED_OFF;
			light_14.control = LED_OFF;
			light_15.control = LED_OFF;
			light_16.control = LED_OFF;
			light_17.control = LED_OFF;
			light_18.control = LED_OFF;
			light_19.control = LED_OFF;
			light_20.control = LED_OFF;
			light_21.control = LED_OFF;
			light_22.control = LED_OFF;
			light_23.control = LED_OFF;
			light_24.control = LED_OFF;
            light_25.control = LED_OFF;
            light_26.control = LED_OFF;
            light_27.control = LED_OFF;
            light_28.control = LED_OFF;

			break;
            
        case MAIN_LIGHT_ALL_ON:
			/* Set to ON */
			light_1.control = LED_ON;
			light_2.control = LED_ON;
			light_3.control = LED_ON;
			light_4.control = LED_ON;
			light_5.control = LED_ON;
			light_6.control = LED_ON;
			light_7.control = LED_ON;
			light_8.control = LED_ON;
			light_9.control = LED_ON;
			light_10.control = LED_ON;
			light_11.control = LED_ON;
			light_12.control = LED_ON;
			light_13.control = LED_ON;
			light_14.control = LED_ON;
			light_15.control = LED_ON;
			light_16.control = LED_ON;
			light_17.control = LED_ON;
			light_18.control = LED_ON;
			light_19.control = LED_ON;
			light_20.control = LED_ON;
			light_21.control = LED_ON;
			light_22.control = LED_ON;
			light_23.control = LED_ON;
			light_24.control = LED_ON;
            light_25.control = LED_ON;
            light_26.control = LED_ON;
            light_27.control = LED_ON;
            light_28.control = LED_ON;
	}
}
