#include "Config.h"
#include "Engine.h"
#include "Character.h"

#include <PDCurses/curses.h>

Config initConfig()
{
	Config config;

	config.window_width = 12;
	config.window_height = 6;

	return config;
}

void gameLoop(engine::Engine* gameEngine, char keyPressed)
{
	if (keyPressed == 'q')
	{
		gameEngine->shutdown();
		return;
	}

	gameEngine->render(&keyPressed);
}

int main()
{
	Config gameConfig = initConfig();

	engine::Window gameWindow(
		gameConfig.window_width,
		gameConfig.window_height
	);

	engine::Engine gameEngine(gameWindow);

	//gameEngine.init(gameLoop);

	initscr();
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();

};
