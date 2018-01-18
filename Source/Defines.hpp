#pragma once
#include "FMOD/fmod.hpp"
#include <iostream>



  //////////////////////////////
 // OS and Compiler-Specific //
//////////////////////////////
#if defined (DEBUG) | (_DEBUG)
  //#define AP_DEBUG // As in, ascii-player debug
#endif


  //////////////////////////
 // Types and "Keywords" //
//////////////////////////
// Using
using ChannelHandle = FMOD::Channel*;     // Channel handle for FMOD
using AudioHandle   = FMOD::Sound;        // Sound object handle for FMOD
using Channelgroup  = FMOD::ChannelGroup; // Channel object handle for FMOD
using APUnique      = unsigned long long;

// Defines
#define ABSTRACT =0
#define SONG_TIME_SCALE_FOR_SECONDS 1000

  ///////////
 // Enums //
///////////
enum AudioDataStyle
{
  aSpectrum = 0,
  aWaveform = 1,
  
  aNO_STYLE
};

  //////////////////////////
 // Debug printing, etc. //
//////////////////////////
// Debug Printing
#ifdef AP_DEBUG
  #define DEBUG_PRINT(x) do{ std::cout << x << std::endl; } while (0)
#else
  #define DEBUG_PRINT(x) do{ } while (0)
#endif

