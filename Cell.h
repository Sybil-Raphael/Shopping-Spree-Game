#ifndef CELL_H
#define CELL_H

#include "ItemBox.h"
#include "Player.h"
#include "Computer.h"

/*function definitions
void resetPlayer();
// recieves nothing
// returns nothing

void resetComputer();
// receives nothing
// returns nothing

void playerOpenBox(Player* player);
// receives Player* player
// returns nothing

void computerOpenBox(Computer* computer);
// recieves Computer* computer
// returns nothing

void checkWin();
// receives nothing
// returns winner if there is one

friend std::ostream& operator<<(std::ostream& output, Cell& displaySummary);
// receives output and Cell&
// returns summary of the winner
*/ 

class Cell{
// private
private: 
    bool hasItem = false;
    ItemBox* itemBox;
    Player* player = nullptr;
    Computer* computer = nullptr;

public:
    // default constructor
    Cell();
    
    // getters 
    bool getHasItem();
    ItemBox* getItemBox();
    Player* getPlayer();
    Computer* getComputer();

    // setters 
    void setHasItem(bool umHasItem); 
    void setItemBox(ItemBox* theItemBox); 
    void setPlayer(Player* thePlayer); 
    void setComputer(Computer* theComputer);

    // functions 
    void resetPlayer(); 
    void resetComputer(); 
    void playerOpenBox(Player* player); 
    void computerOpenBox(Computer* computer); 
    void checkWin();

    friend std::ostream& operator<<(std::ostream& output, Cell& displaySummary);
};

#endif