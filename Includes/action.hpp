#pragma once
#ifndef ACTION
#define ACTION

#include<node.hpp>

class Action : public Node {
public:
	Action(bool (*function)()) {
		mFunction = function;
	}
	virtual bool Invoke() override {
		return mFunction;
	}
private:
	bool (*mFunction)();
};

#endif // !ACTION
