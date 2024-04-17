#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class BearyWise : public BaseHero {
public:
	BearyWise();
	~BearyWise();

	void Trigger() override;
	void Activate() override;
	void Show();
};