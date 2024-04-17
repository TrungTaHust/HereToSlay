#include "../TrainingFramework/stdafx.h"
#include "QiBear.h"

QiBear::QiBear() {
	job = Job::Fighter;
	name = "Qi Bear";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_qi_bear");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

QiBear::~QiBear() {
	
}

void QiBear::Trigger() {

}

void QiBear::Activate() {

}

void QiBear::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}