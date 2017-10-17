//
// Created by Carroll Vance on 10/12/17.
//

#include "MinorScale.h"

MinorScale::MinorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Half);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Half);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Whole);
    build();
}