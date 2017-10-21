#include <iostream>

#include "MusicalNote.h"
#include "MusicalScale.h"
#include "scales/Major.h"
#include "instruments/Guitar.h"
#include "MusicalInstrumentRendererText.h"
#include "renderers/GuitarRendererText.h"

using namespace MusicalScales;
using namespace std;

int main() {

    MajorScale majorScale(MusicalNote::rootNotes::C);

    for(int i=0; i<majorScale.size(); i++)
        cout << majorScale.getNote(i).toString() << endl;

    Guitar guitar = Guitar();
    guitar.setScale(majorScale);

    GuitarRendererText renderer = GuitarRendererText(guitar);
    renderer.render(true);

    return 0;
}