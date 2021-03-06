//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MUSICALSCALE_H
#define GUITAR_SCALES_MUSICALSCALE_H

#include <vector>

#include "MusicalNote.h"
#include "MusicalScale.h"

#define OCTAVE_COUNT 6
#define OCTAVE_SIZE 12

namespace MusicalScales {

    class MusicalScale {
    public:
        enum class noteSteps {
            Half = 1, Whole = 2, WholeHalf = 3
        };

        void build();

        explicit MusicalScale(MusicalNote::rootNotes root);

        MusicalScale(MusicalNote::rootNotes root, int octave);

        MusicalNote getNote(int index);

        size_t size();

        std::vector<MusicalNote> notes;

        bool noRepeat;

    protected:
        MusicalNote::rootNotes rootNote;
        int rootOctave;

        std::vector<noteSteps> stepsAscending;
        std::vector<noteSteps> stepsDescending;


    private:

    };

}


#endif //GUITAR_SCALES_MUSICALSCALE_H
