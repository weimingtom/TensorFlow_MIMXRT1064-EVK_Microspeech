/*
 * Copyright (c) 2016-2018 ARM Limited
 *
 * Licensed under the Apache License Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ARM_LTD_DEVICE_CFG_H__
#define __ARM_LTD_DEVICE_CFG_H__

/**
 * \file device_cfg.h
 * \brief
 * This is the default device configuration file with all peripherals
 * defined and configured to be use via the non-secure base address.
 * This file is an example of how to define your own configuration file
 * with the peripherals required for your application.
 */

/* CMSDK GPIO */
#define GPIO0_CMSDK_S
#define GPIO0_CMSDK_NS
#define GPIO1_CMSDK_S
#define GPIO1_CMSDK_NS
#define GPIO2_CMSDK_S
#define GPIO2_CMSDK_NS
#define GPIO3_CMSDK_S
#define GPIO3_CMSDK_NS

/* ARM I2C SBCon */
#define DEFAULT_I2C_SBCON_HZ  4000000U /* 4MHz */
#define I2C0_SBCON_S
#define I2C0_SBCON_NS
#define I2C1_SBCON_S
#define I2C1_SBCON_NS
#define I2C2_SBCON_S
#define I2C2_SBCON_NS
#define I2C3_SBCON_S
#define I2C3_SBCON_NS

/* ARM MPS2 IO FPGAIO */
#define ARM_MPS2_IO_FPGAIO_S
#define ARM_MPS2_IO_FPGAIO_NS

/* ARM MPS2 IO SCC */
#define ARM_MPS2_IO_SCC_S
#define ARM_MPS2_IO_SCC_NS

/* ARM Memory Protection Controller (MPC) */
#define MPC_ISRAM0_S
#define MPC_ISRAM1_S
#define MPC_ISRAM2_S
#define MPC_ISRAM3_S
#define MPC_SSRAM1_S
#define MPC_SSRAM2_S
#define MPC_SSRAM3_S

/* ARM Peripheral Protection Controllers (PPC) */
#define AHB_PPCEXP0_S
#define APB_PPC0_S
#define APB_PPC1_S
#define APB_PPCEXP0_S
#define APB_PPCEXP1_S
#define APB_PPCEXP2_S
#define APB_PPCEXP3_S

/* ARM SPI PL022 */
#define DEFAULT_SPI_SPEED_HZ  4000000U /* 4MHz */
#define SPI0_PL022_S
#define SPI0_PL022_NS
#define SPI1_PL022_S
#define SPI1_PL022_NS
#define SPI2_PL022_S
#define SPI2_PL022_NS
#define SPI3_PL022_S
#define SPI3_PL022_NS
#define SPI4_PL022_S
#define SPI4_PL022_NS

/* CMSDK UART */
#define DEFAULT_UART_BAUDRATE  9600
#define UART0_CMSDK_S
#define UART0_CMSDK_NS
#define UART1_CMSDK_S
#define UART1_CMSDK_NS
#define UART2_CMSDK_S
#define UART2_CMSDK_NS
#define UART3_CMSDK_S
#define UART3_CMSDK_NS
#define UART4_CMSDK_S
#define UART4_CMSDK_NS

/* CMSDK Watchdog */
#define WATCHDOG_CMSDK_S
#define WATCHDOG_CMSDK_NS
#define S32K_WATCHDOG_S
#define S32K_WATCHDOG_NS

/* CMSDK Dualtimers */
#define APB_DUALTIMER_S
#define APB_DUALTIMER_NS

/* CMSDK Timers */
#define TIMER0_CMSDK_S
#define TIMER0_CMSDK_NS
#define TIMER1_CMSDK_S
#define TIMER1_CMSDK_NS

#endif  /* __ARM_LTD_DEVICE_CFG_H__ */
