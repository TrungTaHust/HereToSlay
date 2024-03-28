#include "../TrainingFramework/stdafx.h"
#include "TheFistOfReason.h"

TheFistOfReason::TheFistOfReason() {
	job = Job::Fighter;
	name = "The Fist Of Reason";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_first_of_reason");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheFistOfReason::~TheFistOfReason() {
	
}

void TheFistOfReason::Trigger() {

}

void TheFistOfReason::Activate() {

}

void TheFistOfReason::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}