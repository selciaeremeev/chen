#pragma once

#include <string>

#include "DxLib.h"
#include "scene/scenemgr.hpp"
#include "scene/title.hpp"
#include "resources/resources.hpp"

class App final {
public:

	int KEY[256] = { 0 };
	const int			WIDTH = 640;
	const int			HEIGHT = 480;
	const int			DEPTH = 16;
	const std::string   NAME = "chen";

	App(void) {};

	int UpdateKeyStateAll(void);

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

#define WHITE DxLib::GetColor(255, 255, 255)