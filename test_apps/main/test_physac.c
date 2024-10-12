#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "physac.h"
#include "unity.h"

TEST_CASE("test init", "[physac][init]")
{
    InitPhysics();
    ClosePhysics();
}

void app_main(void)
{
    unity_run_menu();
}
