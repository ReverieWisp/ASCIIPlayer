#include "VisualizerDefault.hpp"
#include <math.h>
#include <thread>



namespace ASCIIPlayer
{
  // Constructor
  VisualizerDefault::VisualizerDefault()
    : ASCIIVisualizer(32, AUDIODATA_WAVEFORM)
  {  }

  // Draw waveform based on updating
  bool VisualizerDefault::Update(float* data)
  {
    for (unsigned int i = 0; i < GetAudioDataSize(); ++i)
    {
      int dv = static_cast<int>(data[i] * 90);
      if (dv < 0) dv *= -1;
      printf("%.*s\n", dv, "#######X##XX#X##XXXXXXXxXXxXxxXxxxxxxxx=xx=x==x============-==-=--=-----------");
    }

    return true;
  }
}
