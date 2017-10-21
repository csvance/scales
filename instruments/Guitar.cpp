//
// Created by Carroll Vance on 10/17/17.
//

#include <vector>

#include "include/Guitar.h"
#include "include/InstrumentString.h"

namespace MusicalScales {

    Guitar::Guitar() : MusicalInstrument() {
        numFrets = 22;

        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::A, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::D, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::G, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::B, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 4)));

        buildNotes();
    }

    Guitar::Guitar(int frets) : MusicalInstrument(){
        numFrets = frets;

        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::A, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::D, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::G, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::B, 3)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 4)));

        buildNotes();
    }

    Guitar::Guitar(int frets, std::vector<InstrumentString> &instrumentStrings) : MusicalInstrument(){
        numFrets = frets;
        strings = instrumentStrings;

        buildNotes();
    }


    void Guitar::buildNotes() {

        //For each string : one note group
        for (auto stringIt = strings.begin(); stringIt != strings.end(); stringIt++){

            //Add a vector for the string
            noteGroups.emplace_back(std::vector<ToggleNote>());

            //For the root note and each fret on the string, add a note
            for(int fret=0;fret<=numFrets;fret++){

                int calculatedNote = (*stringIt).noteIndex() + fret;

                noteGroups.back().emplace_back(ToggleNote(calculatedNote));
            }

        }

        buildIndex();


    }

}