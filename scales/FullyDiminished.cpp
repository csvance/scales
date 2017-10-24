//
// Created by Carroll Vance on 10/17/17.
//

#include "FullyDiminished.h"

namespace MusicalScales {

    FullyDiminishedScale::FullyDiminishedScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    void FullyDiminishedScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);

        stepsDescending = stepsAscending;

        build();
    }

}