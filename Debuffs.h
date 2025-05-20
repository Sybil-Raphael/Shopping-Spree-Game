#ifndef DEBUFFS_H
#define DEBUFFS_H

#include "MasterList.h"
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

class Debuffs : public MasterList {
// private variables
private:
    vector<tuple<string, int, int>> debuffs; // name, price, pointValue

// public functions
public:
    // default constructor
    Debuffs();
};

#endif