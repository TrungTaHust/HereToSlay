#pragma once
#include "../TrainingFramework/stdafx.h"
#include "../BaseCard.h"
#include <string>

class BaseLeader : public BaseCard {
public:
	BaseLeader();
	virtual ~BaseLeader();

	Job getJob() { return job; };	

protected:
	Job job;
};