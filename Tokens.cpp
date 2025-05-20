#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <iomanip>

#include "Tokens.h"
#include "MasterList.h"
#include "NormalItems.h"
#include "PowerUps.h"
#include "Debuffs.h"
#include "ItemBox.h"
#include "Game.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

// Constructor
Tokens::Tokens() : tokenName(), tokenBudget(0), tokenPoints(0), inventory() {}

Tokens::Tokens(const string& aTokenName, int aTokenBudget, int theTokenPoints) {
    setTokenName(aTokenName);
    setTokenBudget(aTokenBudget);
    setTokenPoints(theTokenPoints);
}

// Getters
string Tokens::getTokenName() const {
    return tokenName;
}

int Tokens::getTokenBudget() const {
    return tokenBudget;
}

int Tokens::getTokenPoints() const {
    return tokenPoints;
}

vector<string> Tokens::getInventory() const{
    return inventory;
}

// Setters
void Tokens::setTokenName(const string& aTokenName) {
    tokenName = aTokenName;
}

void Tokens::setTokenBudget(int aTokenBudget) {
    tokenBudget = aTokenBudget;
}

void Tokens::setTokenPoints(int theTokenPoints) {
    tokenPoints = theTokenPoints;
}

void Tokens::setInventory(const vector<string>& myInventory) {
    inventory = myInventory;
}