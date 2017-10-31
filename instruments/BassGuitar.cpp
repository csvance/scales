//
// Created by Carroll Vance on 10/21/17.
//

#include "BassGuitar.h"

namespace MusicalScales {
    BassGuitar::BassGuitar() : GuitarFamily() {
        numFrets = 22;

        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::E, 1));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::A, 1));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::D, 2));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::G, 2));


        buildNotes();
    }

    BassGuitar::BassGuitar(int frets) : GuitarFamily() {
        numFrets = frets;

        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::E, 1));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::A, 1));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::D, 2));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::G, 2));

        buildNotes();
    }

    BassGuitar::BassGuitar(int frets, std::vector<InstrumentString> &instrumentStrings) : GuitarFamily() {
        numFrets = frets;
        strings = instrumentStrings;

        buildNotes();
    }
}