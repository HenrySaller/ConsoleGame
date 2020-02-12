#include "Application.h"

namespace engine {

	Application::Application()
		: m_running(false)
	{
	}

	bool Application::isRunning()
	{
		return m_running;
	}

	void Application::start()
	{
		m_running = true;

		initscr();
		raw();
		noecho();
		keypad(stdscr, TRUE);
	}

	void Application::stop()
	{
		endwin();
		m_running = false;
	}

	int Application::listen()
	{
		int input;
		input = getch();
		return input;
	}

}
