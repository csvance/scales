#include <iostream>

#include "public_include/MusicalScales.h"

using namespace MusicalScales;

int main() {

    ChromaticScale majorScale(MusicalNote::rootNotes::C);

    BassGuitar guitar = BassGuitar();
    guitar.setScale(majorScale);

    GuitarRendererText renderer = GuitarRendererText(guitar);
    renderer.render(true);

    Piano piano = Piano();
    piano.setScale(majorScale);

    PianoRendererText pianoRender = PianoRendererText(piano);
    pianoRender.render(true);

    return 0;
}