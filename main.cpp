#include <iostream>

#include "MusicalNote.h"
#include "MusicalScale.h"
#include "scales/Major.h"

using namespace MusicalScales;
using namespace std;

int main() {

    MajorScale majorScale(MusicalNote::rootNotes::CSharp);

    for(int i=0; i<majorScale.size(); i++)
        cout << majorScale.getNote(i).toString() << endl;

    return 0;
}