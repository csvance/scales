//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_BASSGUITAR_H
#define GUITAR_SCALES_BASSGUITAR_H

#include "GuitarFamily.h"

namespace MusicalScales {

    class BassGuitar : public GuitarFamily {
    public:
        BassGuitar();
        BassGuitar(int frets);
        BassGuitar(int frets, std::vector<InstrumentString> &instrumentStrings);
    };

}

#endif //GUITAR_SCALES_BASSGUITAR_H
