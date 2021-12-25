/*
 * Copyright 2019-2020 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define BOARD_INITPINS_IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK 0x0200U /*!< GPIO1 and GPIO6 share same IO MUX function, GPIO_MUX1 selects one GPIO function: affected bits mask */

/* GPIO_AD_B0_09 (coord F14), JTAG_TDI/J21[5]/ENET_RST/J22[5]/USER_LED */
/* Routed pin properties */
#define BOARD_USER_LED_PERIPHERAL                                          GPIO1   /*!< Peripheral name */
#define BOARD_USER_LED_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_USER_LED_CHANNEL                                                9U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_USER_LED_GPIO                                                GPIO1   /*!< GPIO peripheral base pointer */
#define BOARD_USER_LED_GPIO_PIN                                               9U   /*!< GPIO pin number */
#define BOARD_USER_LED_GPIO_PIN_MASK                                  (1U << 9U)   /*!< GPIO pin mask */
#define BOARD_USER_LED_PORT                                                GPIO1   /*!< PORT peripheral base pointer */
#define BOARD_USER_LED_PIN                                                    9U   /*!< PORT pin number */
#define BOARD_USER_LED_PIN_MASK                                       (1U << 9U)   /*!< PORT pin mask */

/* GPIO_AD_B0_10 (coord G13), JTAG_TDO/J21[13]/INT1_COMBO/ENET_INT/J22[6]/U32[11] */
/* Routed pin properties */
#define BOARD_INT1_COMBO_PERIPHERAL                                          ARM   /*!< Peripheral name */
#define BOARD_INT1_COMBO_SIGNAL                                    arm_trace_swo   /*!< Signal name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
