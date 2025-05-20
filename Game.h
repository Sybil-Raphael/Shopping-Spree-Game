/*
Summary: Project 2 - Shopping Spree
Author: Sybil Raphael
Created: 4/18/24
Due Date: 4/26/24
Modifications: 
4/18: worked on Game 
4/19: worked on MasterList 
4/21: MasterList & ItemBox 
4/22: MasterList & ItemBox 
4/23: ItemBox 
4/24: how to print itembox on grid 
4/25: get player on grid 
4/26: get compter on grid and include item use 
4/28: winner check and summary display 
4/29: final touches
*/

#ifndef GAME_H
#define GAME_H

#include <array>
    using std::array;
#include "ItemBox.h"
#include "Cell.h"

/*function definitions
void printGrid();
// receives nothing
// returns a 5x5 grid to start game

void displayMenu();
// receives nothing
// returns displays menu choices (1. Start Game 2. Play Again 3. Quit)

void startGame();
// receives nothing
// returns menu to prompt the start of the game
*/ 

class Game{
// private
private:
    array<array<Cell*, 5>, 5> grid;

// public functions
public:
    Game();
    void printGrid();
    void displayMenu();
    void startGame();
};

#endif