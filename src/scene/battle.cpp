#include "scene/battle.hpp"

int Battle::Initialize(void) {
	CHEN->Initialize();
	UI->Initialize();
	return 0;
}

int Battle::Update(void) {
	CHEN->Update();
	UI->Update();
	return 0;
}

int Battle::Render(void) {
#ifdef _DEBUG
	DxLib::DrawString(0, 0, "Scene: Battle", DxLib::GetColor(255, 255, 255));
#endif
	CHEN->Render();
	UI->Render();
	return 0;
}

int Battle::Terminate(void) {
	CHEN->Terminate();
	UI->Terminate();
	return 0;
}