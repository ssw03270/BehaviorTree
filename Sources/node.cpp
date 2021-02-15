#include<node.hpp>
Node::Node() {
	taskType = "";
}
Node::Node(std::string _taskType) {
	taskType = _taskType;
}
bool Node::getValue() {
	return returnValue;
}
