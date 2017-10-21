//
// Created by Carroll Vance on 10/21/17.
//

#include "BassGuitar.h"

namespace MusicalScales{
    BassGuitar::BassGuitar() : GuitarFamily() {
        numFrets = 22;

        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 1)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::A, 1)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::D, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::G, 2)));


        buildNotes();
    }

    BassGuitar::BassGuitar(int frets) : GuitarFamily(){
        numFrets = frets;

        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 1)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::A, 1)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::D, 2)));
        strings.push_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::G, 2)));

        buildNotes();
    }

    BassGuitar::BassGuitar(int frets, std::vector<InstrumentString> &instrumentStrings) : GuitarFamily(){
        numFrets = frets;
        strings = instrumentStrings;

        buildNotes();
    }
}