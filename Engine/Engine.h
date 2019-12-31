#pragma once

#include "Window.h"
#include "Renderer.h"
#include "Application.h"

namespace engine
{
	
	class Engine
	{
		Window m_window;
		Renderer m_renderer;
		Application m_app;
	public:
		Engine() = delete;
		Engine(Window& window);

		void init(void(*gameLoop)(Engine*, char));
		void shutdown();
		void render(char* output);
	};

}
