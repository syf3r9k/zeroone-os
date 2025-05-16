#include "os.h"
#include "display_st7789.h"

void os_run(void) {
    display_init();
    display_draw_text("Hello ZeroOne MC-01!", 10, 10);
    while (1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
