//
// Created by Carroll Vance on 10/21/17.
//

#ifndef GUITAR_SCALES_PIANORENDERERTEXT_H
#define GUITAR_SCALES_PIANORENDERERTEXT_H

#include "MusicalInstrumentRendererText.h"
#include "Piano.h"
#include "GuitarFamily.h"

namespace MusicalScales {

    class PianoRendererText : public MusicalInstrumentRendererText {
    public:
        explicit PianoRendererText(Piano &inst);

        void render(bool activeOnly) override;

    protected:
        Piano piano;

    };

}


#endif //GUITAR_SCALES_PIANORENDERERTEXT_H
