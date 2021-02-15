#ifndef __DECORATOR__
#define __DECORATOR__

#include<node.hpp>

class Decorator : public Node {
private:
	Node child;
	float condition;
public:
	Decorator(std::string _taskType, Node _child, float _condition);
};

#endif // !__DECORATOR__
