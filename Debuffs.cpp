#include "MasterList.h"
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

Debuffs::Debuffs() {
    debuffs = {
        tuple<string, int, int>("budgetBust", -10, 0),
        tuple<string, int, int>("pointBust", 0, -10),
        tuple<string, int, int>("doubleBust", 0, 0),
    };
    int idx = rand() % 3;
    tuple<string, int, int> selectedItem = debuffs[idx];
    
    itemType = std::get<0>(selectedItem);
    price = std::get<1>(selectedItem);
    pointValue = std::get<2>(selectedItem);
}