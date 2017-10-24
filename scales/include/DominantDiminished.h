//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H
#define GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class DominantDiminishedScale : public MusicalScale {
    public:
        DominantDiminishedScale(MusicalNote::rootNotes root);
        DominantDiminishedScale(MusicalNote::rootNotes root, int octave);

    protected:
        void addSteps();
    };

}
#endif //GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H
