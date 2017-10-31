//
// Created by Carroll Vance on 10/19/17.
//

#include <vector>
#include <sstream>
#include <iostream>

#include "include/MusicalInstrumentRendererText.h"

namespace MusicalScales {

    MusicalInstrumentRendererText::MusicalInstrumentRendererText(
            MusicalInstrument &inst) : MusicalInstrumentRenderer(inst) {}

    void MusicalInstrumentRendererText::render(bool activeOnly) {
        std::stringstream outputStream;

        int countNote = 0, countGroup = 0;

        for (auto &noteGroup : instrument.noteGroups) {

            outputStream << countGroup + 1 << ":{";
            countNote = 0;

            for (auto &note : noteGroup) {

                if (activeOnly && !note.active)
                    outputStream << " ,";
                else
                    outputStream << note.toString() << ",";

                countNote++;

            }

            outputStream << "}" << std::endl;

            countGroup++;
        }

        std::cout << outputStream.str();
    }

}