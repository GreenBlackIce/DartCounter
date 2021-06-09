#include "Input.h"

const int Dart::Input::readInt() const
{
	int roundScore;
	std::cin >> roundScore;

	while (!std::cin.good())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input, please enter a number" << std::endl;
		std::cin >> roundScore;
	}
	return roundScore;
}

const int Dart::Input::read3Int() const
{
	int roundScore = 0;
	
	for (auto i = 0; i < 3; ++i)
	{
		int tmpScore;
		std::cin >> tmpScore;
		while (!std::cin.good())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input, please enter a number" << std::endl;
			std::cin >> tmpScore;
		}
		roundScore += tmpScore;
	}
	return roundScore;
}

const std::string Dart::Input::readString() const
{
	std::string commandString;
	std::cin >> commandString;

	return commandString;
}
