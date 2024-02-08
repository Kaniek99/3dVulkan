#include "app.hpp"

namespace engine {
	void App::run() {
		while (!Window.shouldClose()) {
			glfwPollEvents();
		}
	}
}
