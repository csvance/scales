//
// Created by Carroll Vance on 10/24/17.
//

#include "HarmonicMinorScale.h"

namespace MusicalScales {

    HarmonicMinorScale::HarmonicMinorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    HarmonicMinorScale::HarmonicMinorScale(MusicalNote::rootNotes root, int octave) : MusicalScale(root, octave) {
        addSteps();
        build();
    }

    void HarmonicMinorScale::addSteps() {
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::WholeHalf);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);

        stepsDescending = stepsAscending;
    }

}