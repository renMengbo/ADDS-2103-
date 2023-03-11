#include <iostream>

#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
using namespace std;
int main() {
  string people = "Human";
  // cout << "please inter you name: ";
  // cin >> people;
  // Human Human1(people);
  Human Human1;
  Computer Computer1;
  Referee rf;

  // Player * winner =new Player;
  Player *winner = rf.refGame(&Human1, &Computer1);
  if (winner == nullptr) {
    cout << "Tie" ;
  } else {
    cout << winner->getName() ;
  }
  cout << endl;
}