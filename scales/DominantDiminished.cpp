//
// Created by Carroll Vance on 10/17/17.
//

#include "DominantDiminished.h"

DominantDiminishedScale::DominantDiminishedScale(MusicalNote::rootNotes root) : MusicalScale(root) {
    steps.push_back(MusicalScale::noteSteps::Half);
    steps.push_back(MusicalScale::noteSteps::Whole);
    build();
}