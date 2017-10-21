//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_PIANO_H
#define GUITAR_SCALES_PIANO_H

#include <vector>

#include "../MusicalInstrument.h"
#include "../MusicalScale.h"
#include "../MusicalNote.h"

#include "InstrumentString.h"


namespace MusicalScales {

    class Piano : public MusicalInstrument {
    public:

        Piano();
        Piano(int octaves);
        Piano(int octaves,int root);

        int numOctaves;
        int rootOctave;

        using MusicalInstrument::setScale;

    private:
        void buildNotes();
    };

}


#endif //GUITAR_SCALES_PIANO_H
