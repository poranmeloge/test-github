/*
 * @brief CGU/CCU registers and control functions
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2012
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licensor disclaim any and
 * all warranties, express or implied, including all implied warranties of
 * merchantability, fitness for a particular purpose and non-infringement of
 * intellectual property rights.  NXP Semiconductors assumes no responsibility
 * or liability for the use of the software, conveys no license or rights under any
 * patent, copyright, mask work right, or any other intellectual property rights in
 * or to any products. NXP Semiconductors reserves the right to make changes
 * in the software without notification. NXP Semiconductors also makes no
 * representation or warranty that such application will be suitable for the
 * specified use without further testing or modification.
 *
 * @par
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors' and its
 * licensor's relevant copyrights in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#ifndef __CGUCCU_18XX_43XX_H_
#define __CGUCCU_18XX_43XX_H_

#include "cmsis.h"
#include "chip_clocks.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @ingroup CLOCK_18XX_43XX
 * @{
 */

/**
 * @brief LPC18XX/43XX CGU register block structure
 */
typedef struct {							/*!< (@ 0x40050000) CGU Structure          */
	__I  uint32_t  RESERVED0[5];
	__IO uint32_t  FREQ_MON;				/*!< (@ 0x40050014) Frequency monitor register */
	__IO uint32_t  XTAL_OSC_CTRL;			/*!< (@ 0x40050018) Crystal oscillator control register */
	__I  uint32_t  PLL0USB_STAT;			/*!< (@ 0x4005001C) PLL0 (USB) status register */
	__IO uint32_t  PLL0USB_CTRL;			/*!< (@ 0x40050020) PLL0 (USB) control register */
	__IO uint32_t  PLL0USB_MDIV;			/*!< (@ 0x40050024) PLL0 (USB) M-divider register */
	__IO uint32_t  PLL0USB_NP_DIV;			/*!< (@ 0x40050028) PLL0 (USB) N/P-divider register */
	__I  uint32_t  PLL0AUDIO_STAT;			/*!< (@ 0x4005002C) PLL0 (audio) status register */
	__IO uint32_t  PLL0AUDIO_CTRL;			/*!< (@ 0x40050030) PLL0 (audio) control register */
	__IO uint32_t  PLL0AUDIO_MDIV;			/*!< (@ 0x40050034) PLL0 (audio) M-divider register */
	__IO uint32_t  PLL0AUDIO_NP_DIV;		/*!< (@ 0x40050038) PLL0 (audio) N/P-divider register */
	__IO uint32_t  PLL0AUDIO_FRAC;			/*!< (@ 0x4005003C) PLL0 (audio)           */
	__I  uint32_t  PLL1_STAT;				/*!< (@ 0x40050040) PLL1 status register   */
	__IO uint32_t  PLL1_CTRL;				/*!< (@ 0x40050044) PLL1 control register  */
	__IO uint32_t  IDIV_CTRL[CLK_IDIV_LAST];/*!< (@ 0x40050048) Integer divider A-E control registers */
	__IO uint32_t  BASE_CLK[CLK_BASE_LAST];	/*!< (@ 0x4005005C) Start of base clock registers */
} LPC_CGU_T;

/**
 * @brief CCU clock config/status register pair
 */
typedef struct {
	__IO uint32_t  CFG;						/*!< CCU clock configuration register */
	__I  uint32_t  STAT;					/*!< CCU clock status register */
} CCU_CFGSTAT_T;

/**
 * @brief CCU1 register block structure
 */
typedef struct {							/*!< (@ 0x40051000) CCU1 Structure         */
	__IO uint32_t  PM;						/*!< (@ 0x40051000) CCU1 power mode register */
	__I  uint32_t  BASE_STAT;				/*!< (@ 0x40051004) CCU1 base clocks status register */
	__I  uint32_t  RESERVED0[62];
	CCU_CFGSTAT_T  CLKCCU[CLK_CCU1_LAST];	/*!< (@ 0x40051100) Start of CCU1 clock registers */
} LPC_CCU1_Type;

/**
 * @brief CCU2 register block structure
 */
typedef struct {							/*!< (@ 0x40052000) CCU2 Structure         */
	__IO uint32_t  PM;						/*!< (@ 0x40052000) Power mode register    */
	__I  uint32_t  BASE_STAT;				/*!< (@ 0x40052004) CCU base clocks status register */
	__I  uint32_t  RESERVED0[62];
	CCU_CFGSTAT_T  CLKCCU[CLK_CCU2_LAST - CLK_CCU1_LAST];	/*!< (@ 0x40052100) Start of CCU2 clock registers */
} LPC_CCU2_Type;

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __CGUCCU_18XX_43XX_H_ */
