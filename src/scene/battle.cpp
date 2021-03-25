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
	Battle::bright += 2;
	if (Battle::bright >= 255) { Battle::bright = 255; }
	return 0;
}

int Battle::Render(void) {
	DxLib::SetDrawBright(Battle::bright, Battle::bright, Battle::bright);
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