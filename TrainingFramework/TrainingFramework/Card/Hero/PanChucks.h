#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class PanChuck : public BaseHero {
public:
	PanChuck();
	~PanChuck();

	void Trigger() override;
	void Activate() override;
	void Show();
};