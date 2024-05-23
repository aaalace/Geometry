cmake_minimum_required(VERSION 3.27)
project(contest5_geometry)

set(CMAKE_CXX_STANDARD 17)

add_executable(contest5_geometry main.cpp
        src/point.cpp
        point.h
        src/vector.cpp
        vector.h
        src/segment.cpp
        segment.h
        src/line.cpp
        line.h
        src/ray.cpp
        ray.h
        src/polygon.cpp
        polygon.h
        src/circle.cpp
        circle.h
        ishape.h
)
