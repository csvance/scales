//
// Created by Carroll Vance on 10/21/17.
//

#include "GuitarFamily.h"
#include "Guitar.h"

namespace MusicalScales {

    Guitar::Guitar() : GuitarFamily() {
        numFrets = 22;

        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::E, 2));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::A, 2));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::D, 3));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::G, 3));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::B, 3));
        strings.emplace_back(MusicalNote(MusicalNote::rootNotes::E, 4));

        buildNotes();
    }

    Guitar::Guitar(int frets) : GuitarFamily() {
        numFrets = frets;

        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 2)));
        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::A, 2)));
        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::D, 3)));
        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::G, 3)));
        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::B, 3)));
        strings.emplace_back(InstrumentString(MusicalNote(MusicalNote::rootNotes::E, 4)));

        buildNotes();
    }

    Guitar::Guitar(int frets, std::vector<InstrumentString> &instrumentStrings) : GuitarFamily() {
        numFrets = frets;
        strings = instrumentStrings;

        buildNotes();
    }

}