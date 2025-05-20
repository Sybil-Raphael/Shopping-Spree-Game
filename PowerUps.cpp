#include <iostream>
#include <string>
#include <vector>
#include <tuple>

#include "MasterList.h"
#include "PowerUps.h"

PowerUps::PowerUps() : MasterList() {
    powerUps = {
        std::make_tuple("budgetBoost", 10, 0),
        std::make_tuple("pointBoost", 0, 10),
        std::make_tuple("doubleBoost", 10, 10),
    };
    int idx = rand() % 3;
    std::tuple<std::string, int, int> selectedItem = powerUps[idx];
    itemType = std::get<0>(selectedItem);
    price = std::get<1>(selectedItem);
    pointValue = std::get<2>(selectedItem);
}