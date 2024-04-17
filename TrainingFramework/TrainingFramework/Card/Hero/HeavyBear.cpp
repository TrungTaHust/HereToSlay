#include "../TrainingFramework/stdafx.h"
#include "HeavyBear.h"

HeavyBear::HeavyBear() {
	job = Job::Fighter;
	name = "Heavy Bear";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_heavy_bear");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

HeavyBear::~HeavyBear() {
	
}

void HeavyBear::Trigger() {

}

void HeavyBear::Activate() {

}

void HeavyBear::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}