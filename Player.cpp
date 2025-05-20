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
#include "Tokens.h"
#include "MasterList.h"
#include "Player.h"
#include "Cell.h"

// deafult constructor
Player::Player() : Tokens() {
    // initalize player randomly on grid
    i = 0;
    j = 0;
}
// getters
int Player::getI() {
    return i;
}
int Player::getJ() {
    return j;
}
std::vector<MasterList*> Player::getPlayerItems() {
    return playerItems;
}
// setters
void Player::setI(int aI) {
    i = aI;
}
void Player::setJ(int aJ) {
    j = aJ;
}
void Player::setPlayer(int row, int col) {
    i = row;
    j = col;
}

void Player::playerEffects() {
    for (auto const& theItem : playerItems) {
        tokenBudget += theItem->getTokenBudget();
        tokenPoints += theItem->getTokenPoints();
    }
}