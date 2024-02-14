#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include "BankFunctions.h"

std::vector<int> coinExchange(std::vector<int> coins) {

    // Input coins vector:
    // [0] = Copper, [1] = Silver, [2] = Gold, [3] = Platinum

    int total_copper = (coins[0]) + (coins[1] * 10) + (coins[2] * 100) + (coins[3] * 1000);
    int tax = int(floor(total_copper * 0.03));
    total_copper -= tax;

    int gold = (total_copper / 100);
    int silver = ((total_copper % 100) / 10);
    int copper = (total_copper % 10);

    std::vector<int> consolidated_coins = {copper, silver, gold, tax};
    return consolidated_coins;

    // Return coins vector:
    // [0] = Copper, [1] = Silver, [2] = Gold, [3] = Tax in copper coins
}