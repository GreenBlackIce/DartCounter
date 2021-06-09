#pragma once
#include "Input.h"
#include <list>


namespace Dart
{

	class GameController
	{
	public:
		GameController(int startingScore);

	public:
		void play();
		int* readScore();


		inline const int getCurrentScore() const { return gameScore; };

	private:
		inline void setStartingScore(int* startingScore) { gameScore = *startingScore; }

		int gameScore;
		Input input;
		std::list<int> invalidScores = { 163, 166, 169, 172, 173, 175, 176, 178, 179 };
		std::list<int> invalidFinishes = { 169, 168, 166, 165, 163, 162, 159 };
	};
}