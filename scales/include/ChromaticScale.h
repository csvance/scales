//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_CHROMATICSCALE_H
#define GUITAR_SCALES_CHROMATICSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class ChromaticScale : public MusicalScale {
    public:
        ChromaticScale(MusicalNote::rootNotes root);
    protected:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_CHROMATICSCALE_H
