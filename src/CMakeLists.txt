cmake_minimum_required(VERSION 3.23)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(main)

find_package(Vulkan REQUIRED)

target_sources(main
    PRIVATE
        main.cpp
        App.cpp
    PUBLIC
        FILE_SET HEADERS
        FILES
            App.h
)


target_link_libraries(main
    PRIVATE
        glfw
        glm::glm
        Vulkan::Vulkan
        )
