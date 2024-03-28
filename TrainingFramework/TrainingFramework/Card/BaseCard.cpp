#include "BaseCard.h"
#include <iostream>

BaseCard::BaseCard() {
	m_model = ResourceManager::GetInstance()->GetModelPointerByName("Sprite2D");
	m_shader = ResourceManager::GetInstance()->GetShaderPointerByName("TriangleShader");

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


CardType BaseCard::getCardType() {
	return type;
}
