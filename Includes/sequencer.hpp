#pragma once
#ifndef SEQUENCER
#define SEQUENCER

#include<composite_node.hpp>

class Sequencer : public CompostieNode {
public:
	virtual bool Invoke() override {
		for (const auto& node : getChildren()) {
			if (!node->Invoke()) {
				return false;
			}
		}
		return true;
	}
};

#endif // !SEQUENCER
