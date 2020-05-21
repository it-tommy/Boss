#pragma once

#ifdef BS_PLATFORM_WINDOWS

extern Boss::Application* Boss::CreateApplication();

int main(int argc, char** argv)
{
	printf("Boss Engine\n");
	auto app = Boss::CreateApplication();
	app->Run();
	delete app;
}

#endif
