cmake_minimum_required(VERSION 3.16)

project(perinta_esimerkki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(perinta_esimerkki main.cpp
    father.h father.cpp
    son.h son.cpp)

include(GNUInstallDirs)
install(TARGETS perinta_esimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
