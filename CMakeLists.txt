cmake_minimum_required(VERSION 3.8)
project(guitar_scales)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp MusicalScale.cpp MusicalScale.h MusicalNote.cpp MusicalNote.h scales/Major.cpp scales/Major.h scales/Minor.cpp scales/Minor.h scales/DominantDiminished.cpp scales/DominantDiminished.h scales/FullyDiminished.cpp scales/FullyDiminished.h MusicalInstrument.cpp MusicalInstrument.h InstrumentNote.cpp InstrumentNote.h ToggleNote.cpp ToggleNote.h instruments/Guitar.cpp instruments/Guitar.h instruments/InstrumentString.cpp instruments/InstrumentString.h MusicalInstrumentRenderer.cpp MusicalInstrumentRenderer.h MusicalInstrumentRendererText.cpp MusicalInstrumentRendererText.h renderers/GuitarRendererText.cpp renderers/GuitarRendererText.h instruments/Piano.cpp instruments/Piano.h)
add_executable(guitar_scales ${SOURCE_FILES})