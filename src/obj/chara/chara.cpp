#include "obj/chara/chara.hpp"

int Chara::Initialize(void) {
	RESOURCES->LoadGraph("chara", "resources\\obj\\chara\\chara.png");
	return 0;
}

int Chara::Update(void) {
	if (APP->KEY[KEY_INPUT_UP]) y -= 2;
	if (APP->KEY[KEY_INPUT_DOWN]) y += 2;
	if (APP->KEY[KEY_INPUT_LEFT]) x -= 2;
	if (APP->KEY[KEY_INPUT_RIGHT]) x += 2;
	return 0;
}

int Chara::Render(void) {
#ifdef _DEBUG
	DxLib::DrawFormatString(0, 100, WHITE, "X: %d Y: %d", Chara::x, Chara::y);
#endif
	DxLib::DrawGraph(Chara::x, Chara::y, RESOURCES->graphics["chara"], TRUE);
	return 0;
}

int Chara::Terminate(void) {
	return 0;
}