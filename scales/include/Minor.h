//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MINORSCALE_H
#define GUITAR_SCALES_MINORSCALE_H

#include "../../include/MusicalScale.h"

namespace MusicalScales {

    class MinorScale : public MusicalScale {
    public:
        MinorScale(MusicalNote::rootNotes root);
    };

}

#endif //GUITAR_SCALES_MINORSCALE_H