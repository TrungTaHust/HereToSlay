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
	Player(Vector2 handPos, Vector2 fieldPos, Vector2 monsterPos);
	~Player();
	int getActionPoint() { return actionPoint; };
	void setActionPoint(int point);

	std::shared_ptr<Place> getPlayerHand() { return playerHand; };
	std::shared_ptr<Place> getPlayerField() { return playerField; };
	std::shared_ptr<Place> getPlayerMonster() { return playerMonster; };

	void AddCardToHand(std::shared_ptr<BaseCard> card);

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

	Vector2 m_handPos;
	Vector2 m_fieldPos;
	Vector2 m_monsterPos;
};