#pragma once

#include <string>
#include <DxLib.h>

#include "resources/resources.hpp"

class App {
public:

	const int			WIDTH = 640;
	const int			HEIGHT = 480;
	const int			DEPTH = 16;
	const std::string   NAME = "chen";

	App(void) {};

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