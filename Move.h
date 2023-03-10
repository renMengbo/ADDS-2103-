#ifndef MOVE_H
#define MOVE_H
#include <string>
using namespace std;

// enum MoveType {Rock, Paper, Scissor,Robot, Monkey, Pirate, Ninja, Zombie}

class Move {
 private:


 public:
  string card;
  Move(/* args */);
  ~Move();
  string getName();
};



#endif