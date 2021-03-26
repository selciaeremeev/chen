#pragma once

#include "DxLib.h"
#include "app/app.hpp"
#include "scene/scene.hpp"
#include "scene/scenemgr.hpp"
#include "resources/resources.hpp"
#include "scene/encounter/encounter.hpp"

class Title final : public Scene {
public:
	virtual int Initialize(void) override;
	virtual int Update(void) override;
	virtual int Render(void) override;
	virtual int Terminate(void) override;
};