cmake_minimum_required(VERSION 3.30.4)
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

# Options to build specific apps
option(bankAccountApp "Build the Bank account Application" OFF)

# Conditional inclusion based on selected app
if(bankAccountApp)
    add_subdirectory(cppApps/bankAccountApp)
    add_executable(BankAccountApp main/main.cpp)
    target_include_directories(BankAccountApp  PRIVATE cppApps/bankAccountApp/include cppApps/bankAccountApp/interface/include)
    target_compile_definitions(BankAccountApp PRIVATE ${APP_FLAG})
    target_link_libraries(BankAccountApp  bankAccountApp)

endif()

