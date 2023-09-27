cmake_minimum_required(VERSION 3.26.1 FATAL_ERROR)

set(ENGINE_PROJECT_NAME MatrixA3DCore)
set(ENGINE_PUBLIC_INCLUDES 
includes/MatrixA3DCore/Application.hpp
includes/MatrixA3DCore/Log.hpp
)
set(ENGINE_PRIVATE_SOURCES 
src/MatrixA3DCore/Application.cpp
)

add_library(${ENGINE_PROJECT_NAME} STATIC 
	${ENGINE_PUBLIC_INCLUDES}
	${ENGINE_PRIVATE_SOURCES}
)

target_include_directories (${ENGINE_PROJECT_NAME} PUBLIC includes)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)

add_subdirectory(../external/spdlog ${CMAKE_CURRENT_BINARY_DIR}/spdlog)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE spdlog)