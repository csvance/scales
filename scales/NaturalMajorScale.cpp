//
// Created by Carroll Vance on 10/12/17.
//

#include "NaturalMajorScale.h"

namespace MusicalScales {

    NaturalMajorScale::NaturalMajorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    void NaturalMajorScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);

        stepsDescending = stepsAscending;
    }

}