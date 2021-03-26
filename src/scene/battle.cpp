#include "scene/battle.hpp"

int Battle::Initialize(void) {
	RESOURCES->LoadSound("BGM", "resources/sounds/bgm.mp3");
	DxLib::PlaySoundMem(RESOURCES->sounds["BGM"], DX_PLAYTYPE_LOOP);
	Battle::fader.Initialize(0, 255, 0.5);
	return 0;
}

int Battle::Update(void) {
	CHEN->Update();
	UI->Update();
	CHARA->Update();
	Battle::fader.Update();
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