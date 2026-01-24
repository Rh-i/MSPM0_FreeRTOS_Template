/*
 * Copyright (c) 2023, Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ============ ti_msp_dl_config.h =============
 *  Configured MSPM0 DriverLib module declarations
 *
 *  DO NOT EDIT - This file is generated for the MSPM0G350X
 *  by the SysConfig tool.
 */
#ifndef ti_msp_dl_config_h
#define ti_msp_dl_config_h

#define CONFIG_MSPM0G350X
#define CONFIG_MSPM0G3507

#if defined(__ti_version__) || defined(__TI_COMPILER_VERSION__)
#define SYSCONFIG_WEAK __attribute__((weak))
#elif defined(__IAR_SYSTEMS_ICC__)
#define SYSCONFIG_WEAK __weak
#elif defined(__GNUC__)
#define SYSCONFIG_WEAK __attribute__((weak))
#endif

#include <ti/devices/msp/msp.h>
#include <ti/driverlib/driverlib.h>
#include <ti/driverlib/m0p/dl_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *  ======== SYSCFG_DL_init ========
 *  Perform all required MSP DL initialization
 *
 *  This function should be called once at a point before any use of
 *  MSP DL.
 */


/* clang-format off */

#define POWER_STARTUP_DELAY                                                (16)



#define CPUCLK_FREQ                                                     32000000



/* Defines for PWM_MOTOR */
#define PWM_MOTOR_INST                                                     TIMG0
#define PWM_MOTOR_INST_IRQHandler                               TIMG0_IRQHandler
#define PWM_MOTOR_INST_INT_IRQN                                 (TIMG0_INT_IRQn)
#define PWM_MOTOR_INST_CLK_FREQ                                           100000
/* GPIO defines for channel 0 */
#define GPIO_PWM_MOTOR_C0_PORT                                             GPIOA
#define GPIO_PWM_MOTOR_C0_PIN                                     DL_GPIO_PIN_23
#define GPIO_PWM_MOTOR_C0_IOMUX                                  (IOMUX_PINCM53)
#define GPIO_PWM_MOTOR_C0_IOMUX_FUNC                 IOMUX_PINCM53_PF_TIMG0_CCP0
#define GPIO_PWM_MOTOR_C0_IDX                                DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_MOTOR_C1_PORT                                             GPIOA
#define GPIO_PWM_MOTOR_C1_PIN                                     DL_GPIO_PIN_24
#define GPIO_PWM_MOTOR_C1_IOMUX                                  (IOMUX_PINCM54)
#define GPIO_PWM_MOTOR_C1_IOMUX_FUNC                 IOMUX_PINCM54_PF_TIMG0_CCP1
#define GPIO_PWM_MOTOR_C1_IDX                                DL_TIMER_CC_1_INDEX

/* Defines for PWM_OTHER */
#define PWM_OTHER_INST                                                     TIMG6
#define PWM_OTHER_INST_IRQHandler                               TIMG6_IRQHandler
#define PWM_OTHER_INST_INT_IRQN                                 (TIMG6_INT_IRQn)
#define PWM_OTHER_INST_CLK_FREQ                                            40000
/* GPIO defines for channel 0 */
#define GPIO_PWM_OTHER_C0_PORT                                             GPIOB
#define GPIO_PWM_OTHER_C0_PIN                                      DL_GPIO_PIN_6
#define GPIO_PWM_OTHER_C0_IOMUX                                  (IOMUX_PINCM23)
#define GPIO_PWM_OTHER_C0_IOMUX_FUNC                 IOMUX_PINCM23_PF_TIMG6_CCP0
#define GPIO_PWM_OTHER_C0_IDX                                DL_TIMER_CC_0_INDEX
/* GPIO defines for channel 1 */
#define GPIO_PWM_OTHER_C1_PORT                                             GPIOB
#define GPIO_PWM_OTHER_C1_PIN                                      DL_GPIO_PIN_7
#define GPIO_PWM_OTHER_C1_IOMUX                                  (IOMUX_PINCM24)
#define GPIO_PWM_OTHER_C1_IOMUX_FUNC                 IOMUX_PINCM24_PF_TIMG6_CCP1
#define GPIO_PWM_OTHER_C1_IDX                                DL_TIMER_CC_1_INDEX

/* Defines for PWM_SPI */
#define PWM_SPI_INST                                                       TIMA1
#define PWM_SPI_INST_IRQHandler                                 TIMA1_IRQHandler
#define PWM_SPI_INST_INT_IRQN                                   (TIMA1_INT_IRQn)
#define PWM_SPI_INST_CLK_FREQ                                             100000
/* GPIO defines for channel 0 */
#define GPIO_PWM_SPI_C0_PORT                                               GPIOB
#define GPIO_PWM_SPI_C0_PIN                                       DL_GPIO_PIN_26
#define GPIO_PWM_SPI_C0_IOMUX                                    (IOMUX_PINCM57)
#define GPIO_PWM_SPI_C0_IOMUX_FUNC                   IOMUX_PINCM57_PF_TIMA1_CCP0
#define GPIO_PWM_SPI_C0_IDX                                  DL_TIMER_CC_0_INDEX




/* Defines for I2C_SENSOR */
#define I2C_SENSOR_INST                                                     I2C0
#define I2C_SENSOR_INST_IRQHandler                               I2C0_IRQHandler
#define I2C_SENSOR_INST_INT_IRQN                                   I2C0_INT_IRQn
#define GPIO_I2C_SENSOR_SDA_PORT                                           GPIOA
#define GPIO_I2C_SENSOR_SDA_PIN                                    DL_GPIO_PIN_0
#define GPIO_I2C_SENSOR_IOMUX_SDA                                 (IOMUX_PINCM1)
#define GPIO_I2C_SENSOR_IOMUX_SDA_FUNC                  IOMUX_PINCM1_PF_I2C0_SDA
#define GPIO_I2C_SENSOR_SCL_PORT                                           GPIOA
#define GPIO_I2C_SENSOR_SCL_PIN                                    DL_GPIO_PIN_1
#define GPIO_I2C_SENSOR_IOMUX_SCL                                 (IOMUX_PINCM2)
#define GPIO_I2C_SENSOR_IOMUX_SCL_FUNC                  IOMUX_PINCM2_PF_I2C0_SCL


/* Defines for UART_0 */
#define UART_0_INST                                                        UART0
#define UART_0_INST_FREQUENCY                                           32000000
#define UART_0_INST_IRQHandler                                  UART0_IRQHandler
#define UART_0_INST_INT_IRQN                                      UART0_INT_IRQn
#define GPIO_UART_0_RX_PORT                                                GPIOA
#define GPIO_UART_0_TX_PORT                                                GPIOA
#define GPIO_UART_0_RX_PIN                                        DL_GPIO_PIN_11
#define GPIO_UART_0_TX_PIN                                        DL_GPIO_PIN_10
#define GPIO_UART_0_IOMUX_RX                                     (IOMUX_PINCM22)
#define GPIO_UART_0_IOMUX_TX                                     (IOMUX_PINCM21)
#define GPIO_UART_0_IOMUX_RX_FUNC                      IOMUX_PINCM22_PF_UART0_RX
#define GPIO_UART_0_IOMUX_TX_FUNC                      IOMUX_PINCM21_PF_UART0_TX
#define UART_0_BAUD_RATE                                                (115200)
#define UART_0_IBRD_32_MHZ_115200_BAUD                                      (17)
#define UART_0_FBRD_32_MHZ_115200_BAUD                                      (23)
/* Defines for UART_3 */
#define UART_3_INST                                                        UART3
#define UART_3_INST_FREQUENCY                                           32000000
#define UART_3_INST_IRQHandler                                  UART3_IRQHandler
#define UART_3_INST_INT_IRQN                                      UART3_INT_IRQn
#define GPIO_UART_3_RX_PORT                                                GPIOB
#define GPIO_UART_3_TX_PORT                                                GPIOB
#define GPIO_UART_3_RX_PIN                                         DL_GPIO_PIN_3
#define GPIO_UART_3_TX_PIN                                         DL_GPIO_PIN_2
#define GPIO_UART_3_IOMUX_RX                                     (IOMUX_PINCM16)
#define GPIO_UART_3_IOMUX_TX                                     (IOMUX_PINCM15)
#define GPIO_UART_3_IOMUX_RX_FUNC                      IOMUX_PINCM16_PF_UART3_RX
#define GPIO_UART_3_IOMUX_TX_FUNC                      IOMUX_PINCM15_PF_UART3_TX
#define UART_3_BAUD_RATE                                                  (9600)
#define UART_3_IBRD_32_MHZ_9600_BAUD                                       (208)
#define UART_3_FBRD_32_MHZ_9600_BAUD                                        (21)
/* Defines for UART_2 */
#define UART_2_INST                                                        UART2
#define UART_2_INST_FREQUENCY                                           32000000
#define UART_2_INST_IRQHandler                                  UART2_IRQHandler
#define UART_2_INST_INT_IRQN                                      UART2_INT_IRQn
#define GPIO_UART_2_RX_PORT                                                GPIOB
#define GPIO_UART_2_TX_PORT                                                GPIOB
#define GPIO_UART_2_RX_PIN                                        DL_GPIO_PIN_16
#define GPIO_UART_2_TX_PIN                                        DL_GPIO_PIN_15
#define GPIO_UART_2_IOMUX_RX                                     (IOMUX_PINCM33)
#define GPIO_UART_2_IOMUX_TX                                     (IOMUX_PINCM32)
#define GPIO_UART_2_IOMUX_RX_FUNC                      IOMUX_PINCM33_PF_UART2_RX
#define GPIO_UART_2_IOMUX_TX_FUNC                      IOMUX_PINCM32_PF_UART2_TX
#define UART_2_BAUD_RATE                                                  (9600)
#define UART_2_IBRD_32_MHZ_9600_BAUD                                       (208)
#define UART_2_FBRD_32_MHZ_9600_BAUD                                        (21)




/* Defines for SPI_0 */
#define SPI_0_INST                                                         SPI1
#define SPI_0_INST_IRQHandler                                   SPI1_IRQHandler
#define SPI_0_INST_INT_IRQN                                       SPI1_INT_IRQn
#define GPIO_SPI_0_PICO_PORT                                              GPIOB
#define GPIO_SPI_0_PICO_PIN                                       DL_GPIO_PIN_8
#define GPIO_SPI_0_IOMUX_PICO                                   (IOMUX_PINCM25)
#define GPIO_SPI_0_IOMUX_PICO_FUNC                   IOMUX_PINCM25_PF_SPI1_PICO
#define GPIO_SPI_0_POCI_PORT                                              GPIOA
#define GPIO_SPI_0_POCI_PIN                                      DL_GPIO_PIN_16
#define GPIO_SPI_0_IOMUX_POCI                                   (IOMUX_PINCM38)
#define GPIO_SPI_0_IOMUX_POCI_FUNC                   IOMUX_PINCM38_PF_SPI1_POCI
/* GPIO configuration for SPI_0 */
#define GPIO_SPI_0_SCLK_PORT                                              GPIOB
#define GPIO_SPI_0_SCLK_PIN                                       DL_GPIO_PIN_9
#define GPIO_SPI_0_IOMUX_SCLK                                   (IOMUX_PINCM26)
#define GPIO_SPI_0_IOMUX_SCLK_FUNC                   IOMUX_PINCM26_PF_SPI1_SCLK
#define GPIO_SPI_0_CS0_PORT                                               GPIOB
#define GPIO_SPI_0_CS0_PIN                                       DL_GPIO_PIN_20
#define GPIO_SPI_0_IOMUX_CS0                                    (IOMUX_PINCM48)
#define GPIO_SPI_0_IOMUX_CS0_FUNC                     IOMUX_PINCM48_PF_SPI1_CS0
/* Defines for SPI_1 */
#define SPI_1_INST                                                         SPI0
#define SPI_1_INST_IRQHandler                                   SPI0_IRQHandler
#define SPI_1_INST_INT_IRQN                                       SPI0_INT_IRQn
#define GPIO_SPI_1_PICO_PORT                                              GPIOA
#define GPIO_SPI_1_PICO_PIN                                      DL_GPIO_PIN_14
#define GPIO_SPI_1_IOMUX_PICO                                   (IOMUX_PINCM36)
#define GPIO_SPI_1_IOMUX_PICO_FUNC                   IOMUX_PINCM36_PF_SPI0_PICO
#define GPIO_SPI_1_POCI_PORT                                              GPIOA
#define GPIO_SPI_1_POCI_PIN                                      DL_GPIO_PIN_13
#define GPIO_SPI_1_IOMUX_POCI                                   (IOMUX_PINCM35)
#define GPIO_SPI_1_IOMUX_POCI_FUNC                   IOMUX_PINCM35_PF_SPI0_POCI
/* GPIO configuration for SPI_1 */
#define GPIO_SPI_1_SCLK_PORT                                              GPIOA
#define GPIO_SPI_1_SCLK_PIN                                      DL_GPIO_PIN_12
#define GPIO_SPI_1_IOMUX_SCLK                                   (IOMUX_PINCM34)
#define GPIO_SPI_1_IOMUX_SCLK_FUNC                   IOMUX_PINCM34_PF_SPI0_SCLK
#define GPIO_SPI_1_CS0_PORT                                               GPIOA
#define GPIO_SPI_1_CS0_PIN                                        DL_GPIO_PIN_2
#define GPIO_SPI_1_IOMUX_CS0                                     (IOMUX_PINCM7)
#define GPIO_SPI_1_IOMUX_CS0_FUNC                      IOMUX_PINCM7_PF_SPI0_CS0



/* Defines for ADC_POWER */
#define ADC_POWER_INST                                                      ADC1
#define ADC_POWER_INST_IRQHandler                                ADC1_IRQHandler
#define ADC_POWER_INST_INT_IRQN                                  (ADC1_INT_IRQn)
#define ADC_POWER_ADCMEM_0                                    DL_ADC12_MEM_IDX_0
#define ADC_POWER_ADCMEM_0_REF                   DL_ADC12_REFERENCE_VOLTAGE_VDDA
#define ADC_POWER_ADCMEM_0_REF_VOLTAGE_V                                     3.3
#define GPIO_ADC_POWER_C0_PORT                                             GPIOA
#define GPIO_ADC_POWER_C0_PIN                                     DL_GPIO_PIN_15
#define GPIO_ADC_POWER_IOMUX_C0                                  (IOMUX_PINCM37)
#define GPIO_ADC_POWER_IOMUX_C0_FUNC              (IOMUX_PINCM37_PF_UNCONNECTED)



/* Port definition for Pin Group GPIO_OTHER */
#define GPIO_OTHER_PORT                                                  (GPIOB)

/* Defines for PIN_B22: GPIOB.22 with pinCMx 50 on package pin 21 */
#define GPIO_OTHER_PIN_B22_PIN                                  (DL_GPIO_PIN_22)
#define GPIO_OTHER_PIN_B22_IOMUX                                 (IOMUX_PINCM50)
/* Defines for PIN_B1: GPIOB.1 with pinCMx 13 on package pin 48 */
#define GPIO_OTHER_PIN_B1_PIN                                    (DL_GPIO_PIN_1)
#define GPIO_OTHER_PIN_B1_IOMUX                                  (IOMUX_PINCM13)
/* Defines for PIN_B0: GPIOB.0 with pinCMx 12 on package pin 47 */
#define GPIO_OTHER_PIN_B0_PIN                                    (DL_GPIO_PIN_0)
#define GPIO_OTHER_PIN_B0_IOMUX                                  (IOMUX_PINCM12)
/* Port definition for Pin Group GPIO_LEFT */
#define GPIO_LEFT_PORT                                                   (GPIOA)

/* Defines for PIN_A21: GPIOA.21 with pinCMx 46 on package pin 17 */
// groups represented: ["GPIO_RIGHT","BUTTON","GPIO_LEFT"]
// pins affected: ["PIN_A26","PIN_A25","PIN_A29","PIN_A30","PIN_A31","PIN_A21","PIN_A22"]
#define GPIO_MULTIPLE_GPIOA_INT_IRQN                            (GPIOA_INT_IRQn)
#define GPIO_MULTIPLE_GPIOA_INT_IIDX            (DL_INTERRUPT_GROUP1_IIDX_GPIOA)
#define GPIO_LEFT_PIN_A21_IIDX                              (DL_GPIO_IIDX_DIO21)
#define GPIO_LEFT_PIN_A21_PIN                                   (DL_GPIO_PIN_21)
#define GPIO_LEFT_PIN_A21_IOMUX                                  (IOMUX_PINCM46)
/* Defines for PIN_A22: GPIOA.22 with pinCMx 47 on package pin 18 */
#define GPIO_LEFT_PIN_A22_IIDX                              (DL_GPIO_IIDX_DIO22)
#define GPIO_LEFT_PIN_A22_PIN                                   (DL_GPIO_PIN_22)
#define GPIO_LEFT_PIN_A22_IOMUX                                  (IOMUX_PINCM47)
/* Defines for PIN_A17: GPIOA.17 with pinCMx 39 on package pin 10 */
#define GPIO_LEFT_PIN_A17_PIN                                   (DL_GPIO_PIN_17)
#define GPIO_LEFT_PIN_A17_IOMUX                                  (IOMUX_PINCM39)
/* Defines for PIN_A18: GPIOA.18 with pinCMx 40 on package pin 11 */
#define GPIO_LEFT_PIN_A18_PIN                                   (DL_GPIO_PIN_18)
#define GPIO_LEFT_PIN_A18_IOMUX                                  (IOMUX_PINCM40)
/* Port definition for Pin Group GPIO_RIGHT */
#define GPIO_RIGHT_PORT                                                  (GPIOA)

/* Defines for PIN_A28: GPIOA.28 with pinCMx 3 on package pin 35 */
#define GPIO_RIGHT_PIN_A28_PIN                                  (DL_GPIO_PIN_28)
#define GPIO_RIGHT_PIN_A28_IOMUX                                  (IOMUX_PINCM3)
/* Defines for PIN_A27: GPIOA.27 with pinCMx 60 on package pin 31 */
#define GPIO_RIGHT_PIN_A27_PIN                                  (DL_GPIO_PIN_27)
#define GPIO_RIGHT_PIN_A27_IOMUX                                 (IOMUX_PINCM60)
/* Defines for PIN_A26: GPIOA.26 with pinCMx 59 on package pin 30 */
#define GPIO_RIGHT_PIN_A26_IIDX                             (DL_GPIO_IIDX_DIO26)
#define GPIO_RIGHT_PIN_A26_PIN                                  (DL_GPIO_PIN_26)
#define GPIO_RIGHT_PIN_A26_IOMUX                                 (IOMUX_PINCM59)
/* Defines for PIN_A25: GPIOA.25 with pinCMx 55 on package pin 26 */
#define GPIO_RIGHT_PIN_A25_IIDX                             (DL_GPIO_IIDX_DIO25)
#define GPIO_RIGHT_PIN_A25_PIN                                  (DL_GPIO_PIN_25)
#define GPIO_RIGHT_PIN_A25_IOMUX                                 (IOMUX_PINCM55)
/* Port definition for Pin Group BUTTON */
#define BUTTON_PORT                                                      (GPIOA)

/* Defines for PIN_A29: GPIOA.29 with pinCMx 4 on package pin 36 */
#define BUTTON_PIN_A29_IIDX                                 (DL_GPIO_IIDX_DIO29)
#define BUTTON_PIN_A29_PIN                                      (DL_GPIO_PIN_29)
#define BUTTON_PIN_A29_IOMUX                                      (IOMUX_PINCM4)
/* Defines for PIN_A30: GPIOA.30 with pinCMx 5 on package pin 37 */
#define BUTTON_PIN_A30_IIDX                                 (DL_GPIO_IIDX_DIO30)
#define BUTTON_PIN_A30_PIN                                      (DL_GPIO_PIN_30)
#define BUTTON_PIN_A30_IOMUX                                      (IOMUX_PINCM5)
/* Defines for PIN_A31: GPIOA.31 with pinCMx 6 on package pin 39 */
#define BUTTON_PIN_A31_IIDX                                 (DL_GPIO_IIDX_DIO31)
#define BUTTON_PIN_A31_PIN                                      (DL_GPIO_PIN_31)
#define BUTTON_PIN_A31_IOMUX                                      (IOMUX_PINCM6)
/* Port definition for Pin Group GPIO_SPI */
#define GPIO_SPI_PORT                                                    (GPIOB)

/* Defines for PIN_B11: GPIOB.11 with pinCMx 28 on package pin 63 */
#define GPIO_SPI_PIN_B11_PIN                                    (DL_GPIO_PIN_11)
#define GPIO_SPI_PIN_B11_IOMUX                                   (IOMUX_PINCM28)
/* Defines for PIN_B14: GPIOB.14 with pinCMx 31 on package pin 2 */
#define GPIO_SPI_PIN_B14_PIN                                    (DL_GPIO_PIN_14)
#define GPIO_SPI_PIN_B14_IOMUX                                   (IOMUX_PINCM31)
/* Defines for PIN_A9: GPIOA.9 with pinCMx 20 on package pin 55 */
#define GPIO_GYRO_PIN_A9_PORT                                            (GPIOA)
#define GPIO_GYRO_PIN_A9_PIN                                     (DL_GPIO_PIN_9)
#define GPIO_GYRO_PIN_A9_IOMUX                                   (IOMUX_PINCM20)
/* Defines for PIN_A8: GPIOA.8 with pinCMx 19 on package pin 54 */
#define GPIO_GYRO_PIN_A8_PORT                                            (GPIOA)
#define GPIO_GYRO_PIN_A8_PIN                                     (DL_GPIO_PIN_8)
#define GPIO_GYRO_PIN_A8_IOMUX                                   (IOMUX_PINCM19)
/* Defines for PIN_B5: GPIOB.5 with pinCMx 18 on package pin 53 */
#define GPIO_GYRO_PIN_B5_PORT                                            (GPIOB)
// pins affected by this interrupt request:["PIN_B5","PIN_B4"]
#define GPIO_GYRO_INT_IRQN                                      (GPIOB_INT_IRQn)
#define GPIO_GYRO_INT_IIDX                      (DL_INTERRUPT_GROUP1_IIDX_GPIOB)
#define GPIO_GYRO_PIN_B5_IIDX                                (DL_GPIO_IIDX_DIO5)
#define GPIO_GYRO_PIN_B5_PIN                                     (DL_GPIO_PIN_5)
#define GPIO_GYRO_PIN_B5_IOMUX                                   (IOMUX_PINCM18)
/* Defines for PIN_B4: GPIOB.4 with pinCMx 17 on package pin 52 */
#define GPIO_GYRO_PIN_B4_PORT                                            (GPIOB)
#define GPIO_GYRO_PIN_B4_IIDX                                (DL_GPIO_IIDX_DIO4)
#define GPIO_GYRO_PIN_B4_PIN                                     (DL_GPIO_PIN_4)
#define GPIO_GYRO_PIN_B4_IOMUX                                   (IOMUX_PINCM17)




/* clang-format on */

void SYSCFG_DL_init(void);
void SYSCFG_DL_initPower(void);
void SYSCFG_DL_GPIO_init(void);
void SYSCFG_DL_SYSCTL_init(void);
void SYSCFG_DL_PWM_MOTOR_init(void);
void SYSCFG_DL_PWM_OTHER_init(void);
void SYSCFG_DL_PWM_SPI_init(void);
void SYSCFG_DL_I2C_SENSOR_init(void);
void SYSCFG_DL_UART_0_init(void);
void SYSCFG_DL_UART_3_init(void);
void SYSCFG_DL_UART_2_init(void);
void SYSCFG_DL_SPI_0_init(void);
void SYSCFG_DL_SPI_1_init(void);
void SYSCFG_DL_ADC_POWER_init(void);

void SYSCFG_DL_SYSTICK_init(void);

bool SYSCFG_DL_saveConfiguration(void);
bool SYSCFG_DL_restoreConfiguration(void);

#ifdef __cplusplus
}
#endif

#endif /* ti_msp_dl_config_h */
