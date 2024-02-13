#include <iostream>
#include <string>
#include "BankFunctions.h"

int main()
{
    int tax = taxCalc("Copper", 101);
    std::cout << tax;
}