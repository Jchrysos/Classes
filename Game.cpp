#include <iostream>
#include <vector>
#include <string>
#include "Game.h"
using namespace::std;
string Game::Publisher() {return publisher;}
string Game::Rating() {return rating;}
Game::Game(){
    cout << "title: ";
    getline(cin,title);
    cout << "year: ";
    getline(cin,year);
    cout << "publisher: ";
    getline(cin,publisher);
    cout << "rating: ";
    getline(cin,rating);
  }
  // destructor
Game::~Game(){}
  // method to print all the information about the thing
void Game::PrintInfo() {
    cout << title << ", " << year << ", " << publisher << ", " << rating << '\n';
  }