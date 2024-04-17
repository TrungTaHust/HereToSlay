#include "../TrainingFramework/stdafx.h"
#include "ToughTeddy.h"

ToughTeddy::ToughTeddy() {
	job = Job::Fighter;
	name = "Tough Teddy";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_tough_teddy");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

ToughTeddy::~ToughTeddy() {
	
}

void ToughTeddy::Trigger() {

}

void ToughTeddy::Activate() {

}

void ToughTeddy::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}