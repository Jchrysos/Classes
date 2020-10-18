#include <iostream>
#include <vector>
#include <string>
#include "DigitalMedia.h"
#include "Game.h"
#include "Music.h"
#include "Movie.h"
using namespace::std;
// create vector for media pointers
vector<DigitalMedia *> Database;
// prototype for delete that will be needed later
bool NotDeleted(vector<DigitalMedia*> &vect, string input, string value);
// main method should say "what do?" then do it 
int main() {
  bool exit = false;
  while(exit == false){
  cout << "What would you like to do: ADD, SEARCH, or DELETE? (or EXIT) ";
  string response1;
  getline(cin,response1);
  if (response1=="ADD"){
    cout << "What will you add: MOVIE, MUSIC, or GAME?  ";
    string response2;
    getline(cin,response2);
    if (response2=="MOVIE"){
      Movie * newmovieptr = new Movie();
      Database.push_back(static_cast<DigitalMedia *>(newmovieptr));
    }
    if (response2=="MUSIC"){
      Music * newmusicptr = new Music();
      Database.push_back(static_cast<DigitalMedia *>(newmusicptr));
    }
    if (response2=="GAME"){
      Game * newgameptr = new Game();
      Database.push_back(static_cast<DigitalMedia *>(newgameptr));
    }
  }
  if (response1=="SEARCH"){
    cout << "Search by TITLE or YEAR?  ";
    string response2;
    getline(cin,response2);
    if (response2=="TITLE"){
      string searchtitle;
      cout << "title: ";
      getline(cin,searchtitle);
      // cycles through the vector "Database" and prints the info of every object matching the title searchtitle
      for (vector<DigitalMedia *>::iterator it = (Database).begin(); it != (Database).end(); ++it){
        if ((*it)->Title()==searchtitle){ 
          (*it)->PrintInfo();
        }
      }
    }
    if (response2=="YEAR"){
      string searchyear;
      cout << "year: ";
      getline(cin,searchyear);
      // cycles through the vector "Database" and prints the info of every object matching the year searchyear
      for (vector<DigitalMedia *>::iterator it = (Database).begin(); it != (Database).end(); ++it){
        if ((*it)->Year()==searchyear){ 
          (*it)->PrintInfo();
        }
      }

    }
  }
  if (response1=="DELETE"){
    cout << "Delete by TITLE or YEAR?  ";
    string response2;
    getline(cin,response2);
    string search;
    if (response2 == "TITLE"){ cout << "title: ";}
    else if (response2 == "YEAR"){ cout << "year: ";}
    getline(cin,search);
    // cycles through database to delete media, if checked it will skip over, and if everything is checked (i.e. NotDeleted() == false) then it ends.
    while (NotDeleted(Database, response2, search)== true) {};
    for (vector<DigitalMedia*>::iterator it = (Database).begin(); it != (Database).end(); ++it) { (*it)->checked = false; }
  }
  if (response1=="EXIT"){
    exit = true;
  }
  }
return 0;
}
bool NotDeleted(vector<DigitalMedia*> &Database, string response2, string search) {
  int count = 0;
  string confirm;
  bool exist = true;
  bool ran = false;
  // loops through the database, erases things matching the title or year
  for (vector<DigitalMedia*>::iterator it = (Database).begin(); it != (Database).end(); ++it) {
    if (response2 == "TITLE") {
      if ((*it)->Title() == search && (*it)->checked == false) {
        // makes user confirm if they want to delete
        cout << "Are you sure you want to delete this item?(Y/N)"<< endl;
        (*it)->PrintInfo();
        getline(cin, confirm);
        if (confirm == "Y") {
          Database.erase(Database.begin() + count);
          exist = true;
          ran = true;
          break;
        }
      else {
        (*it)->checked = true;
      }
      }
    }
    else if (response2 == "YEAR") {
      if ((*it)->Year() == search && (*it)->checked == false) {
        // makes user confirm if they want to delete
        cout << "Are you sure you want to delete this item?(Y/N)"<< endl;
        (*it)->PrintInfo();
        getline(cin, confirm);
        if (confirm == "Y") {
          Database.erase(Database.begin() + count);
          exist = true;
          ran = true;
          break;
        }
      else {
        (*it)->checked = true;
      }
      }
    }
        count++;    
        // if the title or year doesn't come up, the loop will still end
        exist = false;
    }
    // if the database is empty then it doesn't run, so loop ends
    if (ran == false) {exist = false;}
    return exist;
}

