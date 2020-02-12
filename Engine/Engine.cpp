#include "Engine.h"

namespace engine {

	Engine::Engine(Window* window)
		: m_window(window)
	{
		m_renderer = new Renderer(window);
		m_app = new Application;
	}

	Engine::~Engine()
	{
		delete m_renderer;
		delete m_app;
	}

	void Engine::init(void(*gameLoop)(Engine*, int*))
	{
		m_app->start();
		m_window->init();
		m_renderer->drawBox();

		if (m_window->getWidth() > COLS || m_window->getHeight() > LINES)
		{
			m_renderer->print("Could not start the application : The window is too small.\n");
			m_renderer->render();

			shutdown();
			return;
		}

		while (m_app->isRunning())
		{
			int keyPressed = m_app->listen();

			switch (keyPressed)
			{
				case KEY_RESIZE:
					m_renderer->clear();
					m_renderer->print("The window was resized : Please relaunch the application.\n");
					m_renderer->render();

					shutdown();
					break;

				default:
					gameLoop(this, &keyPressed);
			}
		}
	}

	Renderer* Engine::getRenderer()
	{
		return m_renderer;
	}

	void Engine::shutdown()
	{
		m_renderer->print("Shutting down : Press any key to quit.\n");
		m_renderer->render();
		
		getch();

		m_app->stop();
	}

}
