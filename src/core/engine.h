#pragma once

#include <iostream>
#include "raylib.h"
#include "../definitions.h"

class Engine
{
private:
	// Private data members
private:
	// Private methods
	void _initializeWindow(const int &width, const int &height, const char *name);
	void _run();
	void _drawGrid();
public:
	// Public Methods
	Engine();
	~Engine();
};