//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_PIANO_H
#define GUITAR_SCALES_PIANO_H

#include <vector>

#include "../../include/MusicalInstrument.h"

namespace MusicalScales {

    class Piano : public MusicalInstrument {
    public:

        Piano();

        explicit Piano(int octaves);

        Piano(int octaves, int root);

        int numOctaves;
        int rootOctave;

        using MusicalInstrument::setScale;

    private:
        void buildNotes();
    };

}


#endif //GUITAR_SCALES_PIANO_H
