#include <iostream>

#include "public_include/MusicalScales.h"

using namespace MusicalScales;

int main() {

    MelodicMinorScale majorScale(MusicalNote::rootNotes::E, 2);

    BassGuitar guitar = BassGuitar();
    guitar.setScale(majorScale);

    GuitarRendererText renderer = GuitarRendererText(guitar);
    renderer.render(true);

    std::cout << std::endl;

    Piano piano = Piano(6);
    piano.setScale(majorScale);

    PianoRendererText pianoRender = PianoRendererText(piano);
    pianoRender.setOctaveStart(2);
    pianoRender.render(true);

    std::cout << std::endl;

    return 0;
}