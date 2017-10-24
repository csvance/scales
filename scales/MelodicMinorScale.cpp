//
// Created by Carroll Vance on 10/24/17.
//

#include "MelodicMinorScale.h"

namespace MusicalScales {

    MelodicMinorScale::MelodicMinorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        addSteps();
        build();
    }

    MelodicMinorScale::MelodicMinorScale(MusicalNote::rootNotes root, int octave) : MusicalScale(root, octave) {
        addSteps();
        build();
    }

    void MelodicMinorScale::addSteps(){
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Half);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);
        stepsAscending.push_back(MusicalScale::noteSteps::Whole);

        stepsDescending.push_back(MusicalScale::noteSteps::Whole);
        stepsDescending.push_back(MusicalScale::noteSteps::Whole);
        stepsDescending.push_back(MusicalScale::noteSteps::Half);
        stepsDescending.push_back(MusicalScale::noteSteps::Whole);
        stepsDescending.push_back(MusicalScale::noteSteps::Whole);
        stepsDescending.push_back(MusicalScale::noteSteps::Half);
        stepsDescending.push_back(MusicalScale::noteSteps::Half);
        stepsDescending.push_back(MusicalScale::noteSteps::Whole);
    }

}