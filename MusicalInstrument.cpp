//
// Created by Carroll Vance on 10/17/17.
//

#include <vector>
#include <map>
#include <string>

#include "MusicalInstrument.h"
#include "ToggleNote.h"

namespace MusicalScales {

    MusicalInstrument::MusicalInstrument() {}

    void MusicalInstrument::buildIndex() {

        noteIndex = std::map<std::string,InstrumentNote>();

        //Loop through groups of instrument notes (ie strings)
        for (std::vector<std::vector<ToggleNote>>::iterator noteGroupsIterator = noteGroups.begin();
             noteGroupsIterator != noteGroups.end();
             noteGroupsIterator++) {

            //Loop through individual notes in the group
            for (std::vector<ToggleNote>::iterator notesIterator = (*noteGroupsIterator).begin();
                 notesIterator != (*noteGroupsIterator).end();
                 notesIterator++) {

                std::string noteKey = (*notesIterator).key();
                std::map<std::string, InstrumentNote>::iterator instrumentNoteIt = noteIndex.find(noteKey);

                if (instrumentNoteIt == noteIndex.end()) {

                    InstrumentNote newNote = InstrumentNote(*notesIterator);
                    newNote.mappedNoteAdd(&(*notesIterator));

                    noteIndex[noteKey] = newNote;
                } else {
                    noteIndex[noteKey].mappedNoteAdd(&(*notesIterator));
                }


            }

        }
    }

}
