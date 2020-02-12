#pragma once

#include <PDCurses/curses.h>

#include "Window.h"

namespace engine {

	class Renderer
	{
		Window* m_window;
	public:
		Renderer() = delete;
		Renderer(Window* window);

		void print(const char* output);
		void drawBox();

		void render();
		void clear();
	};

}
