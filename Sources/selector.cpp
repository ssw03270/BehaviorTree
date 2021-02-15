#include<selector.hpp>
Selector::Selector(std::string _taskType, std::vector<Node> _children) : Node(_taskType) {
	children.resize((int)(_children.size()));
	std::copy(_children.begin(), _children.end(), children.begin());
}