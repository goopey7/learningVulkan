#include "sam_window.hpp"

namespace sam
{
	SamWindow::SamWindow(int w, int h, std::string name) : width(w), height(h), windowName(name)
	{
		initWindow();
	}

	SamWindow::~SamWindow()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void SamWindow::initWindow()
	{
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}// namespace sam
