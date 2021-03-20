#pragma once

#include <string>
#include <DxLib.h>

class App {
public:

	int			WIDTH = 640;
	int			HEIGHT = 480;
	int			DEPTH = 16;
	std::string NAME = "chen";

	App(void);

	int Initialize(void);
	int Update(void);
	int Render(void);
	int Terminate(void);

	static App* GetInstance(void) {
		static App instance;
		return &instance;
	}
};

#define APP App::GetInstance()