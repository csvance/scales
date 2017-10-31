//
// Created by Carroll Vance on 10/12/17.
//

#include <string>
#include <sstream>

#include "include/MusicalNote.h"

namespace MusicalScales {

    MusicalNote::MusicalNote() {
        rootNote = rootNotes::C;
        octave = 0;
    }

    MusicalNote::MusicalNote(int noteIndex) {
        rootNote = static_cast<rootNotes>(noteIndex % 12);
        octave = noteIndex / 12;
    }

    MusicalNote::MusicalNote(rootNotes note) {
        rootNote = note;
        octave = 0;
    }

    MusicalNote::MusicalNote(rootNotes note, int octaveNum) {
        rootNote = note;
        octave = octaveNum;
    }

    MusicalNote::MusicalNote(const MusicalNote &note) {
        rootNote = note.rootNote;
        octave = note.octave;
    }

    std::string MusicalNote::toString() {
        std::stringstream noteString;

        noteString << MusicalNote::rootToString(rootNote) << octave;

        return noteString.str();
    }

    std::string MusicalNote::key() {
        return toString();
    }

    int MusicalNote::noteIndex() {
        return static_cast<int>(rootNote) + octave * 12;
    };

    std::string MusicalNote::rootToString(rootNotes note) {
        switch (note) {
            case MusicalNote::rootNotes::C:
                return "C";
            case MusicalNote::rootNotes::CSharp:
                return "C#";
            case MusicalNote::rootNotes::D:
                return "D";
            case MusicalNote::rootNotes::DSharp:
                return "D#";
            case MusicalNote::rootNotes::E:
                return "E";
            case MusicalNote::rootNotes::F:
                return "F";
            case MusicalNote::rootNotes::FSharp:
                return "F#";
            case MusicalNote::rootNotes::G:
                return "G";
            case MusicalNote::rootNotes::GSharp:
                return "G#";
            case MusicalNote::rootNotes::A:
                return "A";
            case MusicalNote::rootNotes::ASharp:
                return "A#";
            case MusicalNote::rootNotes::B:
                return "B";
        }
    }

}