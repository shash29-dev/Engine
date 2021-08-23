cmake_minimum_required(VERSION 3.0.0)
project(alpha VERSION 0.1.0)


include(GNUInstallDirs)


if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
    set(CMAKE_DEBUG_POSTFIX "d")
endif()
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)


add_library(alpha SHARED 
    src/Alpha/Application.cpp
)
target_compile_definitions(alpha PRIVATE "EXPORTING_Alpha")


