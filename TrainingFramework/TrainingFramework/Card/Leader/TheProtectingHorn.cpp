#include "../TrainingFramework/stdafx.h"
#include "TheProtectingHorn.h"

TheProtectingHorn::TheProtectingHorn() {
	job = Job::Guardian;
	name = "The Protecting Horn";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_protecting_horn");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheProtectingHorn::~TheProtectingHorn() {
	
}

void TheProtectingHorn::Trigger() {

}

void TheProtectingHorn::Activate() {

}

void TheProtectingHorn::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}