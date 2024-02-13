#include <iostream>
#include <string>
#include <cmath>

int taxCalc(std::string coinType, int coinAmount) {

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

int main()
{
    int tax = taxCalc("Copper", 101);
    std::cout << tax;
}