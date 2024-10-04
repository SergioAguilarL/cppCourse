@echo off
echo Compiling the project...

REM Define paths to source files
set APP_SOURCE=cppApps\applications\source\*.cpp
set INTERFACE_SOURCE=cppApps\interfaces\source\*.cpp 
set MAIN_SOURCE=main\main.cpp

REM Define include paths
set INCLUDE_PATHS=-IcppApps\applications\include -IcppApps\interfaces\include

REM Output executable
set OUTPUT=app.exe

REM Compile the files and generate the executable
g++ %INCLUDE_PATHS% %APP_SOURCE% %INTERFACE_SOURCE% %MAIN_SOURCE% -o %OUTPUT%

if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b %errorlevel%
)

echo Compilation successful! 

