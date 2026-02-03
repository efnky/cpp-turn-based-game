cmake_minimum_required(VERSION 4.1)
project(turn_based_game)

set(CMAKE_CXX_STANDARD 20)

add_executable(turn_based_game main.cpp
        Player.h Player.cpp
        Enemy.cpp Enemy.h
        Character.cpp Character.h)
