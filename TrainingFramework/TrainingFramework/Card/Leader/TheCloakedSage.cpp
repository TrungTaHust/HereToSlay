#include "../TrainingFramework/stdafx.h"
#include "TheCloakedSage.h"

TheCloakedSage::TheCloakedSage() {
	job = Job::Wizard;
	name = "The Cloaked Sage";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_cloaked_sage");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheCloakedSage::~TheCloakedSage() {
	
}

void TheCloakedSage::Trigger() {

}

void TheCloakedSage::Activate() {

}

void TheCloakedSage::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}