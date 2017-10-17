//
// Created by Carroll Vance on 10/17/17.
//

#include "InstrumentNote.h"
#include "ToggleNote.h"

namespace MusicalScales {

    InstrumentNote::InstrumentNote(MusicalNote note) {
        rootNote = note.rootNote;
        octave = note.octave;
    }

    InstrumentNote::InstrumentNote(ToggleNote note) {
        rootNote = note.rootNote;
        octave = note.octave;
    }

    void InstrumentNote::mappedNoteSetActive(bool active) {
        for(std::vector<ToggleNote*>::iterator mappedNotesIt = mappedNotes.begin();
            mappedNotesIt != mappedNotes.end();
            mappedNotesIt++) {

            (*mappedNotesIt)->active = active;
        }

    }

    void InstrumentNote::mappedNoteAdd(ToggleNote *note) {
        mappedNotes.push_back(note);
    }

}