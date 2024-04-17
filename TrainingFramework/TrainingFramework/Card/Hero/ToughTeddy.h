#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class ToughTeddy : public BaseHero {
public:
	ToughTeddy();
	~ToughTeddy();

	void Trigger() override;
	void Activate() override;
	void Show();
};