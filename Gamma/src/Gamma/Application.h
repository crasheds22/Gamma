#pragma once

#include "Core.h"

namespace Gamma {
	class GM_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// define in client
	Application* CreateApplication();
}
