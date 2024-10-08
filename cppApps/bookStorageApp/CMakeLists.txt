cmake_minimum_required(VERSION 3.30.4)
project(bookStorageApp)

# Include directories for headers
include_directories(include interface/include)

# Source files
set(SOURCES
    source/bookStorageApp.cpp
    interface/source/bookClass.cpp
)

# Create a static library
add_library(bookStorageApp STATIC ${SOURCES})

# Specify where to place compiled files
set_target_properties(bookStorageApp PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output"
)
