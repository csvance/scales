//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_TOGGLENOTE_H
#define GUITAR_SCALES_TOGGLENOTE_H

#include "MusicalNote.h"

namespace MusicalScales {

    class ToggleNote : public MusicalNote {
    public:
        using MusicalNote::MusicalNote;

        explicit ToggleNote(const MusicalNote &note);

        explicit ToggleNote(int noteIndex);

        bool active;
    };

}

#endif //GUITAR_SCALES_TOGGLENOTE_H
