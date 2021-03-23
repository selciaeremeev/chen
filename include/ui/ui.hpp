#pragma once

#include "DxLib.h"
#include "app/app.hpp"
#include "resources/resources.hpp"

class Ui {
public:

	float count;
	float anim;
	char alias[15];
	char fileName[100];

	BOOL flag;

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