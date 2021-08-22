#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>
namespace sam
{
	class SamWindow
	{
	public:
		SamWindow(int w, int h, std::string name);
		~SamWindow();

		SamWindow(const SamWindow &) = delete;
		SamWindow &operator=(const SamWindow &) = delete;
		bool shouldClose() { return glfwWindowShouldClose(window); }

	private:
		void initWindow();

		GLFWwindow *window;

		const int width, height;

		std::string windowName;
	};
}// namespace sam
