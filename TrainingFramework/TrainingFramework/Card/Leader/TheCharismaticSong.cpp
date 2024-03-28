#include "../TrainingFramework/stdafx.h"
#include "TheCharismaticSong.h"

TheCharismaticSong::TheCharismaticSong() {
	job = Job::Bard;
	name = "The Charismatic Song";

	m_texture = ResourceManager::GetInstance()->GetTexturePointerByName("L_the_charismatic_song");

	m_height = 150;
	m_width = 100;
	SetScale(Vector3(m_width, m_height, 1.0f));

	
}

TheCharismaticSong::~TheCharismaticSong() {
	
}

void TheCharismaticSong::Trigger() {

}

void TheCharismaticSong::Activate() {

}

void TheCharismaticSong::Show() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Job: " << job << std::endl;
}