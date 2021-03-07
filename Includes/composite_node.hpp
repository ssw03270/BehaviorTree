#pragma once
#ifndef COMPOSITE_NODE
#define COMPOSITE_NODE

#include<node.hpp>
#include<vector>

class CompostieNode : public Node {
public:
	void addChild(Node* node) {
		mChildren.push_back(node);
	}
	const std::vector<Node*>& getChildren() {
		return mChildren;
	}
private:
	std::vector<Node*> mChildren;
};

#endif // !COMPOSITE_NODE
