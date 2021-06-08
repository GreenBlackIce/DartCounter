#pragma once
#include "Input.h"

namespace Dart
{
	class GameController
	{
	public:
		GameController(int startingScore);

	public:
		inline const int getCurrentScore() const { return gameScore; };

	private:

		inline void setStartingScore(int* startingScore) { gameScore = *startingScore; }
	private:
		int gameScore;
	};
}