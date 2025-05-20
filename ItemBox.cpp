#include "NormalItems.h"
#include "PowerUps.h"
#include "Debuffs.h"
#include "ItemBox.h"
#include "Game.h"
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

ItemBox::ItemBox() {
    for (int i = 0; i < 5; ++i) {
        // get random item based on chance and push it into itemBox
        int randNum = rand() % 7;
        if (randNum < 4) // normalItem
        {
            NormalItems* n = new NormalItems();
            boxItems.push_back(n);
        }
        else if (randNum < 6) // powerUp
        {
            PowerUps* p = new PowerUps();
            boxItems.push_back(p);
        }
        else // debuff
        {
            Debuffs* d = new Debuffs;
            boxItems.push_back(d);
        }
    }
}

vector<MasterList*> ItemBox::getBoxItems(){
    return boxItems;
}

void ItemBox::setBoxItems(vector<MasterList*> myBoxItems){
    boxItems = myBoxItems;
}