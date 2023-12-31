

#include "unity.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "string.h"
#include "esp_log.h"
#include "sdkconfig.h"

void app_main(void)
{
    unity_run_menu();
}
