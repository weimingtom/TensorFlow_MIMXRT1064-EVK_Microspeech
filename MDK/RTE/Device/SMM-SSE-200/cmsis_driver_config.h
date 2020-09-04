/*
 * Copyright (c) 2018 Arm Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CMSIS_DRIVER_CONFIG_H__
#define __CMSIS_DRIVER_CONFIG_H__

#include "device_cfg.h"
#include "platform_retarget_dev.h"
#include "platform_retarget_pins.h"
#include "RTE_Device.h"

/* CMSDK UART */
#define UART0_CMSDK_DEV           UART0_CMSDK_DEV_NS
#define UART1_CMSDK_DEV           UART1_CMSDK_DEV_NS
#define UART2_CMSDK_DEV           UART2_CMSDK_DEV_NS
#define UART3_CMSDK_DEV           UART3_CMSDK_DEV_NS
#define UART4_CMSDK_DEV           UART4_CMSDK_DEV_NS

/* ARM Memory Protection Controller (MPC) */
#define MPC_ISRAM0_DEV            MPC_ISRAM0_DEV_S
#define MPC_ISRAM1_DEV            MPC_ISRAM1_DEV_S
#define MPC_ISRAM2_DEV            MPC_ISRAM2_DEV_S
#define MPC_ISRAM3_DEV            MPC_ISRAM3_DEV_S
#define MPC_SSRAM1_DEV            MPC_SSRAM1_DEV_S
#define MPC_SSRAM2_DEV            MPC_SSRAM2_DEV_S
#define MPC_SSRAM3_DEV            MPC_SSRAM3_DEV_S

#define MPC_SSRAM1_RANGE_BASE_NS  MPC_CODE_SRAM1_RANGE_BASE_NS
#define MPC_SSRAM1_RANGE_LIMIT_NS MPC_CODE_SRAM1_RANGE_LIMIT_NS
#define MPC_SSRAM1_RANGE_BASE_S   MPC_CODE_SRAM1_RANGE_BASE_S
#define MPC_SSRAM1_RANGE_LIMIT_S  MPC_CODE_SRAM1_RANGE_LIMIT_S

#define MPC_SSRAM2_RANGE_BASE_NS  MPC_CODE_SRAM2_RANGE_BASE_NS
#define MPC_SSRAM2_RANGE_LIMIT_NS MPC_CODE_SRAM2_RANGE_LIMIT_NS
#define MPC_SSRAM2_RANGE_BASE_S   MPC_CODE_SRAM2_RANGE_BASE_S
#define MPC_SSRAM2_RANGE_LIMIT_S  MPC_CODE_SRAM2_RANGE_LIMIT_S

#define MPC_SSRAM3_RANGE_BASE_NS  MPC_CODE_SRAM3_RANGE_BASE_NS
#define MPC_SSRAM3_RANGE_LIMIT_NS MPC_CODE_SRAM3_RANGE_LIMIT_NS
#define MPC_SSRAM3_RANGE_BASE_S   MPC_CODE_SRAM3_RANGE_BASE_S
#define MPC_SSRAM3_RANGE_LIMIT_S  MPC_CODE_SRAM3_RANGE_LIMIT_S

/* ARM Peripheral Protection Controllers (PPC) */
#define AHB_PPC0_DEV              AHB_PPC0_DEV_S
#define AHB_PPCEXP0_DEV           AHB_PPCEXP0_DEV_S
#define AHB_PPCEXP1_DEV           AHB_PPCEXP1_DEV_S
#define AHB_PPCEXP2_DEV           AHB_PPCEXP2_DEV_S
#define AHB_PPCEXP3_DEV           AHB_PPCEXP3_DEV_S
#define APB_PPC0_DEV              APB_PPC0_DEV_S
#define APB_PPC1_DEV              APB_PPC1_DEV_S
#define APB_PPCEXP0_DEV           APB_PPCEXP0_DEV_S
#define APB_PPCEXP1_DEV           APB_PPCEXP1_DEV_S
#define APB_PPCEXP2_DEV           APB_PPCEXP2_DEV_S
#define APB_PPCEXP3_DEV           APB_PPCEXP3_DEV_S

#endif  /* __CMSIS_DRIVER_CONFIG_H__ */