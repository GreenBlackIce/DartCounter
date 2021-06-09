#include "GameController.h"
#include <algorithm>

Dart::GameController::GameController(int startingScore)
	:gameScore(startingScore)
{
}

void Dart::GameController::play()
{
	while (gameScore != 0)
	{
		int tmpScore = gameScore;
		int* readScoree = readScore();
		gameScore = gameScore - *readScoree;
		if (gameScore > 0)
		{
			std::cout << "Score left: " << gameScore << std::endl;
		}
		if (gameScore < 0)
		{
			gameScore = tmpScore;
			std::cout << "BUST" << std::endl;
			std::cout << "Score left: " << gameScore << std::endl;
		}
		if (gameScore == 0)
		{
			std::cout << "Game shot" << std::endl;
		}
	}
}

int* Dart::GameController::readScore()
{
	//Test if gameScorer is a Finish
	if (gameScore <= 170)
	{
		bool isScoreBogey = std::find(invalidFinishes.begin(), invalidFinishes.end(), gameScore) != invalidFinishes.end();
		(isScoreBogey == true) ? std::cout << "This is a bogey number" << std::endl : std::cout << "This is a finish" << std::endl;
	}

	int readScore = input.readInt();
	//Test if score is a valid score between 0 and 180
	while (std::find(invalidScores.begin(), invalidScores.end(), readScore) != invalidScores.end() || (readScore > 180))
	{
		std::cout << "Impossible Score, please enter a possible Score" << std::endl;
		readScore = input.readInt();
	}
	return &readScore;
}



