cmake_minimum_required(VERSION 3.23)
project(apexbot_master)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(apexbot_master
        src/aimassist.cpp
        src/aimassist.hpp
        src/apexbot.cpp
        src/cheats.cpp
        src/cheats.hpp
        src/config.cpp
        src/config.hpp
        src/context.cpp
        src/context.hpp
        src/data.hpp
        src/entities.cpp
        src/entities.hpp
        src/hash.hpp
        src/highlight.cpp
        src/highlight.hpp
        src/items.cpp
        src/items.hpp
        src/pid.hpp
        src/process.cpp
        src/process.hpp
        src/scripts.cpp
        src/scripts.hpp
        src/sdk.hpp
        src/solver.cpp
        src/solver.hpp
        src/state.cpp
        src/state.hpp
        src/stdafx.cpp)
