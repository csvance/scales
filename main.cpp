#include <iostream>

#include "public_include/MusicalScales.h"

using namespace MusicalScales;
using namespace std;

int main() {

    MajorScale majorScale(MusicalNote::rootNotes::C);

    Guitar guitar = Guitar();
    guitar.setScale(majorScale);

    GuitarRendererText renderer = GuitarRendererText(guitar);
    //renderer.render(true);

    Piano piano = Piano(5);
    piano.setScale(majorScale);

    MusicalInstrumentRendererText pianoRender = MusicalInstrumentRendererText(piano);

    pianoRender.render(true);

    return 0;
}