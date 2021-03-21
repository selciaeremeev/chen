#include "scene/battle.hpp"

int Battle::Initialize(void) {
	return 0;
}

int Battle::Update(void) {
	return 0;
}

int Battle::Render(void) {
#ifdef _DEBUG
	DxLib::DrawString(0, 0, "Scene: Battle", DxLib::GetColor(255, 255, 255));
#endif
	return 0;
}

int Battle::Terminate(void) {
	return 0;
}