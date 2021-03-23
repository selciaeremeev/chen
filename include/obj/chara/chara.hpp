#pragma once

#include "obj/obj.hpp"

class Chara final : public Obj {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;

	static Chara* GetInstance(void) {
		static Chara instance;
		return &instance;
	}
};