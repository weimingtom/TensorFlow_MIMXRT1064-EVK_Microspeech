/*
 * Copyright (c) 2016-2017 ARM Limited
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

/**
 * \file platform_retarget_dev.h
 * \brief This file defines exports the structures based on the peripheral
 * definitions from device_cfg.h.
 * This retarget file is meant to be used as a helper for baremetal
 * applications and/or as an example of how to configure the generic
 * driver structures.
 */

#ifndef __ARM_LTD_SSE_200_RETARGET_DEV_H__
#define __ARM_LTD_SSE_200_RETARGET_DEV_H__

#include "device_cfg.h"

/* ======= Defines peripheral configuration structures ======= */
/* CMSDK GPIO driver structures */
#ifdef GPIO0_CMSDK_S
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO0_CMSDK_DEV_S;
#endif
#ifdef GPIO0_CMSDK_NS
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO0_CMSDK_DEV_NS;
#endif

#ifdef GPIO1_CMSDK_S
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO1_CMSDK_DEV_S;
#endif
#ifdef GPIO1_CMSDK_NS
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO1_CMSDK_DEV_NS;
#endif

#ifdef GPIO2_CMSDK_S
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO2_CMSDK_DEV_S;
#endif
#ifdef GPIO2_CMSDK_NS
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO2_CMSDK_DEV_NS;
#endif

#ifdef GPIO3_CMSDK_S
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO3_CMSDK_DEV_S;
#endif
#ifdef GPIO3_CMSDK_NS
#include "gpio_cmsdk_drv.h"
extern struct gpio_cmsdk_dev_t GPIO3_CMSDK_DEV_NS;
#endif

/* ARM I2C SBCon driver structures */
#ifdef I2C0_SBCON_S
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C0_SBCON_DEV_S;
#endif
#ifdef I2C0_SBCON_NS
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C0_SBCON_DEV_NS;
#endif

#ifdef I2C1_SBCON_S
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C1_SBCON_DEV_S;
#endif
#ifdef I2C1_SBCON_NS
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C1_SBCON_DEV_NS;
#endif

#ifdef I2C2_SBCON_S
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C2_SBCON_DEV_S;
#endif
#ifdef I2C2_SBCON_NS
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C2_SBCON_DEV_NS;
#endif

#ifdef I2C3_SBCON_S
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C3_SBCON_DEV_S;
#endif
#ifdef I2C3_SBCON_NS
#include "i2c_sbcon_drv.h"
extern struct i2c_sbcon_dev_t I2C3_SBCON_DEV_NS;
#endif

/* ARM MPS2 IO FPGAIO driver structures */
#ifdef ARM_MPS2_IO_FPGAIO_S
#include "arm_mps2_io_drv.h"
extern struct arm_mps2_io_dev_t ARM_MPS2_IO_FPGAIO_DEV_S;
#endif
#ifdef ARM_MPS2_IO_FPGAIO_NS
#include "arm_mps2_io_drv.h"
extern struct arm_mps2_io_dev_t ARM_MPS2_IO_FPGAIO_DEV_NS;
#endif

/* ARM MPS2 IO SCC driver structures */
#ifdef ARM_MPS2_IO_SCC_S
#include "arm_mps2_io_drv.h"
extern struct arm_mps2_io_dev_t ARM_MPS2_IO_SCC_DEV_S;
#endif
#ifdef ARM_MPS2_IO_SCC_NS
#include "arm_mps2_io_drv.h"
extern struct arm_mps2_io_dev_t ARM_MPS2_IO_SCC_DEV_NS;
#endif

/* UART CMSDK driver structures */
#ifdef UART0_CMSDK_S
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART0_CMSDK_DEV_S;
#endif
#ifdef UART0_CMSDK_NS
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART0_CMSDK_DEV_NS;
#endif

#ifdef UART1_CMSDK_S
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART1_CMSDK_DEV_S;
#endif
#ifdef UART1_CMSDK_NS
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART1_CMSDK_DEV_NS;
#endif

#ifdef UART2_CMSDK_S
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART2_CMSDK_DEV_S;
#endif
#ifdef UART2_CMSDK_NS
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART2_CMSDK_DEV_NS;
#endif

#ifdef UART3_CMSDK_S
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART3_CMSDK_DEV_S;
#endif
#ifdef UART3_CMSDK_NS
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART3_CMSDK_DEV_NS;
#endif

#ifdef UART4_CMSDK_S
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART4_CMSDK_DEV_S;
#endif
#ifdef UART4_CMSDK_NS
#include "uart_cmsdk_drv.h"
extern struct uart_cmsdk_dev_t UART4_CMSDK_DEV_NS;
#endif

/* ARM Watchdog driver structures */
#ifdef WATCHDOG_CMSDK_S
#include "arm_watchdog_drv.h"
extern struct arm_watchdog_dev_t WATCHDOG_CMSDK_DEV_S;
#endif
#ifdef WATCHDOG_CMSDK_NS
#include "arm_watchdog_drv.h"
extern struct arm_watchdog_dev_t WATCHDOG_CMSDK_DEV_NS;
#endif

#ifdef S32K_WATCHDOG_S
#include "arm_watchdog_drv.h"
extern struct arm_watchdog_dev_t S32K_WATCHDOG_DEV_S;
#endif
#ifdef S32K_WATCHDOG_NS
#include "arm_watchdog_drv.h"
extern struct arm_watchdog_dev_t S32K_WATCHDOG_DEV_NS;
#endif

/* APB Dualtimer driver structures */
#ifdef DUALTIMER_CMSDK_S
#include "dualtimer_cmsdk_drv.h"
extern struct dualtimer_cmsdk_dev_t DUALTIMER_CMSDK_DEV_S;
#endif
#ifdef DUALTIMER_CMSDK_NS
#include "dualtimer_cmsdk_drv.h"
extern struct dualtimer_cmsdk_dev_t DUALTIMER_CMSDK_DEV_NS;
#endif

/* ARM PPC driver structures */
#ifdef AHB_PPC0_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t AHB_PPC0_DEV_S;
#endif

#ifdef AHB_PPCEXP0_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t AHB_PPCEXP0_DEV_S;
#endif

#ifdef AHB_PPCEXP1_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t AHB_PPCEXP1_DEV_S;
#endif

#ifdef AHB_PPCEXP2_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t AHB_PPCEXP2_DEV_S;
#endif

#ifdef AHB_PPCEXP3_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t AHB_PPCEXP3_DEV_S;
#endif

#ifdef APB_PPC0_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPC0_DEV_S;
#endif

#ifdef APB_PPC1_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPC1_DEV_S;
#endif

#ifdef APB_PPCEXP0_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPCEXP0_DEV_S;
#endif

#ifdef APB_PPCEXP1_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPCEXP1_DEV_S;
#endif

#ifdef APB_PPCEXP2_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPCEXP2_DEV_S;
#endif

#ifdef APB_PPCEXP3_S
#include "ppc_sse200_drv.h"
extern struct ppc_sse200_dev_t APB_PPCEXP3_DEV_S;
#endif

/* APB Timer driver structures */
#ifdef TIMER0_CMSDK_S
#include "timer_cmsdk_drv.h"
extern struct timer_cmsdk_dev_t TIMER0_CMSDK_DEV_S;
#endif
#ifdef TIMER0_CMSDK_NS
#include "timer_cmsdk_drv.h"
extern struct timer_cmsdk_dev_t TIMER0_CMSDK_DEV_NS;
#endif

#ifdef TIMER1_CMSDK_S
#include "timer_cmsdk_drv.h"
extern struct timer_cmsdk_dev_t TIMER1_CMSDK_DEV_S;
#endif
#ifdef TIMER1_CMSDK_NS
#include "timer_cmsdk_drv.h"
extern struct timer_cmsdk_dev_t TIMER1_CMSDK_DEV_NS;
#endif

/* ARM MPC SSE 200 driver structures */
#ifdef MPC_ISRAM0_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_ISRAM0_DEV_S;
#endif

#ifdef MPC_ISRAM1_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_ISRAM1_DEV_S;
#endif

#ifdef MPC_ISRAM2_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_ISRAM2_DEV_S;
#endif

#ifdef MPC_ISRAM3_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_ISRAM3_DEV_S;
#endif

#ifdef MPC_SSRAM1_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_SSRAM1_DEV_S;
#endif

#ifdef MPC_SSRAM2_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_SSRAM2_DEV_S;
#endif

#ifdef MPC_SSRAM3_S
#include "mpc_sie200_drv.h"
extern struct mpc_sie200_dev_t MPC_SSRAM3_DEV_S;
#endif

/* ARM SPI driver structures */
#ifdef SPI0_PL022_S
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI0_PL022_DEV_S;
#endif
#ifdef SPI0_PL022_NS
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI0_PL022_DEV_NS;
#endif

#ifdef SPI1_PL022_S
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI1_PL022_DEV_S;
#endif
#ifdef SPI1_PL022_NS
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI1_PL022_DEV_NS;
#endif

#ifdef SPI2_PL022_S
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI2_PL022_DEV_S;
#endif
#ifdef SPI2_PL022_NS
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI2_PL022_DEV_NS;
#endif

#ifdef SPI3_PL022_S
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI3_PL022_DEV_S;
#endif
#ifdef SPI3_PL022_NS
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI3_PL022_DEV_NS;
#endif

#ifdef SPI4_PL022_S
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI4_PL022_DEV_S;
#endif
#ifdef SPI4_PL022_NS
#include "spi_pl022_drv.h"
extern struct spi_pl022_dev_t SPI4_PL022_DEV_NS;
#endif

#endif  /* __ARM_LTD_SSE_200_RETARGET_DEV_H__ */
