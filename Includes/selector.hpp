#pragma once
#ifndef SELECTOR
#define SELECTOR

#include<composite_node.hpp>

class Selector : public CompostieNode {
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

#endif // !SELECTOR
