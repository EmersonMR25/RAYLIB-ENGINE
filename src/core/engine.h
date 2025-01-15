#pragma once

#include <iostream>
#include "raylib.h"

class Engine
{
private:
	// Private data members
private:
	// Private methods
	void _initializeWindow(const int &width, const int &height, const char *name);
public:
	// Public Methods
	Engine();
	~Engine();
};