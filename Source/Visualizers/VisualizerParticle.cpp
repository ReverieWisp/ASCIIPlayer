#include "VisualizerParticle.hpp"
#include <cmath>

#define DATA_SIZE 128


namespace ASCIIPlayer
{
  VisualSystem::VisualSystem(float x, float y)
    : ParticleSystem <RConsole::Color>(30, 200, 10, true, RConsole::GREY)
  {
    posX_ = x;
    posY_ = y;
  }

  void VisualSystem::OnUpdateEnd()
  {
    for (auto part : ParticleSystem<RConsole::Color>::particles_)
    {
      RConsole::Canvas::Draw('P', part.PosX, part.PosY, part.Data);
    }
  }

  void VisualSystem::AdjustParticle(Particle<RConsole::Color> &p)
  {
    p.VelX = (rand() % 4 - 2) / 2.0f;
    p.VelY = (rand() % 4 - 2) / 2.0f;
    p.Data = RConsole::LIGHTCYAN;
  }



  // Constructor
  VisualizerParticle::VisualizerParticle()
    : ASCIIVisualizer(DATA_SIZE, AUDIODATA_SPECTRUM, "visualizerParticle")
    , width_(RConsole::Canvas::GetConsoleWidth())
    , height_(RConsole::Canvas::GetConsoleHeight())
    , vs_(10, 10)
  {  }


  // Primary update loop for particle
  bool VisualizerParticle::Update(float* data)
  {
    vs_.Update();
    return true;
  }
}
