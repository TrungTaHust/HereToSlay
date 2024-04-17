#include "../TrainingFramework/stdafx.h"
#include "BearClaw.h"

BearClaw::BearClaw() {
	job = Job::Fighter;
	name = "Bear Claw";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_bear_claw");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

BearClaw::~BearClaw() {
	
}

void BearClaw::Trigger() {

}

void BearClaw::Activate() {

}

void BearClaw::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}