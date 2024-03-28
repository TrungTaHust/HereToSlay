#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheShadowClaw : public BaseLeader {
public:	
	TheShadowClaw();
	~TheShadowClaw();

	void Trigger() override;
	void Activate() override;
	void Show();
};