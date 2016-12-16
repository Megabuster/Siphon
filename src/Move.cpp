#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Moves{
public:
    void displayType() {
        cout << myType;
    }

    const string& getType() {
        return myType;
    }

private:
    int maxLevel;
    int currentLevel;
    int windup;
    int cooldown;
    int cost;
    bool costType;
    string myType;
    string effect;
};

class Attack : public Moves {
public:
private:
    bool damageType;
    int damage;
};

class Defense : public Moves {
public:
private:
    int heal;
};

class Escape : public Moves {
public:
private:
};

class Consumable : public Moves {
public:
private:
};
