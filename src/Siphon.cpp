#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "Unit.cpp"

using namespace std;

//enum moveType = { "attack", "consumable", "defense", "escape"};

enum winner {PLAYER1, PLAYER2, TIE};

winner battleLoop(Unit& p1, Unit& p2) {
    winner victor;
    while(p1.getCurrentEnergy() > 0 && p2.getCurrentEnergy() > 0) {
    	//
    }
    return victor;
}

int main() {
	Player p1;
	NPCAI p2;
	winner w = battleLoop(p1, p2);
	switch(w) {
	  case PLAYER1: cout << "Winner is Player 1"; break;
	  case PLAYER2: cout << "Winner is Player 1"; break;
	  case TIE: cout << "Battle ended in a tie"; break;
	};
	return 0;
}

