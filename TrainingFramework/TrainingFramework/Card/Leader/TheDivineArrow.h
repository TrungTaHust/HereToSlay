#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheDivineArrow : public BaseLeader {
public:	
	TheDivineArrow();
	~TheDivineArrow();

	void Trigger() override;
	void Activate() override;
	void Show();
};