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

#include "Game.h"
#include "ItemBox.h"
#include "Cell.h"
#include "Tokens.h"
#include "Player.h"
#include "Computer.h"
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

Game::Game(){
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            grid[i][j] = new Cell();
        }
    }
}

void Game::printGrid(){
    const int rows = 5;
    const int cols = 5;

    // top border of the grid
    cout << "+---+---+---+---+---+" << endl;

    // Print the grid contents
    for (int i = 0; i < rows; ++i) {
        cout << "|";
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] != nullptr && grid[i][j]->getPlayer() != nullptr) {
                cout << " P ";
            }
            else if (grid[i][j] != nullptr && grid[i][j]->getComputer() != nullptr) {
                cout << " C ";
            }
            else if (grid[i][j] != nullptr && grid[i][j]->getHasItem()) {
                cout << " * ";
            }
            else {
                cout << "   ";
            }
            cout << "|";
        }
        cout << endl;
        // between each of the rows
        cout << "+---+---+---+---+---+" << endl;
    }
}