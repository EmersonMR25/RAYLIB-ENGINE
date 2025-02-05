#pragma once

#include "raygui.h"
#include <iostream>
#include "raylib.h"
#include "../definitions.h"

class Engine
{
private:
	// Private data members
	static constexpr int _CELL_SIZE = 20;
	static constexpr int _GRID_COLS = _VIEWER_WIDTH / _CELL_SIZE;
	static constexpr int _GRID_ROWS = _VIEWER_HEIGHT / _CELL_SIZE;

	int _grid[_GRID_ROWS][_GRID_COLS] = { 0 };	// At compile time, not runtimes
private:
	// Private methods
	void _initializeWindow(const int& width, const int& height, const char* name);
	void _run();
	void _drawGrid();
	void _handleEvents();
public:
	// Public Methods
	Engine();
	~Engine();
};