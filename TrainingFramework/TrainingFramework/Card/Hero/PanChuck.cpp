#include "../TrainingFramework/stdafx.h"
#include "PanChucks.h"

PanChuck::PanChuck() {
	job = Job::Fighter;
	name = "Pan Chuck";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_pan_chuck");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

PanChuck::~PanChuck() {
	
}

void PanChuck::Trigger() {

}

void PanChuck::Activate() {

}

void PanChuck::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}