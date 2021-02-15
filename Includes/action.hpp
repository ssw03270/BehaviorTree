#ifndef __ACTION__
#define __ACTION__

#include<node.hpp>
#include<string>

class Action : public Node {
private:
	std::string actionName;

public:
	Action(std::string _taskType, std::string _actionName);
};

#endif // !__ACTION__
