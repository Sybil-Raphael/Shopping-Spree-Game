#include "MasterList.h"
#ifndef NORMALITEMS_H
#define NORMALITEMS_H
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

class NormalItems : public MasterList {
    // private variables
private:
    std::vector<std::tuple<std::string, int, int>> normalItems; // name, price, point value

    // public functions
public:
    // default constructor
    NormalItems();
};

#endif