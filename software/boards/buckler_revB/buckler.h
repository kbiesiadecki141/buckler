// Pin definitions for the Berkeley Buckler revision B

#pragma once


// Analog accelerometer
#define BUCKLER_ANALOG_ACCEL_X NRF_GPIO_PIN_MAP(0,29)
#define BUCKLER_ANALOG_ACCEL_Y NRF_GPIO_PIN_MAP(0,30)
#define BUCKLER_ANALOG_ACCEL_Z NRF_GPIO_PIN_MAP(0,31)

// Buttons and Switches
#define BUCKLER_BUTTON0 NRF_GPIO_PIN_MAP(0,28)
#define BUCKLER_SWITCH0 NRF_GPIO_PIN_MAP(0,22)

// Grove Headers
#define BUCKLER_GROVE_A0 NRF_GPIO_PIN_MAP(0,4)
#define BUCKLER_GROVE_A1 NRF_GPIO_PIN_MAP(0,3)
#define BUCKLER_GROVE_D0 NRF_GPIO_PIN_MAP(0,2)
#define BUCKLER_GROVE_D1 NRF_GPIO_PIN_MAP(0,5)

// I2C sensors
#define BUCKLER_SENSORS_SCL     NRF_GPIO_PIN_MAP(0,19)
#define BUCKLER_SENSORS_SDA     NRF_GPIO_PIN_MAP(0,20)
#define BUCKLER_IMU_INTERUPT    NRF_GPIO_PIN_MAP(0,7)
#define BUCKLER_LIGHT_INTERRUPT NRF_GPIO_PIN_MAP(0,27)

// LCD screen
#define BUCKLER_LCD_SCLK NRF_GPIO_PIN_MAP(0,17)
#define BUCKLER_LCD_MISO NRF_GPIO_PIN_MAP(0,16)
#define BUCKLER_LCD_MOSI NRF_GPIO_PIN_MAP(0,15)
#define BUCKLER_LCD_CS   NRF_GPIO_PIN_MAP(0,18)

// LEDs
#define BUCKLER_LED0 NRF_GPIO_PIN_MAP(0,25)
#define BUCKLER_LED1 NRF_GPIO_PIN_MAP(0,24)
#define BUCKLER_LED2 NRF_GPIO_PIN_MAP(0,23)

// SD Card
#define BUCKLER_SD_ENABLE NRF_GPIO_PIN_MAP(0,26)
#define BUCKLER_SD_SCLK   NRF_GPIO_PIN_MAP(0,13)
#define BUCKLER_SD_MISO   NRF_GPIO_PIN_MAP(0,12)
#define BUCKLER_SD_MOSI   NRF_GPIO_PIN_MAP(0,11)
#define BUCKLER_SD_CS     NRF_GPIO_PIN_MAP(0,14)

// UART serial connection (to Kobuki)
#define BUCKLER_UART_RX NRF_GPIO_PIN_MAP(0,8)
#define BUCKLER_UART_TX NRF_GPIO_PIN_MAP(0,6)
