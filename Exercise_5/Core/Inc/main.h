/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Red1_Pin GPIO_PIN_1
#define Red1_GPIO_Port GPIOA
#define Yellow1_Pin GPIO_PIN_2
#define Yellow1_GPIO_Port GPIOA
#define Green1_Pin GPIO_PIN_3
#define Green1_GPIO_Port GPIOA
#define Red2_Pin GPIO_PIN_4
#define Red2_GPIO_Port GPIOA
#define Yellow2_Pin GPIO_PIN_5
#define Yellow2_GPIO_Port GPIOA
#define Green2_Pin GPIO_PIN_6
#define Green2_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_0
#define a_GPIO_Port GPIOB
#define b_Pin GPIO_PIN_1
#define b_GPIO_Port GPIOB
#define c_Pin GPIO_PIN_2
#define c_GPIO_Port GPIOB
#define d1_Pin GPIO_PIN_10
#define d1_GPIO_Port GPIOB
#define e1_Pin GPIO_PIN_11
#define e1_GPIO_Port GPIOB
#define f1_Pin GPIO_PIN_12
#define f1_GPIO_Port GPIOB
#define g1_Pin GPIO_PIN_13
#define g1_GPIO_Port GPIOB
#define d_Pin GPIO_PIN_3
#define d_GPIO_Port GPIOB
#define e_Pin GPIO_PIN_4
#define e_GPIO_Port GPIOB
#define f_Pin GPIO_PIN_5
#define f_GPIO_Port GPIOB
#define g_Pin GPIO_PIN_6
#define g_GPIO_Port GPIOB
#define a1_Pin GPIO_PIN_7
#define a1_GPIO_Port GPIOB
#define b1_Pin GPIO_PIN_8
#define b1_GPIO_Port GPIOB
#define c1_Pin GPIO_PIN_9
#define c1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
