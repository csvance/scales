//
// Created by Carroll Vance on 10/19/17.
//

#include "include/MusicalInstrumentRenderer.h"

namespace MusicalScales {

    MusicalInstrumentRenderer::MusicalInstrumentRenderer(MusicalInstrument &inst) {
        renderRange = false;
        octaveStart = 0;
        instrument = inst;
    }

    void MusicalInstrumentRenderer::render(bool activeOnly) {

    }

    void MusicalInstrumentRenderer::setOctaveStart(int start) {
        renderRange = true;
        octaveStart = start;
    }

}