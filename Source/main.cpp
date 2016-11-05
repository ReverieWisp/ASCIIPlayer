#include <iostream>
#include <FileIO/FileIO.hpp>
#include "Lobby.hpp"



int main(int argc, char** argv) try
{
  // === Audio System Test ===
  //ASCIIPlayer::AudioSystem a(10);
  //ASCIIPlayer::AudioFile *af = a.PreloadFile("Test_Audio.mp3");
  //a.PlayFile(*af);
  //while (a.Update()) { }

  // === DJ Test ===
  //ASCIIPlayer::DJ Dj;
  //ASCIIPlayer::AudioFile *test1 = new ASCIIPlayer::AudioFile("Test_Audio.mp3");
  //Dj.AddSong(test1);
  //while (Dj.Update()) { } 
  
  // === Lobby Test ===
  // Expected Use: ASCIIPlayer::Lobby dergLounge(argc, argv);
  char * args[2] = { "Opening Soda Can.mp3", "Pool Shot.mp3" };// , "Test_Audio.mp3", "Caspa & Rusko.ogg" };
  ASCIIPlayer::Lobby dergLounge(2, args);
  dergLounge.Run();

  // === Effective steps layout with DJ and lobby mingling, one DJ. ===
  // === Note: No longer valid as lobby can host multiple DJs in theory. ===
  // Parse command line. This will have both song names and flags to be interpreted. Consider getopt or similar for cross-platform stuff.
  // Parse config file. Just reinterpret_cast the data to the DJConfig structure.
  // Construct DJ object. One-liner.
  // Feed DJ songs from command line or folder that command line specifies (note: NOT DJ config, but existing logic)
  // Start Lobby - Blocking IO is totally good here.
    //// == Inside Lobby == ////
    // While loop for DJ updating //while(DJ.update()) or something.
    // Input Handler Update -- probably offload input parsing to another function? Nonblocking IO here.
    // Update DJ, which by extension gets everything.

  return 0;
}
//Catch and dump any errors.
catch (std::exception &e)
{
  std::cerr << e.what() << std::endl;
  std::cout << e.what() << std::endl;
  throw e;
}