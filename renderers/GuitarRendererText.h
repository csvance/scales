//
// Created by Carroll Vance on 10/19/17.
//

#ifndef GUITAR_SCALES_GUITARRENDERERTEXT_H
#define GUITAR_SCALES_GUITARRENDERERTEXT_H

#include "../MusicalScale.h"
#include "../MusicalInstrumentRendererText.h"
#include "../instruments/Guitar.h"

namespace MusicalScales {

    class GuitarRendererText : public MusicalInstrumentRendererText  {
    public:
        GuitarRendererText(Guitar inst);
        void render(bool activeOnly);

    protected:
        Guitar guitar;

    };

}

#endif //GUITAR_SCALES_GUITARRENDERERTEXT_H
