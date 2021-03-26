#pragma once

#include "DxLib.h"

class Fader final {
public:
	int limit = 0;
	float bright = 0;
	float fadeSpeed = 0;

	int Initialize(float bright, int limit, float fadeSpeed);
	int Update(void);
};