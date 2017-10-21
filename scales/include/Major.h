//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MAJORSCALE_H
#define GUITAR_SCALES_MAJORSCALE_H

#include "../../include/MusicalScale.h"
#include "../../include/MusicalNote.h"

namespace MusicalScales {

    class MajorScale : public MusicalScale {
    public:
        MajorScale(MusicalNote::rootNotes root);
    };

}

#endif //GUITAR_SCALES_MAJORSCALE_H
