#ifndef POWERUPS_H
#define POWERUPS_H

#include <iostream>
#include <string>
#include <vector>
#include <tuple>

#include "MasterList.h"

class PowerUps : public MasterList {
    // private variables
private:
    std::vector<std::tuple<std::string, int, int>> powerUps; // name, price, pointValue

    // public functions
public:
    // default constructor
    PowerUps();
};

#endif