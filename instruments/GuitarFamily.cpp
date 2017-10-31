//
// Created by Carroll Vance on 10/17/17.
//

#include <vector>

#include "GuitarFamily.h"

namespace MusicalScales {

    void GuitarFamily::buildNotes() {

        //For each string : one note group
        for (auto &string : strings) {

            //Add a vector for the string
            noteGroups.emplace_back(std::vector<ToggleNote>());

            //For the root note and each fret on the string, add a note
            for (int fret = 0; fret <= numFrets; fret++) {

                int calculatedNote = string.noteIndex() + fret;

                noteGroups.back().emplace_back(ToggleNote(calculatedNote));
            }

        }

        buildIndex();


    }

}