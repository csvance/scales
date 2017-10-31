//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H
#define GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class DominantDiminishedScale : public MusicalScale {
    public:
        explicit DominantDiminishedScale(MusicalNote::rootNotes root);

    private:
        void addSteps();
    };

}
#endif //GUITAR_SCALES_DOMINANTDIMINISHEDSCALE_H
