//
// Created by Carroll Vance on 10/17/17.
//

#include "ToggleNote.h"

namespace MusicalScales {

    ToggleNote::ToggleNote(MusicalNote note) {
        rootNote = note.rootNote;
        octave = note.octave;
        active = false;
    }
}