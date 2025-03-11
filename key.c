#define KEY_C

#include "definitions.h"
#include "key.h"
#include "mcc_generated_files/system/pins.h"

/* Local Definitions. */
#define KEY_DEPRESSED		0U
#define KEY_RELEASED		0xFFU
#define KEY_INITIALIZE		0x55U
#define KEY_RELEASED_OR		0x01U
#define KEY_DEPRESSED_AND	0xFEU

enum key_states_enum
{
	KEY_STATE_NO_KEY,
	KEY_STATE_SWITCH_0_ONLY,
	KEY_STATE_SWITCH_1_ONLY,
	KEY_STATE_SWITCH_2_ONLY,
	KEY_STATE_SWITCH_3_ONLY,
	KEY_STATE_SWITCH_4_ONLY,
	KEY_STATE_SWITCH_5_ONLY,
	KEY_STATE_SWITCH_6_ONLY,

	KEY_STATE_SWITCH_0_COMPLETE,
	KEY_STATE_SWITCH_1_COMPLETE,
	KEY_STATE_SWITCH_2_COMPLETE,
	KEY_STATE_SWITCH_3_COMPLETE,
	KEY_STATE_SWITCH_4_COMPLETE,
	KEY_STATE_SWITCH_5_COMPLETE,
	KEY_STATE_SWITCH_6_COMPLETE,

	KEY_STATE_ERROR
};

UnsignedChar KEYPoll( void )
/* To be polled every 10mS. */
{
	static enum key_states_enum state = KEY_STATE_ERROR;
	static UnsignedChar switch_0 = KEY_INITIALIZE;
	static UnsignedChar switch_1 = KEY_INITIALIZE;
	static UnsignedChar switch_2 = KEY_INITIALIZE;
	static UnsignedChar switch_3 = KEY_INITIALIZE;
	static UnsignedChar switch_4 = KEY_INITIALIZE;
	static UnsignedChar switch_5 = KEY_INITIALIZE;
	static UnsignedChar switch_6 = KEY_INITIALIZE;
	static UnsignedChar switch_7 = KEY_INITIALIZE;
	UnsignedChar test_switch;
	UnsignedChar return_value = KEY_NO_KEY;
	
	/*****************************************************/
	/* Add the current status of the credit key to 'switch_0'. */
	/*****************************************************/
	switch_0 <<= 1U;
	if( IO_SW0_GetValue() == LOGIC_HIGH )
	{
		/* The switch_0 key pin is released at this loop. */
		switch_0 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_0 key pin is depressed at this loop. */
		switch_0 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_1'. */
	/*********************************************************/
	switch_1 <<= 1U;
	if( IO_SW1_GetValue() == LOGIC_HIGH )
	{
		/* The switch_1 key pin is released at this loop. */
		switch_1 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_1 key pin is depressed at this loop. */
		switch_1 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_2'. */
	/*********************************************************/
	switch_2 <<= 1U;
	if( IO_SW2_GetValue() == LOGIC_HIGH )
	{
		/* The switch_2 key pin is released at this loop. */
		switch_2 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_2 key pin is depressed at this loop. */
		switch_2 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_3'. */
	/*********************************************************/
	switch_3 <<= 1U;
	if( IO_SW3_GetValue() == LOGIC_HIGH )
	{
		/* The switch_3 key pin is released at this loop. */
		switch_3 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_3 key pin is depressed at this loop. */
		switch_3 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_4'. */
	/*********************************************************/
	switch_4 <<= 1U;
	if( IO_SW4_GetValue() == LOGIC_HIGH )
	{
		/* The switch_4 key pin is released at this loop. */
		switch_4 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_4 key pin is depressed at this loop. */
		switch_4 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_5'. */
	/*********************************************************/
	switch_5 <<= 1U;
	if( IO_SW5_GetValue() == LOGIC_HIGH )
	{
		/* The switch_5 key pin is released at this loop. */
		switch_5 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_5 key pin is depressed at this loop. */
		switch_5 &= KEY_DEPRESSED_AND;
	}

	/*********************************************************/
	/* Add the current status of the test key to 'switch_6'. */
	/*********************************************************/
	switch_6 <<= 1U;
	if( IO_SW6_GetValue() == LOGIC_HIGH )
	{
		/* The switch_6 key pin is released at this loop. */
		switch_6 |= KEY_RELEASED_OR;
	}
	else
	{
		/* The switch_6 key pin is depressed at this loop. */
		switch_6 &= KEY_DEPRESSED_AND;
	}


	/******************************/
	/* Perform Key State Machine. */
	/******************************/
	switch( state )
	{
		/********************/
		case KEY_STATE_NO_KEY:
		/********************/

			/* Test for more than 1 key depressed. */
			test_switch = CLEAR;
			if( switch_0 == KEY_DEPRESSED )	++test_switch;
			if( switch_1 == KEY_DEPRESSED )	++test_switch;
			if( switch_2 == KEY_DEPRESSED )	++test_switch;
			if( switch_3 == KEY_DEPRESSED )	++test_switch;
			if( switch_4 == KEY_DEPRESSED )	++test_switch;
			if( switch_5 == KEY_DEPRESSED )	++test_switch;
			if( switch_6 == KEY_DEPRESSED )	++test_switch;
			//if( switch_7 == KEY_DEPRESSED )	++test_switch;

			if( test_switch > 1U ) // 2 or more switches depressed
			{
				/* This should not occur. Go to error. */
				state = KEY_STATE_ERROR;
			}
			else	/* Test for the switch_0 key only depressed. */
			if( switch_0 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_0_ONLY;
			}
			else	/* Test for the switch_1 key only depressed. */
			if( switch_1 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_1_ONLY;
			}
			else	/* Test for the switch_2 key only depressed. */
			if( switch_2 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_2_ONLY;
			}
			else	/* Test for the switch_3 key only depressed. */
			if( switch_3 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_3_ONLY;
			}
			else	/* Test for the switch_4 key only depressed. */
			if( switch_4 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_4_ONLY;
			}
			else	/* Test for the switch_5 key only depressed. */
			if( switch_5 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_5_ONLY;
			}
			else	/* Test for the switch_6 key only depressed. */
			if( switch_6 == KEY_DEPRESSED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_6_ONLY;
			}
			else
			{
				/* No key is depressed. Remain in this state. */
			}
			break;

		/*********************/
		case KEY_STATE_SWITCH_0_ONLY:
		/*********************/
			
			if( switch_0 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_0_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_1_ONLY:
		/***********************/

			if( switch_1 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_1_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_2_ONLY:
		/***********************/

			if( switch_2 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_2_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_3_ONLY:
		/***********************/

			if( switch_3 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_3_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_4_ONLY:
		/***********************/

			if( switch_4 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_4_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_5_ONLY:
		/***********************/

			if( switch_5 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_5_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;

		/***********************/
		case KEY_STATE_SWITCH_6_ONLY:
		/***********************/

			if( switch_6 == KEY_RELEASED )
			{
				/* Progress state. */
				state = KEY_STATE_SWITCH_6_COMPLETE;
			}
			else
			{
				/* Remain in this state. */
			}
			break;


		/*************************/
		case KEY_STATE_SWITCH_0_COMPLETE:
		/*************************/

			/* Indicate the switch_0 key. */
			return_value = KEY_SWITCH_0;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_1_COMPLETE:
		/***************************/

			/* Indicate the switch_1 key. */
			return_value = KEY_SWITCH_1;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_2_COMPLETE:
		/***************************/

			/* Indicate the switch_2 key. */
			return_value = KEY_SWITCH_2;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_3_COMPLETE:
		/***************************/

			/* Indicate the switch_3 key. */
			return_value = KEY_SWITCH_3;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_4_COMPLETE:
		/***************************/

			/* Indicate the switch_4 key. */
			return_value = KEY_SWITCH_4;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_5_COMPLETE:
		/***************************/

			/* Indicate the switch_5 key. */
			return_value = KEY_SWITCH_5;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;

		/***************************/
		case KEY_STATE_SWITCH_6_COMPLETE:
		/***************************/

			/* Indicate the switch_6 key. */
			return_value = KEY_SWITCH_6;

			/* Progress to 'NO_KEY' state. */
			state = KEY_STATE_NO_KEY;
			break;



		/********************/
		case KEY_STATE_ERROR:
		/********************/
			if( ( switch_0 == KEY_RELEASED ) &&
				( switch_1 == KEY_RELEASED ) &&
				( switch_2 == KEY_RELEASED ) &&
				( switch_3 == KEY_RELEASED ) &&
				( switch_4 == KEY_RELEASED ) &&
				( switch_5 == KEY_RELEASED ) &&
				( switch_6 == KEY_RELEASED ) )
			{
				/* No keys are depressed, return to the beginning. */
				state = KEY_STATE_NO_KEY;
			}
			break;

		/******/
		default:
		/******/
			state = KEY_STATE_ERROR;
			break;
	}
	return return_value;
}

