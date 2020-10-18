#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace::std;
class DigitalMedia {
  public:
  string title;
  string year;
  bool checked;
  virtual string Title();
  virtual string Year();
  virtual void PrintInfo();
};