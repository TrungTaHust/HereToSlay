#include "BaseHero.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class QiBear : public BaseHero {
public:
	QiBear();
	~QiBear();

	void Trigger() override;
	void Activate() override;
	void Show();
};