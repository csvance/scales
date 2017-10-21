#include <iostream>

#include "MusicalNote.h"
#include "MusicalScale.h"
#include "scales/Major.h"
#include "instruments/Guitar.h"
#include "instruments/Piano.h"
#include "MusicalInstrumentRendererText.h"
#include "renderers/GuitarRendererText.h"

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