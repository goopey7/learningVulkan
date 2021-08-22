#include "first_app.hpp"

namespace sam
{
	void FirstApp::run()
	{
		while (!samWindow.shouldClose())
		{
			glfwPollEvents();
		}
	}
}// namespace sam
