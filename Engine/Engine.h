#pragma once

#include "Window.h"
#include "Renderer.h"
#include "Application.h"

namespace engine
{
	
	class Engine
	{
		Window *m_window;
		Renderer *m_renderer;
		Application *m_app;
	public:
		Engine() = delete;
		Engine(Window* window);
		~Engine();

		void init(void(*gameLoop)(Engine*, int*));
		void shutdown();

		Renderer* getRenderer();
	};

}
