#include "BaseLeader.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include <iostream>

class TheCharismaticSong : public BaseLeader {
public:	
	TheCharismaticSong();
	~TheCharismaticSong();

	void Trigger() override;
	void Activate() override;
	void Show();
};