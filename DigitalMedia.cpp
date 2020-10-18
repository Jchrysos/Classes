#include <iostream>
#include <vector>
#include <string>
#include "DigitalMedia.h"
using namespace::std;
// I made everything into a string so I could do getline more easily. Just don't put in "APPLE" as your year or something.
// create media class
string DigitalMedia::Title() {
  return title;
}
string DigitalMedia::Year() {
  return year;
}
void DigitalMedia::PrintInfo(){}