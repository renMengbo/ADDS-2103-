#ifndef COMPUTER_H
#define COMPUTER_H
#include "Move.h"
#include "Player.h"
class Computer : public Player {
 private:
  /* data */
 public:
  Move* makeMove();
  Computer(/* args */);
  ~Computer();
};

#endif