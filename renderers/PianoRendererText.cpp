//
// Created by Carroll Vance on 10/21/17.
//

#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "PianoRendererText.h"

namespace MusicalScales{
    PianoRendererText::PianoRendererText(Piano inst) : MusicalInstrumentRendererText((MusicalInstrument)inst) {
        piano = inst;
    }

    void PianoRendererText::render(bool activeOnly){

    }

}