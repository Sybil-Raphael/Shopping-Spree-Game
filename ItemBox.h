#ifndef ITEMBOX_H
#define ITEMBOX_H

#include "NormalItems.h"
#include "PowerUps.h"
#include "Debuffs.h"
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

class ItemBox{
// private variables
private:
    vector<MasterList*> boxItems;

// public functions
public:
    // creates itemBox with 5 random items from masterList and child classes
    ItemBox(); 
    
    // constructor to initalize the items in the itemBox
    ItemBox(NormalItems& normalItems, PowerUps& powerUps, Debuffs& debuffs);
    
    //getters
    vector<MasterList*> getBoxItems();
    
    // setters
    void setBoxItems(vector<MasterList*> myBoxItems);
};

#endif