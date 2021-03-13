#include <Sapiens.h>

class Sandbox : public Sapiens::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Sapiens::Application* Sapiens::CreateApplication()
{
	return new Sandbox();
}