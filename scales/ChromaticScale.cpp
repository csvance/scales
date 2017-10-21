//
// Created by Carroll Vance on 10/21/17.
//

#include "ChromaticScale.h"

namespace MusicalScales {

    ChromaticScale::ChromaticScale(MusicalNote::rootNotes root) : MusicalScale(root) {
        steps.push_back(MusicalScale::noteSteps::Half);
        build();
    }

}