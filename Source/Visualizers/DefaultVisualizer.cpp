#include "DefaultVisualizer.hpp"
#include <math.h>
#include <thread>



namespace ASCIIPlayer
{
  // Constructor
  DefaultVisualizer::DefaultVisualizer()
    : Visualizer(a32, aWaveform, "default")
  {  }

  // Draw waveform based on updating
  bool DefaultVisualizer::Update(float* data)
  {
    for (int i = 0; i < GetAudioDataSize(); ++i)
    {
      int dv = static_cast<int>(data[i] * 90);
      if (dv < 0) dv *= -1;
      printf("%.*s\n", dv, "#######X##XX#X##XXXXXXXxXXxXxxXxxxxxxxx=xx=x==x============-==-=--=-----------");
    }

    return true;
  }
}