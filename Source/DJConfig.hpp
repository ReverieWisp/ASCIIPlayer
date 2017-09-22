// Read from a file, designed to configure the DJ.
#pragma once
#include <string>


namespace ASCIIPlayer
{
  struct DJConfig
  {
    // Basic
    float        VolumeDefault       = 0.8f;            // Default volume for the DJ to play at.
    float        VolumeChangeAmount  = 0.1f;           // By how much we change the volume every time.
    unsigned int SkipForwardSeconds  = 20;             // Seconds to go forwards when skipping. 
    unsigned int SkipBackwardSeconds = 20;             // Seconds to go backwards when skipping.
    bool         DJLooping           = true;           // Does it loop?
    unsigned int DJChannelCount      = 10;             // The number of channels for the DJ to have.
    std::string  DJVisualizerID      = "centerVisualizer"; // ID of the visualizer to use.

    //std::string DefaultFolder; // Default folder to load music from.

    // Attempts to parse a line of a file.
    void ParseLine(std::string line);
    std::string ToString();
  };
}
