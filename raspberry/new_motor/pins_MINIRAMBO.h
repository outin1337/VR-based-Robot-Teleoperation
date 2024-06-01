#pragma once

#define BOARD_INFO_NAME "Mini RAMBo"

//
// Limit Switches
//
#define X_MIN_PIN                             12
#define X_MAX_PIN                             30
#define Y_MIN_PIN                             11
#define Y_MAX_PIN                             24
#define Z_MIN_PIN                             10
#define Z_MAX_PIN                             23

#if HAS_I_AXIS
  #define I_STOP_PIN                          30  // X_MAX (for now)
#endif

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN                     23
#endif

//
// Steppers
//
#define X_STEP_PIN                            37
#define X_DIR_PIN                             48
#define X_ENABLE_PIN                          29

#define Y_STEP_PIN                            36
#define Y_DIR_PIN                             49
#define Y_ENABLE_PIN                          28

#define Z_STEP_PIN                            35
#define Z_DIR_PIN                             47
#define Z_ENABLE_PIN                          27

#define E0_STEP_PIN                           34
#define E0_DIR_PIN                            43
#define E0_ENABLE_PIN                         26

// Microstepping pins
#define X_MS1_PIN                             40
#define X_MS2_PIN                             41
#define Y_MS1_PIN                             69
#define Y_MS2_PIN                             39
#define Z_MS1_PIN                             68
#define Z_MS2_PIN                             67
#define E0_MS1_PIN                            65
#define E0_MS2_PIN                            66

#define MOTOR_CURRENT_PWM_XY_PIN              46
#define MOTOR_CURRENT_PWM_Z_PIN               45
#define MOTOR_CURRENT_PWM_E_PIN               44
// Motor current PWM conversion, PWM value = MotorCurrentSetting * 255 / range
#ifndef MOTOR_CURRENT_PWM_RANGE
  #define MOTOR_CURRENT_PWM_RANGE            2000
#endif
#define DEFAULT_PWM_MOTOR_CURRENT  {1300, 1300, 1250}

//
// Temperature Sensors
//
#define TEMP_0_PIN                             0  // Analog Input
#define TEMP_1_PIN                             1  // Analog Input
#define TEMP_BED_PIN                           2  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                           3
#define HEATER_1_PIN                           7
#define HEATER_2_PIN                           6
#define HEATER_BED_PIN                         4

#ifndef FAN0_PIN
  #define FAN0_PIN                             8
#endif
#define FAN1_PIN                               6

//
// Misc. Functions
//
#define SDSS                                  53
#define LED_PIN                               13
#define CASE_LIGHT_PIN                        9

//
// M3/M4/M5 - Spindle/Laser Control
//
#if HAS_CUTTER
  // Use P1 connector for spindle pins
  #ifndef SPINDLE_LASER_PWM_PIN
    #define SPINDLE_LASER_PWM_PIN              9  // Hardware PWM
  #endif
  #ifndef SPINDLE_LASER_ENA_PIN
    #define SPINDLE_LASER_ENA_PIN             18  // Pullup!
  #endif
  #ifndef SPINDLE_DIR_PIN
    #define SPINDLE_DIR_PIN                   19
  #endif
#endif

//
// Průša i3 MK2 Multiplexer Support
//
#if HAS_PRUSA_MMU1
  #define E_MUX0_PIN                          17
  #define E_MUX1_PIN                          16
  #define E_MUX2_PIN                          78  // 84 in MK2 Firmware, with BEEPER as 78
#endif

//
// LCD / Controller
//

#if HAS_WIRED_LCD || TOUCH_UI_ULTIPANEL


  #define KILL_PIN                          32


  #if IS_ULTIPANEL || TOUCH_UI_ULTIPANEL

    // AUX-4
    #define BEEPER_PIN                      84

    // AUX-2
    #define BTN_EN1                         14
    #define BTN_EN2                         72
    #define BTN_ENC                          9

    #define LCD_PINS_RS                     82
    #define LCD_PINS_EN                     18
    #define LCD_PINS_D4                     19
    #define LCD_PINS_D5                     70
    #define LCD_PINS_D6                     85
    #define LCD_PINS_D7                     71

    #define SD_DETECT_PIN                   15

    #if ENABLED(REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER)
      #define BTN_ENC_EN             LCD_PINS_D7  // Detect the presence of the encoder
    #endif

  #endif // IS_ULTIPANEL || TOUCH_UI_ULTIPANEL

#endif // HAS_WIRED_LCD || TOUCH_UI_ULTIPANEL

#if IS_U8GLIB_ST7920
  #define BOARD_ST7920_DELAY_1                 0
  #define BOARD_ST7920_DELAY_2               250
  #define BOARD_ST7920_DELAY_3                 0
#endif
