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
		BeginDrawing();
		ClearBackground(RAYWHITE);
		_drawGrid();
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

}	//Engine::_run()

void Engine::_drawGrid() {
	// Draw Horizontal
	for (size_t x = 0; x < _SCREEN_HEIGHT; x += 30) {
		DrawLine(0, x, _SCREEN_WIDTH, x, LIGHTGRAY);
	}

	for (size_t x = 0; x < _SCREEN_HEIGHT; x += 30) {
		DrawLine(x, 0, x, _SCREEN_HEIGHT, LIGHTGRAY);
	}
}	// Engine::_drawGrid()