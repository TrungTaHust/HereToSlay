#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class HeavyBear : public BaseHero {
public:
	HeavyBear();
	~HeavyBear();

	void Trigger() override;
	void Activate() override;
	void Show();
};