#pragma once

#include "window.hpp"

namespace engine {
	class App {
	public:
		static constexpr uint32_t WIDTH = 1280;
		static constexpr uint32_t HEIGHT = 960;

		void run();

	private:
		engine::Window Window{ WIDTH, HEIGHT, "Vulkan Window" };
	};
}
