cmake_minimum_required(VERSION 3.8)
project(guitar_scales)

set(CMAKE_CXX_STANDARD 11)

include_directories(include scales/include renderers/include instruments/include)
set(SOURCE_FILES main.cpp MusicalScale.cpp include/MusicalScale.h MusicalNote.cpp include/MusicalNote.h scales/Major.cpp scales/include/Major.h scales/Minor.cpp scales/include/Minor.h scales/DominantDiminished.cpp scales/include/DominantDiminished.h scales/FullyDiminished.cpp scales/include/FullyDiminished.h MusicalInstrument.cpp include/MusicalInstrument.h InstrumentNote.cpp include/InstrumentNote.h ToggleNote.cpp include/ToggleNote.h instruments/Guitar.cpp instruments/include/Guitar.h instruments/InstrumentString.cpp instruments/include/InstrumentString.h MusicalInstrumentRenderer.cpp include/MusicalInstrumentRenderer.h MusicalInstrumentRendererText.cpp include/MusicalInstrumentRendererText.h renderers/GuitarRendererText.cpp renderers/include/GuitarRendererText.h instruments/Piano.cpp instruments/include/Piano.h public_include/include/Scales.h public_include/include/Instruments.h public_include/include/Renderers.h public_include/MusicalScales.h renderers/PianoRendererText.cpp renderers/include/PianoRendererText.h)
add_executable(guitar_scales ${SOURCE_FILES})