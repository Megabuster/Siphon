#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "Move.cpp"

using namespace std;

//Units have moves and energy
class Unit{
public:
    //virtual void displayMoves();
    int getCurrentEnergy() {
        return currentEnergy;
    }
private:
    vector<Moves*> myMoves;
    int baseEnergy;
    int currentEnergy;
};

class Player : public Unit {
public:
private:
//include equipment and consumables
};

class NPCAI : public Unit {
public:
private:
//include trait
};
