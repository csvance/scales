//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MUSICALNOTE_H
#define GUITAR_SCALES_MUSICALNOTE_H

#include <string>

namespace MusicalScales {

    class MusicalNote {
    public:
        enum class rootNotes {
            C = 0,
            CSharp = 1,
            D = 2,
            DSharp = 3,
            E = 4,
            F = 5,
            FSharp = 6,
            G = 7,
            GSharp = 8,
            A = 9,
            ASharp = 10,
            B = 11
        };

        rootNotes rootNote;
        int octave;

        MusicalNote();

        explicit MusicalNote(int noteIndex);

        explicit MusicalNote(rootNotes note);

        MusicalNote(rootNotes note, int octaveNum);

        MusicalNote(const MusicalNote &note);

        int noteIndex();

        std::string toString();

        std::string key();

        static std::string rootToString(rootNotes note);

    };

}

#endif //GUITAR_SCALES_MUSICALNOTE_H
