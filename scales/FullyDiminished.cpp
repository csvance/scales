//
// Created by Carroll Vance on 10/17/17.
//

#include "FullyDiminished.h"

namespace MusicalScales {

    FullyDiminishedScale::FullyDiminishedScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        steps.push_back(MusicalScale::noteSteps::Whole);
        steps.push_back(MusicalScale::noteSteps::Half);
        build();
    }

}