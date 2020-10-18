#include <iostream>
#include <vector>
#include <string>
#include "Music.h"
using namespace::std;
string Music::Artist() {return artist;}
string Music::Publisher() {return publisher;}
string Music::Duration() {return duration;}
Music::Music(){
    cout << "title: ";
    getline(cin,title);
    cout << "year: ";
    getline(cin,year);
    cout << "artist: ";
    getline(cin,artist);
    cout << "publisher: ";
    getline(cin,publisher);
    cout << "duration: ";
    getline(cin,duration);
  }
Music::~Music(){}
void Music::PrintInfo() {
    cout << title << ", " << year << ", " << artist << ", " << publisher << ", " << duration << '\n';
  }