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
#include "Computer.h"

// default constructor 
Computer::Computer() {
    k = 0;
    l = 0;
} 

// getters 
int Computer::getK() {
    return k;
} 

int Computer::getL() {
    return l;
} 

vector<MasterList*> Computer::getComputerItems() {
    return computerItems;
} 

// setters 
void Computer::setK(int aK) {
    k = aK;
} 

void Computer::setL(int aL) {
    l = aL;
} 

void Computer::setComputer(int row, int col) {
    k = row;
    l = col;
} 

// other functions 
void Computer::computerEffects() {
    for (auto myItem : computerItems) {
        tokenBudget += myItem->getTokenBudget();
        tokenPoints += myItem->getTokenPoints();
    }
}