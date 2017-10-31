//
// Created by Carroll Vance on 10/24/17.
//

#ifndef GUITAR_SCALES_MELODICMINORSCALE_H
#define GUITAR_SCALES_MELODICMINORSCALE_H

#include "MusicalScale.h"

namespace MusicalScales {

    class MelodicMinorScale : public MusicalScale {
    public:
        explicit MelodicMinorScale(MusicalNote::rootNotes root);

        MelodicMinorScale(MusicalNote::rootNotes root, int octave);

    private:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_MELODICMINORSCALE_H
