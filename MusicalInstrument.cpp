//
// Created by Carroll Vance on 10/17/17.
//

#include <vector>
#include <map>
#include <string>
#include <sstream>

#include "include/MusicalInstrument.h"

namespace MusicalScales {

    MusicalInstrument::MusicalInstrument() = default;

    void MusicalInstrument::resetScale() {
        for (auto &noteGroup : noteGroups)
            for (auto &noteIt : noteGroup)
                noteIt.active = false;
    }

    void MusicalInstrument::setScale(MusicalScale scale) {

        resetScale();

        for (auto &note : scale.notes)
            noteIndex[note.key()].mappedNoteSetActive(true);

    }

    void MusicalInstrument::buildIndex() {

        noteIndex = std::map<std::string, InstrumentNote>();

        //Loop through groups of instrument notes (ie strings)
        for (auto &noteGroup : noteGroups) {

            //Loop through individual notes in the group
            for (auto &notesIterator : noteGroup) {

                std::string noteKey = notesIterator.key();
                auto instrumentNoteIt = noteIndex.find(noteKey);

                if (instrumentNoteIt == noteIndex.end()) {

                    InstrumentNote newNote = InstrumentNote(notesIterator.noteIndex());
                    newNote.mappedNoteAdd(&notesIterator);

                    noteIndex[noteKey] = newNote;
                } else {
                    noteIndex[noteKey].mappedNoteAdd(&notesIterator);
                }

            }

        }
    }

}
