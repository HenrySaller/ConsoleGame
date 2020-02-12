#include "Window.h"

namespace engine {

	Window::Window(int& x, int& y)
		: m_x(x), m_y(y), m_window(nullptr)
	{
	}

	Window::~Window()
	{	
		delwin(m_window);
	}

	int Window::getWidth()
	{
		return m_x;
	}

	int Window::getHeight()
	{
		return m_y;
	}

	WINDOW* Window::getWindow()
	{
		return m_window;
	}

	void Window::init()
	{
		int starty = (LINES - m_y) / 2;
		int startx = (COLS - m_x) / 2;

		m_window = newwin(m_y, m_x, starty, startx);
	}

}
