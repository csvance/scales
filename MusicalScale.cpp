//
// Created by Carroll Vance on 10/12/17.
//

#include "include/MusicalScale.h"

namespace MusicalScales {


    MusicalScale::MusicalScale(MusicalNote::rootNotes root) {
        rootNote = root;

    }

    void MusicalScale::build() {

        std::vector<MusicalNote>::iterator noteIt;

        //Build scale backwards starting in the last octave
        int noteIndex = static_cast<int>(rootNote);

        auto stepBack = steps.rbegin();

        //Iterate through steps
        for (; stepBack != steps.rend(); stepBack++) {

            noteIndex -= static_cast<int>(*stepBack);

            if (noteIndex < 0)
                break;

            noteIt = notes.begin();
            notes.insert(noteIt, MusicalNote(noteIndex));
        }

        //Reset note index back to root
        noteIndex = static_cast<int>(rootNote);

        //Insert root note
        noteIt = notes.end();
        notes.insert(noteIt, MusicalNote(noteIndex));

        //Build scale forwards until the nth octave
        do {

            //Iterate through steps
            auto stepForward = steps.begin();

            for (; stepForward != steps.end(); stepForward++) {
                noteIndex += static_cast<int>(*stepForward);

                noteIt = notes.end();
                notes.insert(noteIt, MusicalNote(noteIndex));

            }

        } while (noteIndex < OCTAVE_COUNT * OCTAVE_SIZE);

    }

    int MusicalScale::size() {
        return notes.size();
    }

    MusicalNote MusicalScale::getNote(int index) {
        return notes[index];
    }

}