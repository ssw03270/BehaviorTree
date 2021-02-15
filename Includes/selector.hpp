#ifndef __SELECTOR__
#define __SELECTOR__

#include<node.hpp>
#include<vector>

class Selector : public Node {
private:
	std::vector<Node> children;

public:
	Selector(std::string _taskType, std::vector<Node> _children);
};

#endif // !__SELECTOR__
