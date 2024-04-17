#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../BaseCard.h"
#include <string>

class BaseHero : public BaseCard {
public:
	BaseHero();
	virtual ~BaseHero();

	Job getJob() { return job; };	

protected:
	Job job;
};