/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
void clearAllClock(){
	  	 HAL_GPIO_WritePin(h0_GPIO_Port, h0_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h1_GPIO_Port, h1_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h2_GPIO_Port, h2_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h3_GPIO_Port, h3_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h4_GPIO_Port, h4_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h5_GPIO_Port, h5_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h6_GPIO_Port, h6_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h7_GPIO_Port, h7_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h8_GPIO_Port, h8_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h9_GPIO_Port, h9_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h10_GPIO_Port, h10_Pin, SET);
//	  	 HAL_Delay(2000);
	  	 HAL_GPIO_WritePin(h11_GPIO_Port, h11_Pin, SET);
//  	  	 HAL_Delay(2000);
}
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  // turn off all leds before switch them on


  int state = 1;
  int counter = 0;
  while (1)
  {
    /* USER CODE END WHILE */
	  	 if (state == 1){
	  		 switch(counter){
	  		 case 0: HAL_GPIO_WritePin(h0_GPIO_Port, h0_Pin, SET);
	  		 break;
	  		 case 1: HAL_GPIO_WritePin(h1_GPIO_Port, h1_Pin, SET);
	  		 break;
	  		 case 2: HAL_GPIO_WritePin(h2_GPIO_Port, h2_Pin, SET);
	  		 break;
	  		 case 3: HAL_GPIO_WritePin(h3_GPIO_Port, h3_Pin, SET);
	  		 break;
	  		 case 4: HAL_GPIO_WritePin(h4_GPIO_Port, h4_Pin, SET);
	  		 break;
	  		 case 5: HAL_GPIO_WritePin(h5_GPIO_Port, h5_Pin, SET);
	  		 break;
	  		 case 6: HAL_GPIO_WritePin(h6_GPIO_Port, h6_Pin, SET);
	  		 break;
	  		 case 7: HAL_GPIO_WritePin(h7_GPIO_Port, h7_Pin, SET);
	  		 break;
	  		 case 8: HAL_GPIO_WritePin(h8_GPIO_Port, h8_Pin, SET);
	  		 break;
	  		 case 9: HAL_GPIO_WritePin(h9_GPIO_Port, h9_Pin, SET);
	  		 break;
	  		 case 10: HAL_GPIO_WritePin(h10_GPIO_Port, h10_Pin, SET);
	  		 break;
	  		 case 11: HAL_GPIO_WritePin(h11_GPIO_Port, h11_Pin, SET);
	  		 break;
	  		 default: break;
	  		 }
	  		 counter +=1;
	  		 if (counter >= 12){
	  			 counter = 0 ;
	  			 state = 0;
	  		 }
	  	 }
	  	 else if (state ==0 ){
	  		 switch(counter){
	  		 case 0: HAL_GPIO_WritePin(h0_GPIO_Port, h0_Pin, RESET);
	  		 break;
	  		 case 1: HAL_GPIO_WritePin(h1_GPIO_Port, h1_Pin, RESET);
	  		 break;
	  		 case 2: HAL_GPIO_WritePin(h2_GPIO_Port, h2_Pin, RESET);
	  		 break;
	  		 case 3: HAL_GPIO_WritePin(h3_GPIO_Port, h3_Pin, RESET);
	  		 break;
	  		 case 4: HAL_GPIO_WritePin(h4_GPIO_Port, h4_Pin, RESET);
	  		 break;
	  		 case 5: HAL_GPIO_WritePin(h5_GPIO_Port, h5_Pin, RESET);
	  		 break;
	  		 case 6: HAL_GPIO_WritePin(h6_GPIO_Port, h6_Pin, RESET);
	  		 break;
	  		 case 7: HAL_GPIO_WritePin(h7_GPIO_Port, h7_Pin, RESET);
	  		 break;
	  		 case 8: HAL_GPIO_WritePin(h8_GPIO_Port, h8_Pin, RESET);
	  		 break;
	  		 case 9: HAL_GPIO_WritePin(h9_GPIO_Port, h9_Pin, RESET);
	  		 break;
	  		 case 10: HAL_GPIO_WritePin(h10_GPIO_Port, h10_Pin, RESET);
	  		 break;
	  		 case 11: HAL_GPIO_WritePin(h11_GPIO_Port, h11_Pin, RESET);
	  		 break;
	  		 default : break;
	  		 }
	  		 counter +=1;
	  		 if (counter >= 12){
	  			 counter = 0 ;
	  			 state = 1;
	  		 }
	  	 }

	  	 HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, h0_Pin|h1_Pin|h2_Pin|h3_Pin
                          |h4_Pin|h5_Pin|h6_Pin|h7_Pin
                          |h8_Pin|h9_Pin|h10_Pin|h11_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : h0_Pin h1_Pin h2_Pin h3_Pin
                           h4_Pin h5_Pin h6_Pin h7_Pin
                           h8_Pin h9_Pin h10_Pin h11_Pin */
  GPIO_InitStruct.Pin = h0_Pin|h1_Pin|h2_Pin|h3_Pin
                          |h4_Pin|h5_Pin|h6_Pin|h7_Pin
                          |h8_Pin|h9_Pin|h10_Pin|h11_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
