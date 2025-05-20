#ifndef MASTERLIST_H
#define MASTERLIST_H
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

class MasterList {
    // protected variables
protected:
    string itemType;     // normalItems, powerUps, debuffs
    int price;
    int pointValue;
    int tokenBudget;
    int tokenPoints;

    // public functions
public:
    // default constructor
    MasterList();

    // getters
    string getItemType();
    int getPrice();
    int getPointValue();
    int getTokenBudget();
    int getTokenPoints();

    // setters
    void setItemType(string aItemType);
    void setPrice(int aPrice);
    void setPointValue(int aPointValue);
    void setTokenBudget(int aTokenBudget);
    void setTokenPoints(int aTokenPoints);
};
#endif