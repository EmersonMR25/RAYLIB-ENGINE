#include "engine.h"

Engine::Engine() {
	std::cout << "Hello World" << std::endl;

	_initializeWindow(static_cast<int>(_SCREEN_WIDTH), 
					  static_cast<int>(_SCREEN_HEIGHT), 
					  _ENGINE_TITLE);
	_run();

}	//Engine::Engine();

Engine::~Engine() {
	std::cout << "Bye World" << std::endl;
}	//Engine::~Engine();

void Engine::_initializeWindow(const int& width, const int& height, const char* name) {
	InitWindow(width, height, name);
	SetTargetFPS(_TARGET_FPS);
}	//Engine::_initializeWindow()

void Engine::_run() {
	
	while (!WindowShouldClose()) {
		_handleEvents();
		BeginDrawing();
		ClearBackground(RAYWHITE);
		_drawGrid();
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

}	//Engine::_run()

void Engine::_drawGrid() {
	// Draw Editing Area (Background)
	DrawRectangle(_OFFSET, _OFFSET, _VIEWER_WIDTH, _VIEWER_HEIGHT, RAYWHITE);
	DrawRectangleLines(_OFFSET, _OFFSET, _VIEWER_WIDTH, _VIEWER_HEIGHT, GRAY);

	// Draw Grid Cells Based on State
	for (int row = 0; row < _GRID_ROWS; row++) {
		for (int col = 0; col < _GRID_COLS; col++) {
			int x = _OFFSET + (col * _CELL_SIZE);
			int y = _OFFSET + (row * _CELL_SIZE);

			// Determine color based on grid state (1 = Green, 0 = White)
			Color cellColor = (_grid[row][col] == 1) ? GREEN : WHITE;
			DrawRectangle(x, y, _CELL_SIZE, _CELL_SIZE, cellColor);
		}
	}

	// Draw Grid Lines
	for (int row = 0; row <= _GRID_ROWS; row++) {
		int y = _OFFSET + (row * _CELL_SIZE);
		DrawLine(_OFFSET, y, _OFFSET + _VIEWER_WIDTH, y, GRAY);
	}

	for (int col = 0; col <= _GRID_COLS; col++) {
		int x = _OFFSET + (col * _CELL_SIZE);
		DrawLine(x, _OFFSET, x, _OFFSET + _VIEWER_HEIGHT, GRAY);
	}
}	// Engine::_drawGrid()

void Engine::_handleEvents() {
	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
		Vector2 mousePosition = GetMousePosition();

		// Adjust for _OFFSET to correctly map to grid
		int col = (mousePosition.x - _OFFSET) / _CELL_SIZE;
		int row = (mousePosition.y - _OFFSET) / _CELL_SIZE;

		// Ensure the click is inside the grid bounds
		if (row >= 0 && row < _GRID_ROWS && col >= 0 && col < _GRID_COLS) {
		_grid[row][col] = (_grid[row][col] == 0) ? 1 : 0;
		}
	}
}	//Engine::_handleEvents()