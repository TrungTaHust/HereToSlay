#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheFistOfReason : public BaseLeader {
public:	
	TheFistOfReason();
	~TheFistOfReason();

	void Trigger() override;
	void Activate() override;
	void Show();
};