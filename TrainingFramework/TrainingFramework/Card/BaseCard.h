#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../GameObject/Object.h"
#include <string>

enum CardType {Monster, Leader, Hero, Spell, Equip, Modify, Challenge};
enum Job {Bard, Wizard, Fighter, Ranger, Thief, Guardian};

class BaseCard : public Object {
public:
	BaseCard();
	virtual ~BaseCard();

	std::string getName();
	void Display();
	CardType getCardType();
protected:
	CardType type;
	std::string name;
	int challAble;
	int stealAble;
	int desAble;
	int sacAble;
};