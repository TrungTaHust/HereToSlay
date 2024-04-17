#include "Player.h"
#include <iostream>

Player::Player(Vector2 handPos, Vector2 fieldPos, Vector2 monsterPos) {
	m_handPos = handPos;
	m_fieldPos = fieldPos;
	m_monsterPos = monsterPos;

	playerHand = std::make_shared<Place>();
	playerField = std::make_shared<Place>();
	playerMonster = std::make_shared<Place>();
	playerLeader = std::make_shared<BaseCard>();

};
Player::~Player() {

}

void Player::AddCardToHand(std::shared_ptr<BaseCard> card) {
	playerHand->addCard(card);
}

void Player::setActionPoint(int point) {

}

void Player::Attack() {

}

void Player::Challenge() {

}

void Player::Modify() {

}

int Player::Roll() {
	return 6;
}

void Player::Show() {

}

int Player::getTotalJob() {
	int totalJob = 0;
	std::vector<bool> jobChecked;
	for (auto card : playerField->getContain()) 
	{
		if (card->getCardType() == CardType::Hero) 
		{
			auto heroCard = std::dynamic_pointer_cast<BaseLeader>(card);
			Job job = heroCard->getJob();
			if (!jobChecked[job]) {
				totalJob++;
				jobChecked[job] == true;
			}
		}
	}
	return totalJob;
}

int Player::getTotalMonster() {
	int totalMonster = playerMonster->getContain().size();
	return totalMonster;
}