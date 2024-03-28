#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheProtectingHorn : public BaseLeader {
public:	
	TheProtectingHorn();
	~TheProtectingHorn();

	void Trigger() override;
	void Activate() override;
	void Show();
};