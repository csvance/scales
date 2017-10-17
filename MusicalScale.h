//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MUSICALSCALE_H
#define GUITAR_SCALES_MUSICALSCALE_H

#include <vector>

#include "MusicalNote.h"

#define OCTAVE_COUNT 6
#define OCTAVE_SIZE 12

namespace MusicalScales {

    class MusicalScale {
    public:
        enum class noteSteps {
            Half = 1, Whole = 2, WholeHalf = 3
        };

        void setRoot(MusicalNote::rootNotes note);

        void setStep(std::vector<noteSteps> steps);

        void build();

        MusicalScale(MusicalNote::rootNotes root);

        MusicalNote getNote(int index);

        std::vector<MusicalNote> getNotes(int startIndex, int count);

        int size();

    protected:
        MusicalNote::rootNotes rootNote;
        std::vector<noteSteps> steps;

    private:
        std::vector<MusicalNote> notes;
    };

}

//Include scale headers for use
#include "scales/Major.h"
#include "scales/Minor.h"
#include "scales/DominantDiminished.h"
#include "scales/FullyDiminished.h"



#endif //GUITAR_SCALES_MUSICALSCALE_H
