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
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

}	//Engine::_run()
