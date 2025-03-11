#ifndef LED_H
	#define LED_H


/* LED Flash Rates. */
#define LAMP_FAST_OFF_TIME			1000U
#define LAMP_FAST_ON_TIME			1000U

#define LED_OFF                     0U
#define LED_ON                      1U
#define FLASH						2U

	
	
	enum lamp_action_enum
	{
		MAIN_LIGHT_ALL_OFF,
		LIGHT_1_ON,
		LIGHT_1_OFF,
		LIGHT_1_FAST_FLASH,
		LIGHT_2_ON,
		LIGHT_2_OFF,
		LIGHT_2_FAST_FLASH,
		LIGHT_3_ON,
		LIGHT_3_OFF,
		LIGHT_3_FAST_FLASH,
		LIGHT_4_ON,
		LIGHT_4_OFF,
		LIGHT_4_FAST_FLASH,
		LIGHT_5_ON,
		LIGHT_5_OFF,
		LIGHT_5_FAST_FLASH,
		LIGHT_6_ON,
		LIGHT_6_OFF,
		LIGHT_6_FAST_FLASH,
		LIGHT_7_ON,
		LIGHT_7_OFF,
		LIGHT_7_FAST_FLASH,
		LIGHT_8_ON,
		LIGHT_8_OFF,
		LIGHT_8_FAST_FLASH,
		LIGHT_9_ON,
		LIGHT_9_OFF,
		LIGHT_9_FAST_FLASH,
		LIGHT_10_ON,
		LIGHT_10_OFF,
		LIGHT_10_FAST_FLASH,
		LIGHT_11_ON,
		LIGHT_11_OFF,
		LIGHT_11_FAST_FLASH,
		LIGHT_12_ON,
		LIGHT_12_OFF,
		LIGHT_12_FAST_FLASH,
		LIGHT_13_ON,
		LIGHT_13_OFF,
		LIGHT_13_FAST_FLASH,
		LIGHT_14_ON,
		LIGHT_14_OFF,
		LIGHT_14_FAST_FLASH,
		LIGHT_15_ON,
		LIGHT_15_OFF,
		LIGHT_15_FAST_FLASH,
		LIGHT_16_ON,
		LIGHT_16_OFF,
		LIGHT_16_FAST_FLASH,
		LIGHT_17_ON,
		LIGHT_17_OFF,
		LIGHT_17_FAST_FLASH,
		LIGHT_18_ON,
		LIGHT_18_OFF,
		LIGHT_18_FAST_FLASH,
		LIGHT_19_ON,
		LIGHT_19_OFF,
		LIGHT_19_FAST_FLASH,
		LIGHT_20_ON,
		LIGHT_20_OFF,
		LIGHT_20_FAST_FLASH,
		LIGHT_21_ON,
		LIGHT_21_OFF,
		LIGHT_21_FAST_FLASH,
		LIGHT_22_ON,
		LIGHT_22_OFF,
		LIGHT_22_FAST_FLASH,
		LIGHT_23_ON,
		LIGHT_23_OFF,
		LIGHT_23_FAST_FLASH,
		LIGHT_24_ON,
		LIGHT_24_OFF,
		LIGHT_24_FAST_FLASH,
		LIGHT_25_ON,
		LIGHT_25_OFF,
		LIGHT_25_FAST_FLASH,
        LIGHT_26_ON,
		LIGHT_26_OFF,
		LIGHT_26_FAST_FLASH,
        LIGHT_27_ON,
		LIGHT_27_OFF,
		LIGHT_27_FAST_FLASH,
        LIGHT_28_ON,
		LIGHT_28_OFF,
		LIGHT_28_FAST_FLASH,
        MAIN_LIGHT_ALL_ON

	};

	struct lamp_structure
	{
		Flag control;						/* OFF/ON */
		Flag reverse;
	};



	/* Function Prototypes. */
	void POLLLed(void);
	void MAINSetLEDAction( enum lamp_action_enum );


	// Global Variables
	#ifdef LED_C

		struct lamp_structure light_1;
		struct lamp_structure light_2;
		struct lamp_structure light_3;
		struct lamp_structure light_4;
		struct lamp_structure light_5;
		struct lamp_structure light_6;
		struct lamp_structure light_7;
		struct lamp_structure light_8;
		struct lamp_structure light_9;
		struct lamp_structure light_10;
		struct lamp_structure light_11;
		struct lamp_structure light_12;
		struct lamp_structure light_13;
		struct lamp_structure light_14;
		struct lamp_structure light_15;
		struct lamp_structure light_16;
		struct lamp_structure light_17;
		struct lamp_structure light_18;
		struct lamp_structure light_19;
		struct lamp_structure light_20;
		struct lamp_structure light_21;
		struct lamp_structure light_22;
		struct lamp_structure light_23;
		struct lamp_structure light_24;
        struct lamp_structure light_25;
        struct lamp_structure light_26;
        struct lamp_structure light_27;
        struct lamp_structure light_28;
		
	#else

		extern struct lamp_structure light_1;
		extern struct lamp_structure light_2;
		extern struct lamp_structure light_3;
		extern struct lamp_structure light_4;
		extern struct lamp_structure light_5;
		extern struct lamp_structure light_6;
		extern struct lamp_structure light_7;
		extern struct lamp_structure light_8;
		extern struct lamp_structure light_9;
		extern struct lamp_structure light_10;
		extern struct lamp_structure light_11;
		extern struct lamp_structure light_12;
		extern struct lamp_structure light_13;
		extern struct lamp_structure light_14;
		extern struct lamp_structure light_15;
		extern struct lamp_structure light_16;
		extern struct lamp_structure light_17;
		extern struct lamp_structure light_18;
		extern struct lamp_structure light_19;
		extern struct lamp_structure light_20;
		extern struct lamp_structure light_21;
		extern struct lamp_structure light_22;
		extern struct lamp_structure light_23;
		extern struct lamp_structure light_24;
        extern struct lamp_structure light_25;
        extern struct lamp_structure light_26;
        extern struct lamp_structure light_27;
        extern struct lamp_structure light_28;

	#endif

#endif







