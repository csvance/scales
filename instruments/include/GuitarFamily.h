//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_GUITAR_H
#define GUITAR_SCALES_GUITAR_H

#include <vector>

#include "../../include/MusicalInstrument.h"
#include "InstrumentString.h"

namespace MusicalScales {

    class GuitarFamily : public MusicalInstrument {
    public:

        int numFrets;
        std::vector<InstrumentString> strings;

        using MusicalInstrument::setScale;

    protected:
        void buildNotes();
    };

}

#endif //GUITAR_SCALES_GUITAR_H
