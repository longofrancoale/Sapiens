#pragma once
#include "Core.h"

namespace Sapiens
{
	class SAPIENS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
