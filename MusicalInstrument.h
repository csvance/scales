//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_MUSICALINSTRUMENT_H
#define GUITAR_SCALES_MUSICALINSTRUMENT_H

#include <string>
#include <vector>
#include <map>

#include "MusicalScale.h"
#include "MusicalNote.h"
#include "InstrumentNote.h"
#include "ToggleNote.h"

namespace MusicalScales{

    class MusicalInstrument {
    public:
        MusicalInstrument();

        void setScale(MusicalScale scale);
        void resetScale();

        std::vector<std::vector<ToggleNote>> noteGroups;

    protected:
        void buildIndex();

    private:
        std::map<std::string,InstrumentNote> noteIndex;
    };

}

#endif //GUITAR_SCALES_MUSICALINSTRUMENT_H
