#ifndef TOKENS_H
#define TOKENS_H

#include <iostream>
#include <string>
#include <vector>

class Tokens {
    // Private variables
protected:
    std::string tokenName;
    int tokenBudget;
    int tokenPoints;
    std::vector<std::string> inventory;

    // Public functions
public:
    // Constructor
    Tokens();
    Tokens(const std::string& aTokenName, int aTokenBudget, int theTokenPoints);

    // Getters
    std::string getTokenName() const;
    int getTokenBudget() const;
    int getTokenPoints() const;
    std::vector<std::string> getInventory() const;

    // Setters
    void setTokenName(const std::string& aTokenName);
    void setTokenBudget(int aTokenBudget);
    void setTokenPoints(int theTokenPoints);
    void setInventory(const std::vector<std::string>& myInventory);
};

#endif