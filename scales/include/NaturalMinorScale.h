//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_NATURALMINORSCALE_H
#define GUITAR_SCALES_NATURALMINORSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class NaturalMinorScale : public MusicalScale {
    public:
        NaturalMinorScale(MusicalNote::rootNotes root);
    protected:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_NATURALMINORSCALE_H
