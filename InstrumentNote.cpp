//
// Created by Carroll Vance on 10/17/17.
//

#include "InstrumentNote.h"
#include "ToggleNote.h"

namespace MusicalScales {

    void InstrumentNote::mappedNoteSetActive(bool active) {
        for(auto mappedNotesIt = mappedNotes.begin();
            mappedNotesIt != mappedNotes.end();
            mappedNotesIt++) {

            (*mappedNotesIt)->active = active;
        }

    }

    void InstrumentNote::mappedNoteAdd(ToggleNote *note) {
        mappedNotes.push_back(note);
    }

}