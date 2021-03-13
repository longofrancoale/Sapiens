#pragma once
#include "Application.h"

#ifdef SP_PLATFORM_WINDOWS

extern Sapiens::Application* Sapiens::CreateApplication();

int main(int argc, char** argv)
{
	Sapiens::Application* sandbox = Sapiens::CreateApplication();
	sandbox->Run();
	delete sandbox;
	return 0;
}
#endif // SP_PLATFORM_WINDOWS
