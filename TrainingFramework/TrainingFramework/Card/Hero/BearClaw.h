#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class BearClaw : public BaseHero {
public:
	BearClaw();
	~BearClaw();

	void Trigger() override;
	void Activate() override;
	void Show();
};