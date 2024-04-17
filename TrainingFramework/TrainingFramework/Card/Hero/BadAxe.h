#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class BadAxe : public BaseHero {
public:	
	BadAxe();
	~BadAxe();

	void Trigger() override;
	void Activate() override;
	void Show();
};