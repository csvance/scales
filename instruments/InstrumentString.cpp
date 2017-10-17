//
// Created by Carroll Vance on 10/17/17.
//

#include "InstrumentString.h"

namespace MusicalScales{

    InstrumentString::InstrumentString(MusicalNote root) {
        rootNote = root;
    }

    int InstrumentString::noteIndex() {
        return rootNote.noteIndex();
    }

}