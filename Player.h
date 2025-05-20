#ifndef PLAYER_H
#define PLAYER_H
#include "Tokens.h"
#include <ostream>
#include <istream>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdlib>
#include <cstddef>
#include <fstream>
#include <sstream>
#include <exception>
#include <algorithm>
    using std::transform;
#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include <string>
    using std::string;
#include <array>
    using std::array;
#include <vector>
    using std::vector;
#include <tuple>
    using std::tuple;
#include <iomanip>
    using std::setfill;
    using std::setw;
    using std::setprecision;
    
/*
function definitions
void playerEffects();
// receives nothing
// returns updated budget and points for player
*/


class Player : public Tokens {
    // private variables
private:
    int i;
    int j;
    std::vector<MasterList*> playerItems;
    // public functions
public:
    // default constructor
    Player();

    // getters
    int getI();
    int getJ();
    std::vector<MasterList*> getPlayerItems();

    // setters
    void setI(int aI);
    void setJ(int aJ);
    void setPlayer(int, int);

    // other functions
    void playerEffects();
};
#endif