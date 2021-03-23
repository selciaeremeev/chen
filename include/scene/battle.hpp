#pragma once

#include "DxLib.h"
#include "scene/scene.hpp"
#include "obj/chen/chen.hpp"
#include "obj/chara/chara.hpp"
#include "ui/ui.hpp"

class Battle final : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;
};