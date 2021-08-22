#pragma once
#include "sam_window.hpp"


namespace sam
{
	class FirstApp
	{
	public:
		static constexpr int WIDTH = 800, HEIGHT = 600;
		void run();

	private:
		SamWindow samWindow{WIDTH, HEIGHT, "Hell yeah!!"};
	};
}// namespace sam
