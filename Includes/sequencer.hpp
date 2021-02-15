#ifndef __SEQUENCER__
#define __SEQUENCER__

#include<node.hpp>
#include<vector>

class Sequencer : public Node {
private:
	std::vector<Node> children;

public:
	Sequencer(std::string _taskType, std::vector<Node> _children);
};

#endif // !__SEQUENCER__
