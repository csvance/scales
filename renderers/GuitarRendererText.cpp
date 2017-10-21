//
// Created by Carroll Vance on 10/19/17.
//

#include <vector>
#include <sstream>
#include <iostream>
#include <iomanip>

#include "GuitarRendererText.h"

namespace MusicalScales{

    GuitarRendererText::GuitarRendererText(GuitarFamily inst) : MusicalInstrumentRendererText((MusicalInstrument)inst) {
        guitar = inst;
    }

    void GuitarRendererText::render(bool activeOnly){
        std::stringstream outputStream;

        int countNote = 0, countGroup = 0;


        //Fretboard
        for(int fret=0;fret<=guitar.numFrets;fret++)
            outputStream << std::setw(3) << fret << "|";

        outputStream << std::endl;


        for (auto noteGroupIt = instrument.noteGroups.rbegin();
             noteGroupIt != instrument.noteGroups.rend();
             noteGroupIt++) {

            auto noteIt = (*noteGroupIt).begin();

            if(!activeOnly || (*noteIt).active)
                outputStream << std::setw(3) << (*noteIt).toString() << "|";
            else
                outputStream << std::setw(4) <<  "|";

            noteIt++;

            for (;
                 noteIt != (*noteGroupIt).end();
                 noteIt++) {

                if(!activeOnly || (*noteIt).active)
                    outputStream << std::setw(3) << (*noteIt).toString() << "|";
                else
                    outputStream << std::setw(4) <<  "|";

            }

            outputStream << std::endl;

            countGroup++;
        }

        std::cout << outputStream.str();
    }

}