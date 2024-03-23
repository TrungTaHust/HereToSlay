#include "BaseCard.h"
#include <iostream>

BaseCard::BaseCard() {
	challAble = 0;
	stealAble = 0;
	desAble = 0;
	sacAble = 0;
};

BaseCard::~BaseCard() {
};

std::string BaseCard::getName() {
	return name;
};

void BaseCard::Display() {

};

CardType BaseCard::getCardType() {
	return type;
}
