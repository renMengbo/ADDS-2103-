#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(/* args */)
{
    card=' ';
    _name=" ";
}

Player::~Player()
{
}
char Player::makeMove(){
    return card;
}
string Player::getName(){
    return _name;
    }