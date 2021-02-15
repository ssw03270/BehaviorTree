#include<decorator.hpp>
Decorator::Decorator(std::string _taskType, Node _child, float _condition) : Node(_taskType) {
	child = _child;
	condition = _condition;
}
