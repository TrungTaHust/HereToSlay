#include "../TrainingFramework/stdafx.h"
#include "GSPlay.h"
#include "GSOver.h"
 
std::vector<int> Globals::topScores;
std::vector<int> soundChannelStates;

GSPlay::GSPlay()
{
	m_stateType = STATE_PLAY;
}

GSPlay::~GSPlay()
{
}

void GSPlay::Init()
{	
	auto card = std::make_shared<TheDivineArrow>();
	m_cards = std::dynamic_pointer_cast<BaseCard>(card);
	card->Show();
	m_cards->Set2DPos(400, 400);
	//m_cards->SetSize(400, 600);
	m_cards->SetRotate(Vector3(0, 0, 0));
}

void GSPlay::Exit()
{
	StopSoundByName("explosion", 2);
	StopSoundByName("more", 3);
	StopSoundByName("freeze", 4);
	StopSoundByName("fire", 5);
	StopSoundByName("more", 6);
	StopSoundByName("play", 7);
	StopSoundByName("reload", 8);
}

void GSPlay::Pause()
{	
	//PauseSoundByName("play");
	for (int i = 2; i < 9; i++) {
		if (Mix_Playing(i)) {
			Mix_Pause(i);
			soundChannelStates.push_back(i);
		}
	}
}

void GSPlay::Resume()
{
	//ResumeSoundByName("play");
	for (int channel : soundChannelStates) {
		Mix_Resume(channel);
	}
	soundChannelStates.clear();
}

void GSPlay::Update(float deltaTime)
{	
}

void GSPlay::Draw()
{				
	m_cards->Draw();
}

void GSPlay::HandleEvents()
{
}

void GSPlay::HandleKeyEvents(int key, bool bIsPressed)
{
}

void GSPlay::HandleTouchEvents(float x, float y, bool bIsPressed)
{	
}

void GSPlay::HandleMouseMoveEvents(float x, float y)
{
}