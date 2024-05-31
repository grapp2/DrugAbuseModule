#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "esp_log.h"
#include "include/hal_uart.h"
#include "include/app_task.h"

QueueHandle_t uart_queue;
QueueHandle_t recieved_shot_queue;

static void uart_task(void *args){
    while(1){
        
        
    }
}

void app_main(void)
{
    int a = add(1, 2);
    ESP_LOGI("main", "a = %d", a);
    init_uart();
    xTaskCreate(uart_task, "uart_task", 2048, NULL, 10, NULL);
}