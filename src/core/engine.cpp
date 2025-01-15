#include "engine.h"

Engine::Engine() {
	std::cout << "Hello World" << std::endl;

	_initializeWindow(static_cast<int>(800), static_cast<int>(600), "Raylib Engine XD");

	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();


}	//Engine::Engine();

Engine::~Engine() {
	std::cout << "Bye World" << std::endl;
}	//Engine::~Engine();

void Engine::_initializeWindow(const int& width, const int& height, const char* name) {
	InitWindow(width, height, name);
}	//Engine::_initializeWindow()
