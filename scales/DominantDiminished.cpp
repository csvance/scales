//
// Created by Carroll Vance on 10/17/17.
//

#include "DominantDiminished.h"

namespace MusicalScales {

    DominantDiminishedScale::DominantDiminishedScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    void DominantDiminishedScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);

        stepsDescending = stepsAscending;
    }

}