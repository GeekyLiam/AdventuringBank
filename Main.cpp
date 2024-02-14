#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "BankFunctions.h"

int gameLoop() {

    bool game_run = true;

    std::string day[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    int time_hour = 0;
    int i = 0;

    while (game_run) {

        if (i == 7) {
            i = 0;
        }

        std::string current_day = day[i];
        time_hour += 1;

        if (time_hour == 24) {
            time_hour = 0;
            i++;
        }

        std::cout << current_day << ", " << time_hour;

        std::this_thread::sleep_for(std::chrono::milliseconds(200));

        system("CLS");
    }

    return 0;
}

int main()
{
    gameLoop();
}