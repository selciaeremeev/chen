#pragma once

#include "DxLib.h"
#include "app/app.hpp"
#include "obj/obj.hpp"
#include "resources/resources.hpp"

class Chara final : public Obj {
public:
	VECTOR pos;
	int commandState = 0;
	BOOL isCommand = TRUE;

	const VECTOR FIGHT = { 42, 430, 0 };
	const VECTOR ACT = { 196, 430, 0 };
	const VECTOR ITEM = { 352, 430, 0 };
	const VECTOR MERCY = { 508, 430, 0 };

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