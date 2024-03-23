#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../GameObject/Object.h"
#include "../Card/BaseCard.h"
#include <string>
#include <memory>
#include <random>

class Place {
public:
	std::vector<std::shared_ptr<BaseCard>> getContain();
	void setContain();
	std::vector<std::shared_ptr<BaseCard>> getListHero();
	std::vector<std::shared_ptr<BaseCard>> getListSpell();
	std::vector<std::shared_ptr<BaseCard>> getListEquip();
	std::vector<std::shared_ptr<BaseCard>> getListChallenge();
	std::vector<std::shared_ptr<BaseCard>> getListModifier();
	std::vector<std::shared_ptr<BaseCard>> getListMonster();
	std::shared_ptr<BaseCard> getRandomCard();

	void addCard(std::shared_ptr<BaseCard> card);
	void removeCard(std::shared_ptr<BaseCard> card);


private:
	std::vector<std::shared_ptr<BaseCard>> cardVector;
};