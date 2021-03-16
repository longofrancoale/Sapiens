#pragma once
#include "Application.h"

#ifdef SP_PLATFORM_WINDOWS

extern Sapiens::Application* Sapiens::CreateApplication();

int main(int argc, char** argv)
{
	Sapiens::Application* App = Sapiens::CreateApplication();
	App->Run();
	delete App;
	return 0;
}
#endif // SP_PLATFORM_WINDOWS
