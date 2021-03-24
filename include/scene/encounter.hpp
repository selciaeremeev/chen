#pragma once

#include "DxLib.h"
#include "scene/scene.hpp"
#include "scene/battle.hpp"
#include "resources/resources.hpp"

class Encounter final : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;
};
