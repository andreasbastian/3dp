#ifndef PINS_H
#define PINS_H

#define MOTHERBOARD 3

// Set this to 0, 1, x for board versions v1.0, v1.1 or v1.x, etc.
#define ULTIMAKER_BOARD_MINOR_VERSION 5

#if MOTHERBOARD == 3

#ifndef __AVR_ATmega1280__
#ifndef __AVR_ATmega2560__
#error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif
#endif

/*********************************************************************************************
*  _   _ _ _   _                 _
* | | | | | |_(_)_ __ ___   __ _| | _____ _ __
* | | | | | __| | '_ ` _ \ / _` | |/ / _ \ '__|
* | |_| | | |_| | | | | | | (_| |   <  __/ |
*  \___/|_|\__|_|_| |_| |_|\__,_|_|\_\___|_|
* 
* Valid for versions: 1.0 and 1.1
* For documentation, see http://www.ultimaker.com/
*
* NOTE: Configure ULTIMAKER_BOARD to the version you have!
* 
*********************************************************************************************/

// SELECT THE VERSION OF THE MOTHERBOARD THAT YOU HAVE.
#if ULTIMAKER_BOARD_MINOR_VERSION == 5

#define DEBUG_PIN        50

#define X_STEP_PIN (byte)7//2
#define X_DIR_PIN (byte)8//3
#define X_MIN_PIN (byte)4
#define X_MAX_PIN (byte)24
#define X_ENABLE_PIN (byte)27

#define Y_STEP_PIN (byte)31
#define Y_DIR_PIN (byte)33
#define Y_MIN_PIN (byte)26
#define Y_MAX_PIN (byte)28
#define Y_ENABLE_PIN (byte)29

#define Z_STEP_PIN (byte)37 
#define Z_DIR_PIN (byte)39
#define Z_MIN_PIN (byte)30
#define Z_MAX_PIN (byte)32
#define Z_ENABLE_PIN (byte)35

// Heated bed

#define BED_HEATER_PIN (byte)4 // Therm 3
#define BED_TEMPERATURE_PIN (byte)10 // 

//extruder pins

//#define EXTRUDER_0_STEP_PIN (byte)43
//#define EXTRUDER_0_DIR_PIN (byte)45
//#define EXTRUDER_0_ENABLE_PIN (byte)41
//#define EXTRUDER_0_HEATER_PIN (byte)2
//#define EXTRUDER_0_TEMPERATURE_PIN (byte)8
//#define EXTRUDER_0_FAN_PIN (byte)7
//
//#define EXTRUDER_1_STEP_PIN (byte)49
//#define EXTRUDER_1_DIR_PIN (byte)47
//#define EXTRUDER_1_ENABLE_PIN (byte)48
//#define EXTRUDER_1_HEATER_PIN (byte)3
//#define EXTRUDER_1_TEMPERATURE_PIN (byte)9 

//#define LCD_PINS1 (byte)24
//#define LCD_PINS2 (byte)22
//#define LCD_PINS3 (byte)36
//#define LCD_PINS4 (byte)34
//#define LCD_PINS5 (byte)32
//#define LCD_PINS6 (byte)30

#endif //ULTIMAKER_BOARD=="1.5.3"

#if ULTIMAKER_BOARD_MINOR_VERSION == 1

#define DEBUG_PIN        4

#define X_STEP_PIN (byte)25
#define X_DIR_PIN (byte)23
#define X_MIN_PIN (byte)15
#define X_MAX_PIN (byte)14
#define X_ENABLE_PIN (byte)27

#define Y_STEP_PIN (byte)31
#define Y_DIR_PIN (byte)33
#define Y_MIN_PIN (byte)17
#define Y_MAX_PIN (byte)16
#define Y_ENABLE_PIN (byte)29

#define Z_STEP_PIN (byte)37 
#define Z_DIR_PIN (byte)39
#define Z_MIN_PIN (byte)19
#define Z_MAX_PIN (byte)18
#define Z_ENABLE_PIN (byte)35

// Heated bed

#define BED_HEATER_PIN (byte)4 // Therm 3
#define BED_TEMPERATURE_PIN (byte)10 // 

//extruder pins

//#define EXTRUDER_0_STEP_PIN (byte)43
//#define EXTRUDER_0_DIR_PIN (byte)45
//#define EXTRUDER_0_ENABLE_PIN (byte)41
//#define EXTRUDER_0_HEATER_PIN (byte)2
//#define EXTRUDER_0_TEMPERATURE_PIN (byte)8
//
//#define EXTRUDER_1_STEP_PIN (byte)49
//#define EXTRUDER_1_DIR_PIN (byte)47
//#define EXTRUDER_1_ENABLE_PIN (byte)48
//#define EXTRUDER_1_HEATER_PIN (byte)3
//#define EXTRUDER_1_TEMPERATURE_PIN (byte)9 
//
//#define LCD_PINS1 (byte)24
//#define LCD_PINS2 (byte)22
//#define LCD_PINS3 (byte)36
//#define LCD_PINS4 (byte)34
//#define LCD_PINS5 (byte)32
//#define LCD_PINS6 (byte)30

#endif //ULTIMAKER_BOARD=="1.1"

/* THE OLDER VERSIONS OF THE PCB */

#if ULTIMAKER_BOARD_MINOR_VERSION == 0

#define DEBUG_PIN        4

#define X_STEP_PIN (byte)25
#define X_DIR_PIN (byte)23
#define X_MIN_PIN (byte)12// needed a different PIN than 13!
#define X_MAX_PIN (byte)12
#define X_ENABLE_PIN (byte)27

#define Y_STEP_PIN (byte)31
#define Y_DIR_PIN (byte)33
#define Y_MIN_PIN (byte)11
#define Y_MAX_PIN (byte)10
#define Y_ENABLE_PIN (byte)29

// Z motor lijkt te werken maar niet helemaal lekker ivm verkeerde microstepper 
// instelling, moet ik nog de pull-ups een kleinere weerstand geven zodat het op 
// een logische hoog komt. Maar hij draait!!
#define Z_STEP_PIN (byte)37 
#define Z_DIR_PIN (byte)39
#define Z_MIN_PIN (byte)9
#define Z_MAX_PIN (byte)8
#define Z_ENABLE_PIN (byte)35

// Heated bed

//#define BED_HEATER_PIN (byte)4 // Therm 3
//#define BED_TEMPERATURE_PIN (byte)11 // 

//extruder pins
//
//#define EXTRUDER_0_STEP_PIN (byte)43 // extruder volledig getest, werkt!
//#define EXTRUDER_0_DIR_PIN (byte)45
//#define EXTRUDER_0_ENABLE_PIN (byte)41
//#define EXTRUDER_0_HEATER_PIN (byte)2
//#define EXTRUDER_0_TEMPERATURE_PIN (byte)9//9 = THERM1, 10=THERM2
//
//#define EXTRUDER_1_STEP_PIN (byte)49 // extruder volledig getest, werkt OOK!!
//#define EXTRUDER_1_DIR_PIN (byte)47
//#define EXTRUDER_1_ENABLE_PIN (byte)51
//#define EXTRUDER_1_HEATER_PIN (byte)3
//#define EXTRUDER_1_TEMPERATURE_PIN (byte)10 
//
//#define LCD_PINS1 (byte)24
//#define LCD_PINS2 (byte)22
//#define LCD_PINS3 (byte)36
//#define LCD_PINS4 (byte)34
//#define LCD_PINS5 (byte)32
//#define LCD_PINS6 (byte)30

#endif //ULTIMAKER_BOARD_MINOR_VERSION==0

#else
#error Unknown MOTHERBOARD value in configuration.h

#endif

#endif
