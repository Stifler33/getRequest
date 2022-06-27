cmake_minimum_required(VERSION 3.14)

project(getRequest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(getRequest
  main.cpp
  getrequest.h
  getrequest.cpp
)
target_link_libraries(getRequest Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network)
