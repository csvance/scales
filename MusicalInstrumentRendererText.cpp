//
// Created by Carroll Vance on 10/19/17.
//

#include <vector>
#include <sstream>
#include <iostream>

#include "MusicalInstrumentRendererText.h"

namespace MusicalScales {

    void MusicalInstrumentRendererText::render(bool activeOnly) {
        std::stringstream outputStream;

        int countNote = 0, countGroup = 0;

        for (auto noteGroupIt = instrument.noteGroups.begin();
             noteGroupIt != instrument.noteGroups.end();
             noteGroupIt++) {

            outputStream << countGroup + 1 << ":{";
            countNote = 0;

            for (auto noteIt = (*noteGroupIt).begin();
                 noteIt != (*noteGroupIt).end();
                 noteIt++) {

                if(activeOnly && !(*noteIt).active)
                    outputStream << " ,";
                else
                    outputStream << (*noteIt).toString() << ",";

                countNote++;

            }

            outputStream << "}" << std::endl;

            countGroup++;
        }

        std::cout << outputStream.str();
    }

}