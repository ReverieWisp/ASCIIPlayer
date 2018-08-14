// Default vizualizer if nothing else is defined.
#pragma once
#include "Visualizers/ASCIIVisualizer.hpp"


namespace ASCIIPlayer
{
  class VisualizerDefault : public ASCIIVisualizer
  {
  public:
    // Constructor
    VisualizerDefault();

    // Member functions
    bool Update(float* data);
    void OnResize(int newWidth, int newHeight);

  private:
    size_t height_;
  };
}

