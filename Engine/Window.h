#pragma once

#include <PDCurses/curses.h>

namespace engine {

	class Window
	{
		int m_x, m_y;
		WINDOW *m_window;
	public:
		Window() = delete;
		Window(int& x, int& y);
		~Window();

		int getWidth();
		int getHeight();

		WINDOW* getWindow();

		void init();
	};

}
