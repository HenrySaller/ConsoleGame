#include "Config.h"
#include "Engine.h"
#include "Character.h"

Config initConfig()
{
	Config config;

	config.window_width = 100;
	config.window_height = 20;

	return config;
}

void gameLoop(engine::Engine* gameEngine, int* keyPressed)
{
	switch (*keyPressed)
	{
		case int('q') :
			gameEngine->getRenderer()->clear();
			gameEngine->shutdown();
			break;

		default:
			gameEngine->getRenderer()->clear();
			gameEngine->getRenderer()->print("No action for this key : Use `q` to quit.\n");
			gameEngine->getRenderer()->render();
	}
}

int main()
{
	Config gameConfig = initConfig();

	engine::Window gameWindow(
		gameConfig.window_width,
		gameConfig.window_height
	);

	engine::Engine gameEngine(&gameWindow);

	gameEngine.init(gameLoop);
};
