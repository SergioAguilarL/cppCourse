@echo off
set APP_NAME=%1
set BUILD_DIR=build

echo Select an application to build:
echo 1. Book Storage App
echo 2. Bank Account App
echo 3. Standar Template Library App
set /p choice="Enter the number of your choice: "

if "%choice%"=="1" (
    set APP_NAME=bookStorageApp
    set APP_FLAG=BOOK_STORAGE_APP
) else if "%choice%"=="2" (
    set APP_NAME=bankAccountApp
    set APP_FLAG=BANK_ACCNT_APP
) else if "%choice%"=="3" (
    set APP_NAME=STLApp
    set APP_FLAG=STL_APP
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
