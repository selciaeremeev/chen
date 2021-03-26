#pragma once

#include "DxLib.h"

class Fader final {
private:
	int limit = 0;
	float bright = 0;
	float fadeSpeed = 0;
public:
	int Initialize(float bright, int limit, float fadeSpeed);
	int Update(void);
};