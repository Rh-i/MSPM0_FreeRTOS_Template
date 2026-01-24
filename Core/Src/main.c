#include "ti_msp_dl_config.h"

#include "FreeRTOS.h"
#include "task.h"
#include "api_main.h"

int main()
{
  SYSCFG_DL_init();

  TaskHandle_t printLogTask_handle;
  TaskHandle_t blinkTask_handle;

  xTaskCreate(printLogTask, "printLogTask", 0x80, NULL, configMAX_PRIORITIES - 1,
              &printLogTask_handle);
  xTaskCreate(blinkTask, "blinkTask", 0x80, NULL, configMAX_PRIORITIES - 1, &blinkTask_handle);

  vTaskStartScheduler();
}
