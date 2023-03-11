#include "Human.h"

#include <iostream>
using namespace std;
Human::Human(/* args */) { _name = " Human "; }
Human::Human(string name) { _name = name; }

Human::~Human() {}
Move* Human::makeMove() {
  //cout << "please intput you move: " << endl;
  //cout << "Rock, Paper, Scissors,Robot, Monkey, Pirate, Ninja, Zombie"<< endl;
  cin >> move->card;

  return move;
}
