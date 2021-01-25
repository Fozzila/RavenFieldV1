#pragma once
#ifndef FRAMEWORK_H or framework_H
	#include <Windows.h>
	#include <vector>
	#include <math.h>
	#include <iostream>
	#include <thread>
	#include <unordered_map>
	#include <algorithm>
	#include <vector>
	#include "keys.h"
	#include "main.h"
	#include "offsets.h"
#include <string>
#endif 
#define string std::string
#define toString(x) std::to_string(x)
namespace frame
{
	void closeMsg();
	void warn(const char* warn);

	playerclass* player();
	void log(string xprint);
	
}