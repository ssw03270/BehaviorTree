#ifndef __NODE__
#define __NODE__

#include<string>

class Node {
private:
	std::string taskType;
	bool returnValue;
public:
	Node();
	Node(std::string _taskTyp);
	bool getValue();
};

#endif // !__NODE__
