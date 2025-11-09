cmake_minimum_required(VERSION 3.23)

project(vulkan-template)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


find_package(Vulkan REQUIRED)

add_subdirectory(src)
add_subdirectory(randomLib)
add_subdirectory(lib/glfw-3.4)
add_subdirectory(lib/glm-1.0.1)
