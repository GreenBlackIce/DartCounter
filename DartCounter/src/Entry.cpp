#include "Entry.h"
#include "GameController.h"

void Dart::Entry::Start()
{
	Input* input = new Input();
	std::cout << "Enter starting score (e.g. 501, 301,...)" << std::endl;
	GameController* gm = new GameController(input->readInt());
	std::cout << "Start playing. For help type --help for additional commands" << std::endl;

	gm->play();

}
