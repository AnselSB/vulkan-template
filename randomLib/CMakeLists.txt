cmake_minimum_required(VERSION 3.23)

add_library(randomLib)

target_sources(randomLib
    PRIVATE
        randomLib.cpp
    PUBLIC
        FILE_SET HEADERS
        FILES
            randomLib.h
        )
