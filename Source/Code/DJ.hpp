//Custom DJ class for managing the Playlist, SoundSystem, and Visualizer
#pragma once
#include "AudioSystem.hpp"
#include "CustomDefines.hpp"
#include "Playlist.hpp"
#include "Visualizer.hpp"
#include "DefaultVisualizer.hpp"
#include "DJConfig.hpp"



namespace ASCIIPlayer
{
  class DJ
  {
  public:
    //Constructor
    DJ(DJConfig config);
    
    //Member Functons
    bool Update();
    void Shutdown();
    void ShufflePlaylist();
    void AddSong(AudioFile toAdd);
    void FillSongSpecturm(float* toFill, AudioDataSize size);

  private:
    //Variables
    Playlist playlist_;       //Contains the AudioFile objects.
    AudioSystem audioSystem_; //The sound system to play the audio files.
    Visualizer *visualizer_;  //The visualizer to display the playing data.
  };
}
