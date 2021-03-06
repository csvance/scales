//
// Created by Carroll Vance on 10/17/17.
//

#include "include/ToggleNote.h"

namespace MusicalScales {

    ToggleNote::ToggleNote(const MusicalNote &note) : MusicalNote(note) {
        active = false;
    }

    ToggleNote::ToggleNote(int noteIndex) : MusicalNote(noteIndex) {}
}