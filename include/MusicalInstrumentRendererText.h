//
// Created by Carroll Vance on 10/19/17.
//

#ifndef GUITAR_SCALES_MUSICALINSTRUMENTRENDERERTEXT_H
#define GUITAR_SCALES_MUSICALINSTRUMENTRENDERERTEXT_H

#include "MusicalInstrumentRenderer.h"
#include "MusicalInstrument.h"

namespace MusicalScales {

    class MusicalInstrumentRendererText : public MusicalInstrumentRenderer {
    public:
        MusicalInstrumentRendererText(MusicalInstrument inst);
        void render(bool activeOnly);
    };

}


#endif //GUITAR_SCALES_MUSICALINSTRUMENTRENDERERTEXT_H
