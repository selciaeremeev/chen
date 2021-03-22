#pragma once

#include "DxLib.h"
#include "obj/obj.hpp"
#include "resources/resources.hpp"

class Chen : public Obj {
public:

	float anim;
	char alias[15];
	char fileName[100];

	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;

	static Chen* GetInstance(void) {
		static Chen instance;
		return &instance;
	}
};

#define CHEN Chen::GetInstance()