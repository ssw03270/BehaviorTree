#pragma once
#ifndef SEQUENCE
#define SEQUENCE

#include<composite_node.hpp>

class Sequence : public CompostieNode {
public:
	virtual bool Invoke() override {
		for (const auto& node : getChildren()) {
			if (node->Invoke()) {
				return true;
			}
		}
		return false;
	}
};

#endif // !SEQUENCE
