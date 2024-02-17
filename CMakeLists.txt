cmake_minimum_required(VERSION 3.27)
project(w4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(w4
        acceleration.cpp
        acceleration.h
        angle.cpp
        angle.h
        ground.cpp
        ground.h
        position.cpp
        position.h
        simulator.cpp
        test.cpp
        test.h
        testAcceleration.h
        testAngle.h
        testPosition.h
        testVelocity.h
        uiDraw.cpp
        uiDraw.h
        uiInteract.cpp
        uiInteract.h
        unitTest.h
        velocity.cpp
        velocity.h)
