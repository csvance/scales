//
// Created by Carroll Vance on 10/21/17.
//

#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>

#include "PianoRendererText.h"

namespace MusicalScales {
    PianoRendererText::PianoRendererText(Piano inst) : MusicalInstrumentRendererText((MusicalInstrument) inst) {
        piano = inst;
    }

    void PianoRendererText::render(bool activeOnly) {
        std::stringstream outputStream;

        auto noteGroupIt = instrument.noteGroups.begin();
        auto noteIt = (*noteGroupIt).begin();

        for (int octave = 0; octave < piano.numOctaves; octave++) {

            std::string notes[12];
            for (int noteIndex = 0; noteIndex < 12; noteIndex++) {

                if(!activeOnly || (*noteIt).active)
                    notes[noteIndex] = (*noteIt).toString();
                else
                    notes[noteIndex] = "";

                noteIt++;
            }

            outputStream << "   |   ||   |     |   ||   ||   |   " << std::endl;
            outputStream << "   |" << std::setw(3) << notes[1] << "||" << std::setw(3) << notes[3] << "|     |"
                         << std::setw(3) << notes[6] << "||" << std::setw(3) << notes[8] << "||" << std::setw(3)
                         << notes[10] << "|   " << std::endl;
            outputStream << "|    |    |    |    |    |    |    |" << std::endl;
            outputStream << "|" << std::setw(3) << notes[0] << " |" << std::setw(3) << notes[2] << " |" << std::setw(3)
                         << notes[4] << " |" << std::setw(3) << notes[5] << " |" << std::setw(3) << notes[7] << " |"
                         << std::setw(3) << notes[9] << " |" << std::setw(3) << notes[11] << " |" << std::endl;
        }

        std::cout << outputStream.str();
    }

}