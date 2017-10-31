//
// Created by Carroll Vance on 10/17/17.
//

#include "InstrumentNote.h"

namespace MusicalScales {

    void InstrumentNote::mappedNoteSetActive(bool active) {
        for (auto &mappedNote : mappedNotes)
            mappedNote->active = active;


    }

    void InstrumentNote::mappedNoteAdd(ToggleNote *note) {
        mappedNotes.push_back(note);
    }

}