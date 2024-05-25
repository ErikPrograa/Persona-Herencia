cmake_minimum_required(VERSION 3.28)
project(Persona_Herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(Persona_Herencia main.cpp
        Persona.cpp
        Persona.h
        Albanil.cpp
        Albanil.h
        MaestroAlbanil.cpp
        MaestroAlbanil.h
        Arquitecto.cpp
        Arquitecto.h)
