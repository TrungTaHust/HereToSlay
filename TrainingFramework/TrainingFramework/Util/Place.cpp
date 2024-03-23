#include "Place.h"
#include <iostream>

std::vector<std::shared_ptr<BaseCard>> Place::getContain() {
	return cardVector;
}

void Place::setContain() {

}

std::vector<std::shared_ptr<BaseCard>> Place::getListHero() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Hero)
			result.push_back(it);
	}
	return result;
}

std::vector<std::shared_ptr<BaseCard>> Place::getListSpell() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Spell)
			result.push_back(it);
	}
	return result;
}

std::vector<std::shared_ptr<BaseCard>> Place::getListEquip() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Equip)
			result.push_back(it);
	}
	return result;
}

std::vector<std::shared_ptr<BaseCard>> Place::getListChallenge() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Challenge)
			result.push_back(it);
	}
	return result;
}

std::vector<std::shared_ptr<BaseCard>> Place::getListModifier() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Modify)
			result.push_back(it);
	}
	return result;
}

std::vector<std::shared_ptr<BaseCard>> Place::getListMonster() {
	std::vector<std::shared_ptr<BaseCard>> result;

	for (auto it : cardVector) {
		if (it->getCardType() == CardType::Monster)
			result.push_back(it);
	}
	return result;
}

std::shared_ptr<BaseCard> Place::getRandomCard() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> dis(0, cardVector.size() - 1);

	int randomIndex = dis(gen);

	return cardVector[randomIndex];
}

void Place::addCard(std::shared_ptr<BaseCard> card) {
	cardVector.push_back(card);
}

void Place::removeCard(std::shared_ptr<BaseCard> card) {
	for (auto it = cardVector.begin(); it != cardVector.end(); ++it) {
		if ((*it)->getName() == card->getName()) {
			it = cardVector.erase(it); 
		}
	}
}