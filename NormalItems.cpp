#include "MasterList.h"
#include "NormalItems.h"
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

NormalItems::NormalItems() : MasterList() {
    normalItems = {
        std::make_tuple("pineapple", -10, 100),
        std::make_tuple("kiwi", -9, 90),
        std::make_tuple("grapes", -8, 80),
        std::make_tuple("rasberry", -7, 70),
        std::make_tuple("mango", -6, 60),
        std::make_tuple("watermelon", -5, 50),
        std::make_tuple("strawberry", -4, 40),
        std::make_tuple("apple", -3, 30),
        std::make_tuple("blueberry", -2, 20),
        std::make_tuple("banana", -1, 10)
    };
    int idx = rand() % 10;
    std::tuple<string, int, int> selectedItem = normalItems[idx];
    itemType = std::get<0>(selectedItem);
    price = std::get<1>(selectedItem);
    pointValue = std::get<2>(selectedItem);
}