//
// Created by Carroll Vance on 10/21/17.
//

#include "include/Piano.h"

namespace MusicalScales {
    Piano::Piano() : MusicalInstrument() {
        numOctaves = 1;
        rootOctave = 0;

        buildNotes();
    }

    Piano::Piano(int octaves) : MusicalInstrument() {
        numOctaves = octaves;
        rootOctave = 0;

        buildNotes();
    }

    Piano::Piano(int octaves, int root) : MusicalInstrument() {
        numOctaves = octaves;
        rootOctave = root;
        buildNotes();
    }

    void Piano::buildNotes() {

        //Only one note group for a piano
        noteGroups.emplace_back(std::vector<ToggleNote>());

        for (int octave = 0; octave < numOctaves; octave++) {
            for (int note = 0; note < 12; note++) {

                auto calcNote = static_cast<MusicalNote::rootNotes>(
                        static_cast<int>(MusicalNote::rootNotes::C) + note
                );

                noteGroups[0].emplace_back(ToggleNote(MusicalNote(calcNote, rootOctave + octave)));
            }
        }

        buildIndex();

    }

}