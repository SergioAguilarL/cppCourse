@echo off
set APP_NAME=%1
set BUILD_DIR=build

echo Select an application to build:
echo 1. Book Storage App
set /p choice="Enter the number of your choice: "

if "%choice%" == "1" (
    set APP_NAME=bookStorageApp
    set APP_FLAG=BOOK_STORAGE_APP
) else (
    echo Invalid choice.
    exit /b 1
)

echo Cleaning previous build...
if exist %BUILD_DIR% rmdir /s /q %BUILD_DIR%
if exist output rmdir /s /q output

echo Building the project for %APP_NAME%...
mkdir %BUILD_DIR%
cd %BUILD_DIR%
cmake -G "MinGW Makefiles" .. -D%APP_NAME%=ON -DAPP_FLAG=%APP_FLAG%
cmake --build .

cd ..

echo Build finished. Executable is in output/.
