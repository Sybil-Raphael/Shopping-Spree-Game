#ifndef COMPUTER_H
#define COMPUTER_H

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

/*function definitions
void computerEffects();
// receives nothing
// returns updated budget and points for computer
*/

class Computer : public Tokens {
// private variables 
private: 
    int k;
    int l;
    vector<MasterList*> computerItems;

// public functions 
public: 
    // default constructor 
    Computer();

    // getters 
    int getK();
    int getL();
    vector<MasterList*> getComputerItems();

    // setters 
    void setK(int aK);
    void setL(int aL);
    void setComputer(int, int);

    // other functions 
    void computerEffects();
};

#endif