//
// Created by Carroll Vance on 10/19/17.
//

#ifndef GUITAR_SCALES_GUITARRENDERERTEXT_H
#define GUITAR_SCALES_GUITARRENDERERTEXT_H

#include "MusicalInstrumentRendererText.h"
#include "GuitarFamily.h"

namespace MusicalScales {

    class GuitarRendererText : public MusicalInstrumentRendererText  {
    public:
        GuitarRendererText(GuitarFamily inst);
        void render(bool activeOnly);

    protected:
        GuitarFamily guitar;

    };

}

#endif //GUITAR_SCALES_GUITARRENDERERTEXT_H
