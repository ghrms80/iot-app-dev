/**
 * Application entry point.
 */

#include "esp_log.h"
#include "nvs_flash.h"

#include "coding_style.h"

void app_main(void)
{
    // Initialize NVS
	esp_err_t ret = nvs_flash_init();
	if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND)
	{
		ESP_ERROR_CHECK(nvs_flash_erase());
		ret = nvs_flash_init();
	}
	ESP_ERROR_CHECK(ret);

	// Example call to coding_style function
	// coding_style_public(1, 2, 3); // 정상 실행
	coding_style_public(1, 2, 4); // 에러 발생
}

