#pragma once
#include "ASCIIVisualizer.hpp"



namespace ASCIIPlayer
{
  class VisaulizerSpotted : public ASCIIVisualizer
  {
  public:
    // Constructor
    VisaulizerSpotted();

    // DrawBars
    bool Update(float* data);
  };
}
