//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_GUITAR_H
#define GUITAR_SCALES_GUITAR_H

#include <vector>

#include "../../include/MusicalInstrument.h"
#include "InstrumentString.h"

namespace MusicalScales {

    class Guitar : public MusicalInstrument {
    public:

        Guitar();
        Guitar(int frets);
        Guitar(int frets, std::vector<InstrumentString> &instrumentStrings);

        int numFrets;
        std::vector<InstrumentString> strings;

        using MusicalInstrument::setScale;

    private:
        void buildNotes();
    };

}

#endif //GUITAR_SCALES_GUITAR_H
