//
// Created by Carroll Vance on 10/17/17.
//

#include "include/DominantDiminished.h"

namespace MusicalScales {

    DominantDiminishedScale::DominantDiminishedScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        steps.push_back(MusicalScale::noteSteps::Half);
        steps.push_back(MusicalScale::noteSteps::Whole);
        build();
    }

}