//The main program loop, for configuring the DJ. Low-usage blocking IO.
#pragma once
#include "DJConfig"
#include "DJ"
#include <string>



namespace ASCIIPlayer
{
  class Lobby
  {
  public:
    //Constructor and Destructor
    Lobby();
    ~Lobby();

    //Member Functions
    bool Run(); //Has while loop and STD::Cin every loop to ensure it's running correctly. Loop sits until DJ starts with proper command.
    void StartDJ();
    void StopDj();
    void RetartDJ();
    void ReloadDJ();
    std::string cleanCommand(std::string input);
    bool ParseCommand(std::string command); //Returns if it was a valid command. If not, display error message.

  private:
    //Variables
    DJConfig activeConfig_;
    DJ *activeDJ_;
  };
}