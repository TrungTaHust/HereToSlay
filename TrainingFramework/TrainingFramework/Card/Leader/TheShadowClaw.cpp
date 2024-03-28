#include "../TrainingFramework/stdafx.h"
#include "TheShadowClaw.h"

TheShadowClaw::TheShadowClaw() {
	job = Job::Thief;
	name = "The Shadow Claw";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_shadow_claw");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheShadowClaw::~TheShadowClaw() {
	
}

void TheShadowClaw::Trigger() {

}

void TheShadowClaw::Activate() {

}

void TheShadowClaw::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}