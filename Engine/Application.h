#pragma once

#include <PDCurses/curses.h>

namespace engine {

	class Application
	{
		bool m_running;
	public:
		Application();

		bool isRunning();

		void start();
		void stop();
		
		int listen();
	};

}
