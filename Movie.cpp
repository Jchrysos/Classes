#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"
using namespace::std;
string Movie::Director() {return director;}
string Movie::Rating() {return rating;}
string Movie::Duration() {return duration;}
Movie::Movie(){
    cout << "title: ";
    getline(cin,title);
    cout << "year: ";
    getline(cin,year);
    cout << "director: ";
    getline(cin,director);
    cout << "rating: ";
    getline(cin,rating);
    cout << "duration: ";
    getline(cin,duration);
  }
Movie::~Movie(){}
void Movie::PrintInfo() {
    cout << title << ", " << year << ", " << director << ", " << rating << ", " << duration << '\n';
  }