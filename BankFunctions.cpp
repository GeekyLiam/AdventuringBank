#include <iostream>
#include <string>
#include <cmath>
#include "BankFunctions.h"

int taxCalc(std::string coinType, int coinAmount) {

    // Returns copper amount to be taxed

    int tax = 0;
    int copper = 0;

    if (coinType == "Copper") {
        tax = int(floor(coinAmount * 0.03));
        return tax;
    }

    else if (coinType == "Silver") {
        copper = (coinAmount * 10);
        tax = int(floor(copper * 0.03));
        return tax;
    }

    else if (coinType == "Gold") {
        copper = (coinAmount * 100);
        tax = int(floor(copper * 0.03));
        return tax;
    }

    else if (coinType == "Platinum") {
        copper = (coinAmount * 1000);
        tax = int(floor(copper * 0.03));
        return tax;
    }

    else {
        std::cout << "Error! coinType not recognized.";
        return 0;
    }
}

void coinExchange(int inputCoinArray[], int outputCoinArray[]) {

}