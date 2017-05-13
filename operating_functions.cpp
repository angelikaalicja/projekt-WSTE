#include "operating_functions.h"

#include <iostream>
#include <algorithm>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>

bool keepingPlaying()
{
	bool valid = true;

	do
	{

		std::string playAgain;
		std::cout << "Do you want to play again or at another level? y/n"
				<< std::endl;
		std::cin >> playAgain;
		std::transform(playAgain.begin(), playAgain.end(), playAgain.begin(),
				tolower);

		if (playAgain == "y")
		{
			return true;
		}
		if (playAgain == "n")
		{
			return false;
		}
		if ((playAgain != "y") && (playAgain != "n"))
		{
			std::cout << "Your choice is invalid. Choose y or n." << std::endl;
			valid = false;
		}

	} while (!valid);

	return false;
}

std::string selectLevel()
{
	std::string level;
	std::cout << "Select level: 1/2/3" << std::endl;
	std::cin >> level;
	std::cout << level << std::endl;
	return level;
}
