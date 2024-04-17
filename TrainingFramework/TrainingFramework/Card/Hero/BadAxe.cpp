#include "../TrainingFramework/stdafx.h"
#include "BadAxe.h"

BadAxe::BadAxe() {
	job = Job::Fighter;
	name = "Bad Axe";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_bad_axe");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

BadAxe::~BadAxe() {
	
}

void BadAxe::Trigger() {

}

void BadAxe::Activate() {

}

void BadAxe::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}