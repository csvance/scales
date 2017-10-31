//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MAJORSCALE_H
#define GUITAR_SCALES_MAJORSCALE_H

#include "MusicalScale.h"
#include "MusicalNote.h"

namespace MusicalScales {

    class NaturalMajorScale : public MusicalScale {
    public:
        explicit NaturalMajorScale(MusicalNote::rootNotes root);

    private:
        void addSteps();
    };

}

#endif //GUITAR_SCALES_MAJORSCALE_H

