//
// Created by Carroll Vance on 10/12/17.
//

#ifndef GUITAR_SCALES_MUSICALSCALE_H
#define GUITAR_SCALES_MUSICALSCALE_H

#include <vector>

#include "MusicalNote.h"

#define BUILD_OCTAVES 6

using namespace std;

class MusicalScale {
public:
    enum class noteSteps {Half=1,Whole=2,WholeHalf=3};

    void setRoot(MusicalNote::rootNotes note);
    void setStep(vector<noteSteps> steps);
    void build();

    MusicalScale(MusicalNote::rootNotes root);
    MusicalNote getNote(int index);
    vector<MusicalNote> getNotes(int startIndex, int count);

    int size();

protected:
    MusicalNote::rootNotes rootNote;
    vector<noteSteps> steps;

private:
    vector<MusicalNote> notes;
};

//Include scale headers for use
#include "MajorScale.h"

#endif //GUITAR_SCALES_MUSICALSCALE_H
