#include <Boss.h>

class Sandbox : public Boss::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Boss::Application* Boss::CreateApplication()
{
	return new Sandbox();
}