//
// Created by Carroll Vance on 10/17/17.
//

#ifndef GUITAR_SCALES_GUITARSTRING_H
#define GUITAR_SCALES_GUITARSTRING_H

#include "../../include/MusicalNote.h"

namespace MusicalScales {

    class InstrumentString {
    public:
        explicit InstrumentString(MusicalNote root);

        int noteIndex();

        MusicalNote rootNote;
    };

}


#endif //GUITAR_SCALES_GUITARSTRING_H
