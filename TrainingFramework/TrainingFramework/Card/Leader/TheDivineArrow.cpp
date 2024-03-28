#include "../TrainingFramework/stdafx.h"
#include "TheDivineArrow.h"

TheDivineArrow::TheDivineArrow() {
	job = Job::Ranger;
	name = "The Divine Arrow";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_divine_arrow");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheDivineArrow::~TheDivineArrow() {
	
}

void TheDivineArrow::Trigger() {

}

void TheDivineArrow::Activate() {

}

void TheDivineArrow::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}