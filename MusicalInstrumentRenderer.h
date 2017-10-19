//
// Created by Carroll Vance on 10/19/17.
//

#ifndef GUITAR_SCALES_MUSICALINSTRUMENTRENDERER_H
#define GUITAR_SCALES_MUSICALINSTRUMENTRENDERER_H

#include "MusicalScale.h"
#include "MusicalInstrument.h"

namespace MusicalScales {

    class MusicalInstrumentRenderer {
    public:
        MusicalInstrumentRenderer(MusicalInstrument inst);
        virtual void render(bool activeOnly);
    protected:
        MusicalInstrument instrument;
    };

}

#endif //GUITAR_SCALES_MUSICALINSTRUMENTRENDERER_H
