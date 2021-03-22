#include "scene/battle.hpp"

int Battle::Initialize(void) {
	CHEN->Initialize();
	UI->Initialize();
	RESOURCES->LoadSound("BGM", "resources/sounds/bgm.mp3");
	DxLib::PlaySoundMem(RESOURCES->sounds["BGM"], DX_PLAYTYPE_LOOP);
	return 0;
}

int Battle::Update(void) {
	CHEN->Update();
	UI->Update();
	return 0;
}

int Battle::Render(void) {
	CHEN->Render();
	UI->Render();
	return 0;
}

int Battle::Terminate(void) {
	CHEN->Terminate();
	UI->Terminate();
	return 0;
}