idf_component_register(SRCS "main.c"
                        REQUIRES esp32-wifi-manager
                        INCLUDE_DIRS ".")
spiffs_create_partition_image(storage ../spiffs FLASH_IN_PROJECT)