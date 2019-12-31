#pragma once

namespace engine {

	class Application
	{
		bool m_running;
	public:
		Application();
		void start();
		void stop();
		bool isRunning();
		char listen();
	};

}
