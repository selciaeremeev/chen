#pragma once

#include <DxLib.h>

#include "scene/scene.hpp"

class Battle : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;
};