//
// Created by Carroll Vance on 10/12/17.
//

#include "include/MusicalScale.h"

namespace MusicalScales {


    MusicalScale::MusicalScale(MusicalNote::rootNotes root) {
        rootNote = root;
        rootOctave = 0;
        noRepeat = false;
    }

    MusicalScale::MusicalScale(MusicalNote::rootNotes root,int octave) {
        rootNote = root;
        rootOctave = octave;
        noRepeat = false;
    }

    void MusicalScale::addSteps() {}

    void MusicalScale::build() {

        std::vector<MusicalNote>::iterator noteIt;

        //Build scale backwards starting at root note
        int noteIndex = static_cast<int>(rootNote) + (rootOctave*12);

        auto stepBack = stepsDescending.rbegin();

        //Iterate through stepsAscending
        for (; stepBack != stepsDescending.rend(); stepBack++) {

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

        //Build scale forwards from first step until the nth octave
        do {

            //Iterate through stepsAscending
            auto stepForward = stepsAscending.begin();

            for (; stepForward != stepsAscending.end(); stepForward++) {
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