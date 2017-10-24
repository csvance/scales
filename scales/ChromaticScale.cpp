//
// Created by Carroll Vance on 10/21/17.
//

#include "ChromaticScale.h"

namespace MusicalScales {

    ChromaticScale::ChromaticScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    void ChromaticScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Half);

        stepsDescending = stepsAscending;
    }

}