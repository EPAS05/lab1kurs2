cmake_minimum_required(VERSION 3.16)

project(labb1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(labb1 main.cpp
    array.h array.cpp
    number.h
    application.h application.cpp)

include(GNUInstallDirs)
install(TARGETS labb1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
