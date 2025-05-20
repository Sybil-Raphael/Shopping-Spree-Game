#include <ostream>
#include <istream>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdlib>
#include <cstddef>
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
#include "Cell.h"
#include "Player.h"
#include "Game.h"
#include "MasterList.h"
#include "Computer.h"
#include "Tokens.h"

// constructor
Cell::Cell(){
    bool isItemBox = rand() % 2;
    if (isItemBox)
    {
        itemBox = new ItemBox();
        hasItem = true;
    }
}

// getters
bool Cell::getHasItem(){
    return hasItem;
}

ItemBox* Cell::getItemBox(){
    return itemBox;
}

Player* Cell::getPlayer(){
    return player;
}

Computer* Cell::getComputer(){
    return computer;
}

// setters
void Cell::setHasItem(bool umHasItem){
    hasItem = umHasItem;
}

void Cell::setItemBox(ItemBox* theItemBox){
    itemBox = theItemBox;
}

void Cell::setPlayer(Player* thePlayer){
    player = thePlayer;
}

void Cell::setComputer(Computer* theComputer){
    computer = theComputer;
}

// functions
void Cell::resetPlayer(){
    player = nullptr;
}

void Cell::resetComputer(){
    computer = nullptr;
}

void Cell::playerOpenBox(Player* player){
    hasItem = true;
    if (itemBox == nullptr)
    {
        return;
    }
    else if (hasItem && itemBox != nullptr)
    {
        int itemNum = 1;
        for (MasterList* item : itemBox->getBoxItems())
        {
            cout << "Item Type: " << item->getItemType() << endl;
            cout << "Price: " << item->getPrice() << endl;
            cout << "Point Value: " << item->getPointValue() << endl;
            cout << endl;
            ++itemNum;
        }
        int choice1, choice2;
        cout << "Choose two items from the menu (1-5): ";
        cin >> choice1 >> choice2;
        player->getPlayerItems().push_back(itemBox->getBoxItems()[choice1]);
        player->getPlayerItems().push_back(itemBox->getBoxItems()[choice2]);
        cout << "Items usage has been implemented" << endl;

        // remove box once it has been used
        delete itemBox;
        itemBox = nullptr;
        hasItem = false;
    }
}

void Cell::computerOpenBox(Computer* computer){
    hasItem = true;
    if (itemBox == nullptr)
    {
        return;
    }
    else if (hasItem && itemBox != nullptr)
    {
        int itemNum = 1;
        for (MasterList* item : itemBox->getBoxItems())
        {
            cout << "Item Type: " << item->getItemType() << endl;
            cout << "Price: " << item->getPrice() << endl;
            cout << "Point Value: " << item->getPointValue() << endl;
            cout << endl;
            ++itemNum;
        }
        // Computer randomly chooses 2 from the box
        int randChoice1 = (rand() % 5) + 1;
        int randChoice2 = (rand() % 5) + 1;
        cout << "Computer randomly chooses 2 from the box: ";
        cin >> randChoice1 >> randChoice2;
        computer->getComputerItems().push_back(itemBox->getBoxItems()[randChoice1]);
        computer->getComputerItems().push_back(itemBox->getBoxItems()[randChoice2]);

        cout << "Items usage has been implemented" << endl;
        // remove box once it has been used
        delete itemBox;
        itemBox = nullptr;
        hasItem = false;
    }
}

void Cell::checkWin(){
    if (itemBox == 0 || getPlayer()->getTokenBudget() == 0 || getComputer()->getTokenBudget() == 0)
    {
        if (getPlayer()->getTokenBudget() > getComputer()->getTokenBudget())
        {
            cout << "Congratulations! You won!" << endl;
        }
        else
        {
            cout << "Computer won" << endl;
        }

    }
    // displayMenu();
}

std::ostream& operator<<(std::ostream& output, Cell& displaySummary){
    output << setw(10) << std::left << "Budget: " 
           << setw(20) << std::right << displaySummary.getPlayer()->getTokenBudget() << std::endl;
    output << setw(10) << std::left << "Points: " 
           << setw(20) << std::right << displaySummary.getPlayer()->getTokenPoints() << std::endl;

    output << setw(10) << std::left << "Budget: " 
           << setw(20) << std::right << displaySummary.getComputer()->getTokenBudget() << std::endl;
    output << setw(10) << std::left << "Points: " 
           << setw(20) << std::right << displaySummary.getComputer()->getTokenPoints() << std::endl;
    return output;
}