#include <iostream>
using namespace std;
#include "Referee.h"
Referee::Referee(/* args */) {}

Referee::~Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
  player1->makeMove();
  player2->makeMove();
// cout << "Rock, Paper, Scissors,Robot, Monkey, Pirate, Ninja, Zombie"
  if (player1->move->card  == player2->move->card ) {
    return nullptr;
  } else if ((player1->move->card  > player2->move->card ) ) {
    return player1;
  } else {
    return player2;
  }
}