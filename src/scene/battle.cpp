#include "scene/battle.hpp"

int Battle::Initialize(void) {
	RESOURCES->LoadSound("BGM", "resources/sounds/bgm.mp3");
	DxLib::PlaySoundMem(RESOURCES->sounds["BGM"], DX_PLAYTYPE_LOOP);
	return 0;
}

int Battle::Update(void) {
	CHEN->Update();
	UI->Update();
	CHARA->Update();
	return 0;
}

int Battle::Render(void) {
	CHEN->Render();
	UI->Render();
	CHARA->Render();
	return 0;
}

int Battle::Terminate(void) {
	CHEN->Terminate();
	UI->Terminate();
	CHARA->Terminate();
	return 0;
}