//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_GUITAR_H
#define GUITAR_SCALES_GUITAR_H

#include <vector>

#include "../MusicalInstrument.h"
#include "../MusicalScale.h"
#include "../MusicalNote.h"

#include "InstrumentString.h"

namespace MusicalScales {

    class Guitar : MusicalInstrument {
    public:

        Guitar();
        Guitar(int frets);
        Guitar(int frets, std::vector<InstrumentString> instrumentStrings);

        int numFrets;
        std::vector<InstrumentString> strings;

    private:
        void buildNotes();
    };

}

#endif //GUITAR_SCALES_GUITAR_H
