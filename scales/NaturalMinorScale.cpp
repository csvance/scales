//
// Created by Carroll Vance on 10/12/17.
//

#include "NaturalMinorScale.h"

namespace MusicalScales {

    NaturalMinorScale::NaturalMinorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    void NaturalMinorScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);

        stepsDescending = stepsAscending;
    }

}