//
// Created by Carroll Vance on 10/17/17.
//

#include "ToggleNote.h"

namespace MusicalScales {

    ToggleNote::ToggleNote(const MusicalNote& note) : MusicalNote(note) {
        active = false;
    }
}