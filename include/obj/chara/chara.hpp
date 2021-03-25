#pragma once

#include "DxLib.h"
#include "app/app.hpp"
#include "obj/obj.hpp"
#include "resources/resources.hpp"

class Chara final : public Obj {
public:

	int x = 308;
	int y = 306;
	int move = 2;

	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;

	static Chara* GetInstance(void) {
		static Chara instance;
		return &instance;
	}
};

#define CHARA Chara::GetInstance()