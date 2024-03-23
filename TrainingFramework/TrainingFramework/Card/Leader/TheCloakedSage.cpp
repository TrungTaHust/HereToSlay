#include "../TrainingFramework/stdafx.h"
#include "TheCloakedSage.h"

TheCloakedSage::TheCloakedSage() {
	job = Job::Wizard;
	name = "The Cloaked Sage";
	auto model = ResourceManager::GetInstance()->GetModelPointerByName("Sprite2D");
	m_model = model;
	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("the_cloaked_sage");
	m_shader = ResourceManager::GetInstance()->GetShaderPointerByName("TriangleShader");
	
	
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