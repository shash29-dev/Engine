cmake_minimum_required(VERSION 3.0.0)
project(sandbox VERSION 0.1.0)
include(GNUInstallDirs)

# if(MSVC)
#     set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
#     set(BUILD_SHARED_LIBS TRUE)
#     set(CMAKE_DEBUG_POSTFIX "d")
# endif()
# set(CMAKE_POSITION_INDEPENDENT_CODE ON)
# set(CMAKE_C_EXTENSIONS OFF)
# set(CMAKE_CXX_EXTENSIONS OFF)


set(ALPHA_DIR "D:\\PhD\\Research\\ProjectCpp\\TutOpenGL\\Engine\\Alpha")

include_directories(alpha 
    PRIVATE ${ALPHA_DIR}\\src
    PRIVATE ${CMAKE_SOURCE_DIR}\\Alpha\\vendor\\spdlog\\include
)

# add_library(alpha SHARED IMPORTED)
# set_property(TARGET alpha PROPERTY IMPORTED_LOCATION ${ALPHA_DIR}\\build\\libalpha.dll)
# set_property(TARGET alpha PROPERTY IMPORTED_IMPLIB ${ALPHA_DIR}\\build\\libalpha.dll.a)

# include(D:\\PhD\\Research\\ProjectCpp\\TutOpenGL\\EngineTut\\Adder\\build\\CMakeFiles\\Export\\lib\\adder\\adder-targets.cmake)  # if installed

add_executable(sandbox 
    src/SandboxApp.cpp
)
target_link_libraries(sandbox alpha)


message(STATUS ${CMAKE_BINARY_DIR})
add_custom_command(TARGET sandbox POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_BINARY_DIR}\\Alpha\\libalpha.dll"
    $<TARGET_FILE_DIR:sandbox>    
    
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    "${CMAKE_BINARY_DIR}\\Alpha\\glfw3.dll"
    $<TARGET_FILE_DIR:sandbox>    
)
# configure_file(${ALPHA_DIR}\\build\\libalpha.dll ${CMAKE_BINARY_DIR}\\libalpha.dll COPYONLY)

# file(COPY ${ADDER_DIR}\\libadder.dll DESTINATION ${EXECUTABLE_OUTPUT_PATH})