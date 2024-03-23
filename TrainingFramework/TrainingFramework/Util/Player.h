#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../GameObject/Object.h"
#include "../Card/BaseCard.h"
#include "../Card/Leader/BaseLeader.h"
#include "Place.h"
#include <string>
#include <memory>
#include <random>

class Player {
public:
	int getActionPoint() { return actionPoint; };
	void setActionPoint(int point);

	void Attack();
	void Challenge();
	void Modify();
	int Roll();
	void Show();

	int getTotalJob();
	int getTotalMonster();

private:
	std::string name;
	std::shared_ptr<Place> playerHand;
	std::shared_ptr<Place> playerField;
	std::shared_ptr<Place> playerMonster;
	std::shared_ptr<BaseCard> playerLeader;
	int actionPoint;
};