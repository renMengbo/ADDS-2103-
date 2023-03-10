#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(/* args */) { _name = "NULL"; }

Player::~Player() {}
Move* Player::makeMove() {
  cout << "please intput you move: " << endl;
  cout << "Rock, Paper, Scissor,Robot, Monkey, Pirate, Ninja, Zombie";
  cin >> move->card;
  return move;
}
string Player::getName() { return _name; }