//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_INSTRUMENTNOTE_H
#define GUITAR_SCALES_INSTRUMENTNOTE_H

#include <vector>

#include "MusicalNote.h"
#include "ToggleNote.h"

namespace MusicalScales {

    class InstrumentNote : public MusicalNote {
    public:
        using MusicalNote::MusicalNote;
        void mappedNoteSetActive(bool active);
        void mappedNoteAdd(ToggleNote* note);

    private:
        std::vector<ToggleNote*> mappedNotes;
    };

}

#endif //GUITAR_SCALES_INSTRUMENTNOTE_H
