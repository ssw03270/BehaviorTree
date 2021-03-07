#pragma once
#ifndef ACTION
#define ACTION

#include<node.hpp>

class Action : public Node {
public:
	Action(void (*function)()) {
		mFunction = function;
	}
	virtual bool Invoke() override {
		return mFunction;
	}
private:
	void (*mFunction)();
};

#endif // !ACTION
