# This is the project CMakeLists.txt file for the test subproject
cmake_minimum_required(VERSION 3.16)

# Include the components directory of the main application:
#
set(EXTRA_COMPONENT_DIRS "../components")

# Set the components to include the tests for.
# This can be overriden from CMake cache:
# - when invoking CMake directly: cmake -D TEST_COMPONENTS="xxxxx" ..
# - when using idf.py: idf.py -T xxxxx build
#
# e.g. for espressif/button component:

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(eqdt_test)
idf_component_get_property(lib esp32-wifi-manager COMPONENT_LIB)
target_compile_options(${lib} PRIVATE -Wno-error=format)