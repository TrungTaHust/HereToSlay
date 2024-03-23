#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheCloakedSage : public BaseLeader {
public:	
	TheCloakedSage();
	~TheCloakedSage();	

	void Trigger() override;
	void Activate() override;
	void Show();
};