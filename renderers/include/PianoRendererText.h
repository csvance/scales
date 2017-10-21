//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_PIANORENDERERTEXT_H
#define GUITAR_SCALES_PIANORENDERERTEXT_H

#include "MusicalInstrumentRendererText.h"
#include "Piano.h"
#include "Guitar.h"

namespace MusicalScales {

    class PianoRendererText : public MusicalInstrumentRendererText  {
    public:
        PianoRendererText(Piano inst);
        void render(bool activeOnly);

    protected:
        Guitar guitar;

    };

}


#endif //GUITAR_SCALES_PIANORENDERERTEXT_H
