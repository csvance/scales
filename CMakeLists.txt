cmake_minimum_required(VERSION 3.8)
project(guitar_scales)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MusicalScale.cpp MusicalScale.h MusicalNote.cpp MusicalNote.h MajorScale.cpp MajorScale.h MinorScale.cpp MinorScale.h)
add_executable(guitar_scales ${SOURCE_FILES})