cmake_minimum_required(VERSION 3.30)
include(mspm0g350x_base.cmake)

project(MSPM0_FreeRTOS_Template C CXX ASM)

file(GLOB FREERTOS_C_SOURCES "./FreeRTOS/*.c")
file(GLOB FREERTOS_MEMMANG_C_SOURCES "./FreeRTOS/portable/MemMang/heap_4.c")
file(GLOB_RECURSE FREERTOS_PORTABLE_C_SOURCES "./FreeRTOS/portable/GCC/ARM_CM0/*.c")

# 当源文件变化时强制重新生成，包含所有的.c .cpp
file(GLOB_RECURSE USER_SOURCES 
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    CONFIGURE_DEPENDS
    User/App/*.c
    User/App/*.cpp
    User/Bsp/*.c
    User/Bsp/*.cpp
    User/Drv/*.c
    User/Drv/*.cpp
    User/Mid/*.c
    User/Mid/*.cpp
    User/Alg/*.c
    User/Alg/*.cpp
    Main/*.c
)

add_executable(${CMAKE_PROJECT_NAME}.elf
    ${SYSCONFIG_SOURCES}
    ${MSPM0_SDK_SOURCES}
    ${MSPM0_STARTUP}
    ${FREERTOS_C_SOURCES}
    ${FREERTOS_PORTABLE_C_SOURCES}
    ${FREERTOS_MEMMANG_C_SOURCES}
    ${USER_SOURCES}

)

include_directories(
    ./FreeRTOS/include
    ./FreeRTOS/portable/GCC/ARM_CM0/
    ./Main
    ./User/App 
    ./User/Bsp 
    ./User/Drv 
    ./User/Mid 
    ./User/Alg
)
