#pragma once

namespace engine {

	class Window
	{
		unsigned int m_x, m_y;
	public:
		Window() = delete;
		Window(unsigned int& x, unsigned int& y);
	};

}
