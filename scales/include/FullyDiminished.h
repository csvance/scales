//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_FULLYDIMINISHEDSCALE_H
#define GUITAR_SCALES_FULLYDIMINISHEDSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {


    class FullyDiminishedScale : public MusicalScale {
    public:
        explicit FullyDiminishedScale(MusicalNote::rootNotes root);

    private:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_FULLYDIMINISHEDSCALE_H
