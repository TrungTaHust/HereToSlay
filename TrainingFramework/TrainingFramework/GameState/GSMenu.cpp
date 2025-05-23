﻿#include "../TrainingFramework/stdafx.h"
#include "GSMenu.h"
#include "../TrainingFramework/GameManager/SceneManager.h"
#include "../TrainingFramework/GameManager/ResourceManager.h"
#include "../TrainingFramework/Globals.h"
#include "GSMachine.h"
#include "../TrainingFramework/GameObject/Text.h"
//#include "../Resources/Fonts/orbitron/"

GSMenu::GSMenu()
{
	m_stateType = STATE_MENU;
}

GSMenu::~GSMenu()
{
}

void GSMenu::Init()
{
	m_menuBackground = SceneManager::GetInstance()->GetObjectByID("menu_background");
	m_buttonList.push_back(SceneManager::GetInstance()->GetButtonByID("button_start"));
	m_buttonList.push_back(SceneManager::GetInstance()->GetButtonByID("button_exit"));
	m_buttonList.push_back(SceneManager::GetInstance()->GetButtonByID("long_button_tutorial"));
	
	AddSoundByName("menu");
	PlaySoundByName("menu", 1, -1);
}

void GSMenu::Exit()
{
	StopSoundByName("menu", 1);
}

void GSMenu::Pause()
{
	PauseSoundByName("menu");
}

void GSMenu::Resume()
{
	ResumeSoundByName("menu");
}

void GSMenu::Update(float deltaTime)
{
	for (auto& chara : m_someAnim)
	{
		chara->Update(deltaTime);
	}
}

void GSMenu::Draw()
{
	m_menuBackground->Draw();	
	for (auto& button : m_buttonList)
	{
		button->Draw();
	}
	for (auto& chara : m_someAnim)
	{
		chara->Draw();
	}
}

void GSMenu::HandleEvents()
{
}

void GSMenu::HandleKeyEvents(int key, bool bIsPressed)
{
}

void GSMenu::HandleTouchEvents(float x, float y, bool bIsPressed)
{
	for (auto& button : m_buttonList)
	{
		if (button->HandleTouchEvent(x, y, bIsPressed))
		{
			switch (button->m_type)
			{
			case BUTTON_START:
				GSMachine::GetInstance()->PushState(StateType::STATE_PLAY);
				break;
			case BUTTON_EXIT:
				exit(0);
			case BUTTON_TUTORIAL:
				GSMachine::GetInstance()->PushState(StateType::STATE_TUTORIAL);
			}
		};
	}
}

void GSMenu::HandleMouseMoveEvents(float x, float y)
{
	for (auto& button : m_buttonList)
	{
		button->HandleMoveEvent(x, y);
	}
}