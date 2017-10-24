//
// Created by Carroll Vance on 10/24/17.
//

#ifndef GUITAR_SCALES_HARMONICMINORSCALE_H
#define GUITAR_SCALES_HARMONICMINORSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class HarmonicMinorScale : public MusicalScale {
    public:
        HarmonicMinorScale(MusicalNote::rootNotes root);
        HarmonicMinorScale(MusicalNote::rootNotes root,int octave);
    protected:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_HARMONICMINORSCALE_H
