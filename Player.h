#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "Move.h"
using namespace std;

class Player {
 private: 
  
 public:
  Move* move = new Move;
  string _name;
  Player(/* args */);
  ~Player();
  virtual Move* makeMove();
  string getName();
};

#endif