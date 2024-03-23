#include "Player.h"
#include <iostream>

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