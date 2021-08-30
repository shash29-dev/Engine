cmake_minimum_required(VERSION 3.0.0)
project(alpha VERSION 0.1.0)


include(GNUInstallDirs)
# SPDLOG_DIR=

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
    set(CMAKE_DEBUG_POSTFIX "d")
endif()
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_CXX_EXTENSIONS OFF)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)

file(GLOB_RECURSE SRC 
    ${CMAKE_SOURCE_DIR}/Alpha/src/*.h 
    ${CMAKE_SOURCE_DIR}/Alpha/src/*.cpp
)

include_directories(alpha 
    PRIVATE ${CMAKE_SOURCE_DIR}\\Alpha\\vendor\\spdlog\\include
    PRIVATE ${CMAKE_SOURCE_DIR}\\Alpha\\src
    PRIVATE ${CMAKE_SOURCE_DIR}\\Alpha\\platform
)
add_library(alpha SHARED 
    src/Alpha/Application.cpp
    src/Alpha/Log.cpp
    src/platform/windows/WindowsWindow.cpp
    src/Alpha/LayerStack.cpp
    src/Alpha/Layer.cpp
    src/Alpha/ImGui/ImGuiLayer.cpp
    src/platform/OpenGL/ImGuiOpenGLRenderer.cpp
    src/platform/OpenGL/ImGuiOpenGLRenderer.h
    # src/Alpha/Event/MouseEvent.h
    # src/Alpha/Event/Event.h
    # src/Alpha/Event/KeyEvent.h
    # src/Alpha/Event/ApplicationEvent.h
)
target_precompile_headers(alpha PRIVATE src/alpch.h)
target_link_libraries(alpha 
                    PRIVATE glfw
                    PRIVATE glad::glad
                    PRIVATE imgui::imgui
                    PRIVATE libimm32.a
                    )
target_compile_definitions(alpha 
                    PRIVATE "EXPORTING_Alpha"
                    PUBLIC GLFW_INCLUDE_NONE 
                    # PUBLIC IMGUI_DISABLE_WIN32_DEFAULT_IME_FUNCTIONS
                    )


