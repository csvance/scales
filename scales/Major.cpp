//
// Created by Carroll Vance on 10/12/17.
//

#include "Major.h"

using namespace std;

MajorScale::MajorScale(MusicalNote::rootNotes root) : MusicalScale(root) {
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Half);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Whole);
    steps.push_back(MusicalScale::noteSteps::Half);
    build();
}