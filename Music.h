#include <iostream>
#include <vector>
#include <string>
#include "DigitalMedia.h"
using namespace::std;
class Music : public DigitalMedia {
  public:
  string artist;
  string publisher;
  string duration;
  virtual string Artist();
  virtual string Publisher();
  virtual string Duration();
  virtual void PrintInfo();
  Music();
  ~Music();
};