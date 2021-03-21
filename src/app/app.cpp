#include <string>
#include <DxLib.h>

#include "app/app.hpp"

int App::Initialize(void) {
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::SetAlwaysRunFlag(TRUE);
	DxLib::ChangeWindowMode(TRUE);
	DxLib::SetWindowTextA(APP->NAME.c_str());
	DxLib::DxLib_Init();
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	DxLib::SetGraphMode(APP->WIDTH, APP->HEIGHT, APP->DEPTH);
	RESOURCES->LoadSound("BGM", "resources/sounds/bgm.mp3");
	DxLib::PlaySoundMem(RESOURCES->sounds["BGM"], DX_PLAYTYPE_LOOP);

	return 0;
}

int App::Update(void) {
	// SCENEMGR->scene.top()->Update();
	return 0;
}

int App::Render(void) {
	// SCENEMGR->scene.top()->Render();
	return 0;
}

int App::Terminate(void) {
	RESOURCES->ReleaseAll();
	DxLib::DxLib_End();
	return 0;
}