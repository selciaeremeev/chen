#include "util/fader.hpp"

int Fader::Initialize(float bright, int limit, float fadeSpeed) {
	Fader::bright = bright;
	Fader::limit = limit;
	Fader::fadeSpeed = fadeSpeed;
	return 0;
}

int Fader::Update(void) {
	DxLib::SetDrawBright(int(Fader::bright), int(Fader::bright), int(Fader::bright));
	Fader::bright += int(Fader::fadeSpeed);
	Fader::fadeSpeed += 0.5;
	if (Fader::bright >= 255) Fader::bright = 255;
	return 0;
}