#include<sequencer.hpp>
#include<selector.hpp>
#include<action.hpp>

#include<iostream>

bool doorOpen = true;

bool isDoorOpen() {
	if (doorOpen) {
		std::cout << "door is opened" << std::endl;
		return true;
	}
	std::cout << "door is closed" << std::endl;
	return false;
}

bool closeDoor() {
	doorOpen = false;
	std::cout << "closed door" << std::endl;
	return true;
}

int main() {
	std::cout << "BT" << std::endl;

	Sequencer* rootDoor = new Sequencer();
	Sequencer* checkDoor = new Sequencer();

	Action* isDoorOpenNode = new Action(isDoorOpen);
	Action* closeDoorNode = new Action(closeDoor);
	
	rootDoor->addChild(checkDoor);

	checkDoor->addChild(isDoorOpenNode);
	checkDoor->addChild(closeDoorNode);

	rootDoor->Invoke();
}