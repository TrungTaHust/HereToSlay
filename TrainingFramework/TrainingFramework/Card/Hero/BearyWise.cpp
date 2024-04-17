#include "../TrainingFramework/stdafx.h"
#include "BearyWise.h"

BearyWise::BearyWise() {
	job = Job::Fighter;
	name = "Beary Wise";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_beary_wise");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

BearyWise::~BearyWise() {
	
}

void BearyWise::Trigger() {

}

void BearyWise::Activate() {

}

void BearyWise::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}