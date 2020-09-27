#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

/*
    |                                           |
    |                                           |
    |                                           |
    |                Grey                       |
    |                                           |
    |-------------------------------------------|
    |                                           |
    |               Walls                       |
    |                                           |
    |                                           |
    |                                           |
    |-------------------------------------------|
    |                Green                      |
    |                                           |

*/

// Override base class with your custom functionality
class Game : public olc::PixelGameEngine
{
public:
    Game()
	{
		// Name you application
		sAppName = "Open Faceball 3000";
	}

public:
	bool OnUserCreate() override
	{
		// Called once at the start, so create things here
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override
	{
		// called once per frame, draws random coloured pixels
		for (int x = 0; x < ScreenWidth(); x++)
			for (int y = 0; y < ScreenHeight(); y++)
				Draw(x, y, olc::Pixel(rand() % 256, rand() % 256, rand()% 256));
		return true;
	}
};

int main()
{
	Game demo;
	if (demo.Construct(256, 240, 4, 4))
		demo.Start();
	return 0;
}