#include<action.hpp>
Action::Action(std::string _taskType, std::string _actionName) : Node(_taskType) {
	actionName = _actionName;
}