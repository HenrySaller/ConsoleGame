#include "Engine.h"

namespace engine {

	Engine::Engine(Window& window)
		: m_window(window)
	{
	}

	void Engine::init(void(*gameLoop)(Engine*, char))
	{
		m_app.start();

		while (m_app.isRunning())
		{
			char keyPressed = m_app.listen();
			gameLoop(this, keyPressed);
		}
	}

	void Engine::render(char* output)
	{
		m_renderer.render(output);
	}

	void Engine::shutdown()
	{
		m_app.stop();
	}

}
