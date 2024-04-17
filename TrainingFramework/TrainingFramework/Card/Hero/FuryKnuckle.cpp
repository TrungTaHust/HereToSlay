#include "../TrainingFramework/stdafx.h"
#include "FuryKnuckle.h"

FuryKnuckle::FuryKnuckle() {
	job = Job::Fighter;
	name = "Fury Knuckle";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("H_fury_knuckle");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

FuryKnuckle::~FuryKnuckle() {
	
}

void FuryKnuckle::Trigger() {

}

void FuryKnuckle::Activate() {

}

void FuryKnuckle::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}