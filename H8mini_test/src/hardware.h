


// set zero to disable (0 - 4)
#define LED_NUMBER       4

#define LED1PIN          GPIO_PIN_0
#define LED1PORT         GPIOF

#define LED2PIN          GPIO_PIN_1
#define LED2PORT         GPIOF

#define LED3PIN          GPIO_PIN_0
#define LED3PORT         GPIOB

#define LED4PIN          GPIO_PIN_2
#define LED4PORT         GPIOA

//#define LED1_INVERT
//#define LED2_INVERT
//#define LED3_INVERT
//#define LED4_INVERT

// radio pins ( SPI )

#define SPI_MOSI_PIN     GPIO_PIN_3
#define SPI_MOSI_PORT    GPIOB

#define SPI_MISO_PIN     GPIO_PIN_15
#define SPI_MISO_PORT    GPIOA

#define SPI_CLK_PIN      GPIO_PIN_4
#define SPI_CLK_PORT     GPIOB

#define SPI_SS_PIN       GPIO_PIN_5
#define SPI_SS_PORT      GPIOB

//#define DISABLE_GYRO_CHECK
#define RADIO_CHECK

// RGB led type ws2812 - ws2813
// numbers over 8 could decrease performance

#define RGB_LED_NUMBER 0
// pin / port for the RGB led ( programming port ok )
#define RGB_PIN GPIO_PIN_13 // SWDAT
#define RGB_PORT GPIOA


#define FPV_PIN GPIO_PIN_14 // SWCLK
#define FPV_PIN_PORT GPIOA


//#define BUZZER_PIN       GPIO_PIN_13 // SWDAT
#define BUZZER_PIN       GPIO_PIN_14 // SWCLK
#define BUZZER_PIN_PORT  GPIOA
#define BUZZER_DELAY     5e6 // 5 seconds after loss of tx or low bat before buzzer starts

// Analog battery input pin and adc channel

// divider setting for adc uses 2 measurements(readout/value).
// default for 1/2 divider

// uncomment to enable acd on a pin
// POSSIBLE ADC PINS: PA0-PA7, PB0, PB1
// the associated number is the id passed in to adc_read()

#define ADC_ID_VOLTAGE 5
#define ADC_ID_REF 6

#define ADC_PA5 ADC_ID_VOLTAGE
#define ADC_PA5_READOUT 2727
#define ADC_PA5_VALUE   3.77f

#define ADC_VREF ADC_ID_REF
#define ADC_VREF_READOUT 1730
#define ADC_VREF_VALUE   1.00f

//*** DO NOT ENABLE ESC DRIVER WITH BRUSHED MOTORS CONNECTED ***
// output driver type , esc settings in drv_esc.c file

#define USE_PWM_DRIVER
//#define USE_PWM_DRIVER_NEW
//#define USE_ESC_DRIVER
//#define USE_DSHOT_DRIVER

// settings in file drv_servo.c
//#define SERVO_DRIVER

// enable serial out on back-left LED
//#define SERIAL


// pwm pin initialization
// enable the pwm pins to be used here ( multiple pins ok)
// for USE_PWM_DRIVER_NEW only

//#define PWM_PA0
//#define PWM_PA1
//#define PWM_PA2
//#define PWM_PA3
//#define PWM_PA4
//#define PWM_PA5
//#define PWM_PA6
//#define PWM_PA7
#define PWM_PA8
#define PWM_PA9
#define PWM_PA10
//#define PWM_PA11
//#define PWM_PB0
#define PWM_PB1

// Assingment of pin to motor
// Assign one pin to one motor
#define PA9_MOTOR_ID MOTOR_BL // bl
#define PA8_MOTOR_ID MOTOR_FL
#define PA10_MOTOR_ID MOTOR_FR
#define PB1_MOTOR_ID MOTOR_BR // br
