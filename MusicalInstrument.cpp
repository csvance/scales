//
// Created by Carroll Vance on 10/17/17.
//

#include <vector>
#include <map>
#include <string>
#include <sstream>

#include "MusicalInstrument.h"
#include "ToggleNote.h"

namespace MusicalScales {

    MusicalInstrument::MusicalInstrument() {}

    void MusicalInstrument::resetScale(){
        for(auto noteGroupIt = noteGroups.begin();
                noteGroupIt != noteGroups.end();
                noteGroupIt++){
            for(auto noteIt = (*noteGroupIt).begin();
                    noteIt != (*noteGroupIt).end();
                    noteIt++)
                (*noteIt).active = false;
        }
    }

    void MusicalInstrument::setScale(MusicalScale scale) {

        resetScale();

        for(auto scaleNoteIt = scale.notes.begin();
                scaleNoteIt != scale.notes.end();
                scaleNoteIt++){

            noteIndex[(*scaleNoteIt).key()].mappedNoteSetActive(true);

        }

    }

    void MusicalInstrument::buildIndex() {

        noteIndex = std::map<std::string,InstrumentNote>();

        //Loop through groups of instrument notes (ie strings)
        for (auto noteGroupsIterator = noteGroups.begin();
             noteGroupsIterator != noteGroups.end();
             noteGroupsIterator++) {

            //Loop through individual notes in the group
            for (auto notesIterator = (*noteGroupsIterator).begin();
                 notesIterator != (*noteGroupsIterator).end();
                 notesIterator++) {

                std::string noteKey = (*notesIterator).key();
                auto instrumentNoteIt = noteIndex.find(noteKey);

                if (instrumentNoteIt == noteIndex.end()) {

                    InstrumentNote newNote = InstrumentNote((*notesIterator).noteIndex());
                    newNote.mappedNoteAdd(&(*notesIterator));

                    noteIndex[noteKey] = newNote;
                } else {
                    noteIndex[noteKey].mappedNoteAdd(&(*notesIterator));
                }

            }

        }
    }

}
