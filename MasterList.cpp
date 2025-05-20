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

// default constructor
MasterList::MasterList() {
    itemType;
    price;
    pointValue;
    tokenBudget;
}

// getters
string MasterList::getItemType() {
    return itemType;
}

int MasterList::getPrice() {
    return price;
}

int MasterList::getPointValue() {
    return pointValue;
}

int MasterList::getTokenBudget() {
    return tokenBudget;
}

int MasterList::getTokenPoints() {
    return tokenPoints;
}

// setters
void MasterList::setItemType(string aItemType) {
    itemType = aItemType;
}

void MasterList::setPrice(int aPrice) {
    price = aPrice;
}

void MasterList::setPointValue(int aPointValue) {
    pointValue = aPointValue;
}

void MasterList::setTokenBudget(int aTokenBudget) {
    tokenBudget = aTokenBudget;
}

void MasterList::setTokenPoints(int aTokenPoints) {
    tokenPoints = aTokenPoints;
}