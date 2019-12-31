#include <iostream>

#include "Application.h"

namespace engine {

	Application::Application()
		: m_running(false)
	{
	}

	void Application::start()
	{
		m_running = true;
	}

	void Application::stop()
	{
		m_running = false;
	}

	bool Application::isRunning()
	{
		return m_running;
	}

	char Application::listen()
	{
		char input;
		std::cin >> input;
		return input;
	}

}
