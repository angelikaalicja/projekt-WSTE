#include "operating_functions.h"

#include <iostream>
#include <algorithm>

bool keepingPlaying()
{
    bool valid = true;

    do
    {

        std::string playAgain;
        std::cout << "Do you want to play again or at another level? y/n" << std::endl;
        std::cin >> playAgain;
        std::transform(playAgain.begin(), playAgain.end(), playAgain.begin(), tolower);

        if(playAgain == "y")
        {
            return true;
        }
        if(playAgain == "n")
        {
            return false;
        }
        if((playAgain != "y") & (playAgain != "n"))
        {
            std::cout << "Your choice is invalid. Choose y or n." << std::endl;
            valid = false;
        }

    } while(!valid);

    return false;
}


unsigned int selectLevel()
{
    bool valid = true;

    do
    {

        std::string level;
        std::cout << "Select level: 1/2/3" << std::endl;
        std::cin >> level;

        if(level == "1")
        {
            return 1;
        }
        if(level == "2")
        {
            return 2;
        }
        if(level == "3")
        {
            return 3;
        }
        if((level != "1") & (level != "2") & (level != "3"))
        {
            std::cout << "Your choice is invalid." << std::endl;
            valid = false;
        }

    } while(!valid);
}
