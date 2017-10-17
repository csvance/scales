#include <iostream>

#include "MusicalScale.h"
#include "MajorScale.h"

using namespace std;

int main() {

    MajorScale majorScale(MusicalNote::rootNotes::CSharp);

    for(int i=0; i<majorScale.size(); i++)
        cout << majorScale.getNote(i).toString() << endl;

    return 0;
}