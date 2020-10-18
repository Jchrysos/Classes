#include <iostream>
#include <vector>
#include <string>
#include "DigitalMedia.h"

class Game : public DigitalMedia {
  public:
  string publisher;
  string rating;
  virtual string Publisher();
  virtual string Rating();
  virtual void PrintInfo();
  // constructor
  Game();
  // destructor
  ~Game();
};