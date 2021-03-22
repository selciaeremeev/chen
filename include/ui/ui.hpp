#pragma once

#include "DxLib.h"
#include "resources/resources.hpp"

class Ui {
public:
	int Initialize(void);
	int Update(void);
	int Render(void);
	int Terminate(void);

	static Ui* GetInstance(void) {
		static Ui instance;
		return &instance;
	}
};

#define UI Ui::GetInstance()