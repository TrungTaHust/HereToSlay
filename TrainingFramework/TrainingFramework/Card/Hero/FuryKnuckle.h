#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class FuryKnuckle : public BaseHero {
public:
	FuryKnuckle();
	~FuryKnuckle();

	void Trigger() override;
	void Activate() override;
	void Show();
};