//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_TOGGLENOTE_H
#define GUITAR_SCALES_TOGGLENOTE_H

#include "MusicalScale.h"
#include "MusicalNote.h"

namespace MusicalScales {

    class ToggleNote : MusicalNote {
    public:
        ToggleNote(MusicalNote note);

        using MusicalNote::MusicalNote;
        using MusicalNote::toString;
        using MusicalNote::key;
        using MusicalNote::rootNote;
        using MusicalNote::octave;
        using MusicalNote::noteIndex;

        bool active;


    };

}

#endif //GUITAR_SCALES_TOGGLENOTE_H
