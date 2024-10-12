
idf_component_register(INCLUDE_DIRS src
                       REQUIRES esp_timer)

idf_build_set_property(COMPILE_DEFINITIONS "-DPHYSAC_STANDALONE" APPEND)
idf_build_set_property(COMPILE_DEFINITIONS "-DPHYSAC_IMPLEMENTATION" APPEND)
idf_build_set_property(COMPILE_DEFINITIONS "-DPHYSAC_NO_THREADS" APPEND)
idf_build_set_property(COMPILE_DEFINITIONS "-DESP32_PLATFORM" APPEND)
