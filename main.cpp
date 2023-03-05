#include "Computer.h"
#include "Human.h"
#include "Player.h"
#include "Referee.h"
#include <iostream>
using namespace std;
int main(){
    string people="";
    cout <<"please inter you name";
    cin >>people ;
    Human Human1(people);
    Human*player1= &Human1;
    Computer * player2;
    player2=new Computer;
    Referee rf;
    player1->makeMove();
    player2->makeMove();
    Player * winner;
    winner=rf.refGame(player1,player2);
    if(winner==nullptr){
        cout<<"Tie";
    }
    else{
        winner->getName();
    }
    
    
}