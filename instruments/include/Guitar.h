//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_ELECTRICGUITAR_H
#define GUITAR_SCALES_ELECTRICGUITAR_H

#include "GuitarFamily.h"
#include "InstrumentString.h"

namespace MusicalScales {

    class Guitar : GuitarFamily {
    public:
        Guitar();

        explicit Guitar(int frets);

        Guitar(int frets, std::vector<InstrumentString> &instrumentStrings);
    };

}
#endif //GUITAR_SCALES_ELECTRICGUITAR_H
