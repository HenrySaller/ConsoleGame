#include "Renderer.h"

namespace engine {

	Renderer::Renderer(Window* window)
		: m_window(window)
	{
	}

	void Renderer::print(const char* output)
	{
		wprintw(m_window->getWindow(), output);
	};

	void Renderer::drawBox()
	{
		box(m_window->getWindow(), 0, 0);
		wborder(m_window->getWindow(), ACS_VLINE, ACS_VLINE, ACS_HLINE, ACS_HLINE, ACS_LLCORNER, ACS_URCORNER, ACS_LLCORNER, ACS_LRCORNER);
		wrefresh(m_window->getWindow());
	};

	void Renderer::render()
	{
		wrefresh(m_window->getWindow());
	};

	void Renderer::clear()
	{
		wclear(m_window->getWindow());
	};

}
