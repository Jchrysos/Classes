#include <iostream>
#include <vector>
#include <string>
#include "DigitalMedia.h"
using namespace::std;
class Movie : public DigitalMedia {
  public:
  string director;
  string rating;
  string duration;
  virtual string Director();
  virtual string Rating();
  virtual string Duration();
  Movie();
  ~Movie();
  virtual void PrintInfo();
};