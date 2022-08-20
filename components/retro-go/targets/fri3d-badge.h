// Fri3d camp badge + game-on accessory
// REF1: https://github.com/Fri3dCamp/badge-2020
// REF2: https://github.com/Fri3dCamp/gameon-2020

// Target definition
#define RG_TARGET_NAME             "FRI3D-BADGE"

// Storage
#define RG_STORAGE_DRIVER           1   // 1 = SDSPI, 2 = SDMMC, 3 = USB

// Audio
#define RG_AUDIO_USE_INT_DAC        1
#define RG_AUDIO_USE_EXT_DAC        0

// Video
#define RG_SCREEN_DRIVER            0   // 0 = ILI9341
#define RG_SCREEN_TYPE              3   // 3 = fri3d-badge
#define RG_SCREEN_WIDTH             240
#define RG_SCREEN_HEIGHT            240
#define RG_SCREEN_ROTATE            0
#define RG_SCREEN_MARGIN_TOP        0
#define RG_SCREEN_MARGIN_BOTTOM     0
#define RG_SCREEN_MARGIN_LEFT       0
#define RG_SCREEN_MARGIN_RIGHT      0

// Input
#define RG_GAMEPAD_DRIVER           5   // 1 = GPIO, 2 = Serial, 3 = MRGC-IO, 4 = QT PY AW9325, 5 = GPIO (Fri3d badge)
#define RG_GAMEPAD_HAS_MENU_BTN     0
#define RG_GAMEPAD_HAS_OPTION_BTN   0
#define RG_BATTERY_ADC_CHANNEL      ADC1_CHANNEL_7
#define RG_BATTERY_CALC_PERCENT(raw) (((raw) * 2.f - 3500.f) / (4200.f - 3500.f) * 100.f)
#define RG_BATTERY_CALC_VOLTAGE(raw) ((raw) * 2.f * 0.001f)

// Status LED
// #define RG_GPIO_LED                 GPIO_NUM_2

// I2C BUS
#define RG_GPIO_I2C_SDA             GPIO_NUM_21
#define RG_GPIO_I2C_SCL             GPIO_NUM_22

// Built-in gamepad
#define RG_GPIO_GAMEPAD_UP          GPIO_NUM_39
#define RG_GPIO_GAMEPAD_DOWN        GPIO_NUM_15
#define RG_GPIO_GAMEPAD_LEFT        GPIO_NUM_26
#define RG_GPIO_GAMEPAD_RIGHT       GPIO_NUM_0
#define RG_GPIO_GAMEPAD_SELECT      GPIO_NUM_34
#define RG_GPIO_GAMEPAD_START       GPIO_NUM_32
#define RG_GPIO_GAMEPAD_A           GPIO_NUM_13
#define RG_GPIO_GAMEPAD_B           GPIO_NUM_12
#define RG_GPIO_GAMEPAD_MENU        GPIO_NUM_27
#define RG_GPIO_GAMEPAD_OPTION      GPIO_NUM_14

// SPI Display
#define RG_GPIO_LCD_HOST            SPI2_HOST
#define RG_GPIO_LCD_MISO            GPIO_NUM_19
#define RG_GPIO_LCD_MOSI            GPIO_NUM_23
#define RG_GPIO_LCD_CLK             GPIO_NUM_18
#define RG_GPIO_LCD_CS              GPIO_NUM_5
#define RG_GPIO_LCD_DC              GPIO_NUM_33
#define RG_GPIO_LCD_BCKL            GPIO_NUM_NC

// SPI SD Card
#define RG_GPIO_SDSPI_HOST          SPI2_HOST
#define RG_GPIO_SDSPI_MISO          GPIO_NUM_19
#define RG_GPIO_SDSPI_MOSI          GPIO_NUM_23
#define RG_GPIO_SDSPI_CLK           GPIO_NUM_18
#define RG_GPIO_SDSPI_CS            GPIO_NUM_4

// External I2S DAC  // non-functional; make sure not to specify other functional pins here
#define RG_GPIO_SND_I2S_BCK         GPIO_NUM_NC
#define RG_GPIO_SND_I2S_WS          GPIO_NUM_NC
#define RG_GPIO_SND_I2S_DATA        GPIO_NUM_NC
//#define RG_GPIO_SND_AMP_ENABLE      GPIO_NUM_NC