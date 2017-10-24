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

        std::string outputKeys[4];
        std::stringstream outputStream;

        auto noteGroupIt = instrument.noteGroups.begin();
        auto noteIt = (*noteGroupIt).begin();

        int beginRenderOctave;

        if(renderRange) {
            noteIt += octaveStart * 12;
            beginRenderOctave = octaveStart;
        }else{
            beginRenderOctave = 0;
        }



        for (int octave = beginRenderOctave; octave < piano.numOctaves; octave++) {

            std::string notes[12];
            for (int noteIndex = 0; noteIndex < 12; noteIndex++) {

                if(!activeOnly || (*noteIt).active)
                    notes[noteIndex] = (*noteIt).toString();
                else
                    notes[noteIndex] = "";

                noteIt++;
            }

            outputStream << "   |   ||   |     |   ||   ||   |   ";

            outputKeys[0].append(outputStream.str());
            outputStream.str(""); outputStream.clear();

            outputStream << "   |" << std::setw(3) << notes[1] << "||" << std::setw(3) << notes[3] << "|     |"
                         << std::setw(3) << notes[6] << "||" << std::setw(3) << notes[8] << "||" << std::setw(3)
                         << notes[10] << "|   ";

            outputKeys[1].append(outputStream.str());
            outputStream.str(""); outputStream.clear();

            outputStream << "|    |    |    |    |    |    |    |";

            outputKeys[2].append(outputStream.str());
            outputStream.str(""); outputStream.clear();

            outputStream << "|" << std::setw(3) << notes[0] << " |" << std::setw(3) << notes[2] << " |" << std::setw(3)
                         << notes[4] << " |" << std::setw(3) << notes[5] << " |" << std::setw(3) << notes[7] << " |"
                         << std::setw(3) << notes[9] << " |" << std::setw(3) << notes[11] << " |";

            outputKeys[3].append(outputStream.str());
            outputStream.str(""); outputStream.clear();
        }

        //Output Lines
        for(int line=0;line<4;line++)
            std::cout << outputKeys[line] << std::endl;



    }

}