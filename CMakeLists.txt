cmake_minimum_required(VERSION 3.13)
project(CppCourse)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/output)

# Options to build specific apps
option(bookStorageApp "Build the Book Storage Application" OFF)

# Conditional inclusion based on selected app
if(bookStorageApp)
    add_subdirectory(cppApps/bookStorageApp)
    add_executable(BookStorageApp main/main.cpp)
    target_include_directories(BookStorageApp  PRIVATE cppApps/bookStorageApp/include cppApps/bookStorageApp/interface/include)
    target_compile_definitions(BookStorageApp PRIVATE ${APP_FLAG})
    target_link_libraries(BookStorageApp  bookStorageApp)

endif()
