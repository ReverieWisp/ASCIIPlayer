#pragma once
#include "Visualizer.hpp"
#include "Overlays/ASCIIOverlay.hpp"
#include <chrono>


namespace ASCIIPlayer
{
  class CenterVisualizer : public Visualizer
  {
  public:
    // Ctor
    CenterVisualizer();

    // Member functions
    bool Update(float* data);

  private:
    // Variables
    int lastWidth_;
    int lastHeight_;
    
	// Previous info
    float *prev1_;
    float *prev2_;
    float *prev3_;
    int prevSize_;
    int frameDeleay_;
    int frameDelayMax_;
	
	// Delay for movement
	int moveDelayMax_;
	int moveDelay_;
	float rand1_;
	float rand2_;

	// Visual offsets of backing
	float offsetX_;
	float offsetY_;
	float offsetX1_;
	float offsetY1_;
	float offsetX2_;
	float offsetY2_;
	float offsetX3_;
	float offsetY3_;

  };
}



