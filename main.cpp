#include <iostream>

#include "MusicalNote.h"
#include "MusicalScale.h"
#include "scales/Major.h"
#include "instruments/Guitar.h"
#include "MusicalInstrumentRendererText.h"

using namespace MusicalScales;
using namespace std;

int main() {

    MajorScale majorScale(MusicalNote::rootNotes::CSharp);

    for(int i=0; i<majorScale.size(); i++)
        cout << majorScale.getNote(i).toString() << endl;

    Guitar guitar = Guitar();
    guitar.setScale(majorScale);

    MusicalInstrumentRendererText renderer = MusicalInstrumentRendererText((MusicalInstrument)guitar);
    renderer.render(false);

    return 0;
}