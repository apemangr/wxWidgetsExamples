cmake_minimum_required(VERSION 3.14)

project(Likan)

find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

add_compile_options(-DwxUSE_DPI_AWARE_MANIFEST=2)
#set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SRC_FILES
    main.cpp
    main.h
    simple.cpp
    simple.h
   )

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
