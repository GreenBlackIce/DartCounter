#include "sqlite3.h"
#include "GameController.h"

int main()
{
	//std::cout << "Enter Starting Score: ";
	Dart::GameController gm(501);
	int start = 501;
	std::cout << gm.getCurrentScore();
	return 0;
}