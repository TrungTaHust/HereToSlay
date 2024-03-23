#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../BaseCard.h"
#include <string>

class BaseLeader : public BaseCard {
public:
	BaseLeader();
	virtual ~BaseLeader();

	Job getJob() { return job; };
	virtual void Trigger() = 0;
	virtual void Activate() = 0;

protected:
	Job job;
};