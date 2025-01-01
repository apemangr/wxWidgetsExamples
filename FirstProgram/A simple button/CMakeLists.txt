cmake_minimum_required(VERSION 3.14)
project(Button)

find_package(wxWidgets COMPONENTS core base REQUIRED)

include(${wxWidgets_USE_FILE})
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-DwxUSE_DPI_AWARE_MANIFEST=2)

set(SRC_FILES
    main.h
    main.cpp
    button.h
    button.cpp
    #    wx.rc
)

add_executable(${PROJECT_NAME} ${SRC_FILES})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
