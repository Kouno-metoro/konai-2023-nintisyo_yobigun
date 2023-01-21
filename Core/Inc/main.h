/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define STM32_LED_Pin GPIO_PIN_15
#define STM32_LED_GPIO_Port GPIOC
#define DIR0_Pin GPIO_PIN_0
#define DIR0_GPIO_Port GPIOC
#define DIR1_Pin GPIO_PIN_1
#define DIR1_GPIO_Port GPIOC
#define DIR2_Pin GPIO_PIN_2
#define DIR2_GPIO_Port GPIOC
#define DIR3_Pin GPIO_PIN_3
#define DIR3_GPIO_Port GPIOC
#define PWM0_Pin GPIO_PIN_0
#define PWM0_GPIO_Port GPIOA
#define PWM1_Pin GPIO_PIN_1
#define PWM1_GPIO_Port GPIOA
#define PWM2_Pin GPIO_PIN_2
#define PWM2_GPIO_Port GPIOA
#define PWM3_Pin GPIO_PIN_3
#define PWM3_GPIO_Port GPIOA
#define ENC1_CH1_Pin GPIO_PIN_5
#define ENC1_CH1_GPIO_Port GPIOA
#define ENC2_CH1_Pin GPIO_PIN_6
#define ENC2_CH1_GPIO_Port GPIOA
#define ENC2_CH2_Pin GPIO_PIN_7
#define ENC2_CH2_GPIO_Port GPIOA
#define Relay0_Pin GPIO_PIN_4
#define Relay0_GPIO_Port GPIOC
#define Relay1_Pin GPIO_PIN_5
#define Relay1_GPIO_Port GPIOC
#define ENC0_CH1_Pin GPIO_PIN_8
#define ENC0_CH1_GPIO_Port GPIOA
#define ENC0_CH2_Pin GPIO_PIN_9
#define ENC0_CH2_GPIO_Port GPIOA
#define RE_Pin GPIO_PIN_4
#define RE_GPIO_Port GPIOB
#define DE_Pin GPIO_PIN_5
#define DE_GPIO_Port GPIOB
#define ENC3_CH1_Pin GPIO_PIN_6
#define ENC3_CH1_GPIO_Port GPIOB
#define ENC3_CH2_Pin GPIO_PIN_7
#define ENC3_CH2_GPIO_Port GPIOB
#define ENC1_CH2_Pin GPIO_PIN_9
#define ENC1_CH2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
