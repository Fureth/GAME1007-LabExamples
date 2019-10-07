#include <iostream>
#include <SDL.h>
#define WIDTH 1024		//defines window size and fps
#define HEIGHT 768
#define FPS 60
using namespace std;

//Global game variables
bool g_bRunning = false; //Standard naming system: g(lobal)_b(ool)Running means its a global bool named Running. Being used as a global loop control flag.
int g_iSpeed = 5; //Speed of box
const Uint8* g_iKeystates; //Uint8* is an array of 8bit unsigned integers. the * is a pointer to the array of 8bit unsigned integers
Uint32 g_start, g_end, g_delta, g_fps; //Fixed timestance variables. start holds millisecons at start, end holds milliseconds at end, delta holds difference of milliseconds. fps handles fps time and freezing.
SDL_Window* g_pWindow; // This represents the window created.
SDL_Renderer* g_pRenderer; //This represents the buffer to draw to.
SDL_Rect* g_rBox; //SDL_Rect is four integers: x, y, w(width), h(height)


bool init() {}
void wake() {}
void sleep() {}
void handleEvents() {}
bool keyDown() {}
void update() {}
void render() {}
void clean() {}

int main(int argc, char* args[])
{
	if (init() == false)
		return 1; // Premature exit from program
	while (g_bRunning) // Main game loop
	{
		wake();
		handleEvents(); //Parses any keyboard or mouse presses
		update();
		render();
		if (g_bRunning) // Game is still going
			sleep(); //Turns the engine off for the remaining time of the milliseconds in the frame
	}
	clean(); //Cleans the window, buffer, etc to clear memory and calls quit command.
	return 0; //return("pause") is not required thanks to SDL
}