﻿#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

class Globals
{
public:
	static const int screenWidth = 1280;
	static const int screenHeight = 960;
	static std::vector<int> topScores;
	
};
#define KEY_UP				VK_UP
#define KEY_DOWN			VK_DOWN
#define KEY_LEFT			VK_LEFT
#define KEY_RIGHT			VK_RIGHT
#define KEY_1				'1'
#define KEY_2				'2'
#define KEY_3				'3'
#define KEY_4				'4'