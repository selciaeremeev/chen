#include "app/app.hpp"

int App::UpdateKeyStateAll(void) {
	char tempKey[256];
	DxLib::GetHitKeyStateAll(tempKey);
	for (int i = 0; i < 256; i++) {
		if (tempKey[i] != 0) {
			APP->KEY[i]++;
		}
		else {
			APP->KEY[i] = 0;
		}
	}
	return 0;
}

int App::Initialize(void) {
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::SetAlwaysRunFlag(TRUE);
	DxLib::ChangeWindowMode(TRUE);
	DxLib::SetWindowTextA(APP->NAME.c_str());
	DxLib::DxLib_Init();
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	DxLib::SetGraphMode(APP->WIDTH, APP->HEIGHT, APP->DEPTH);
	SCENEMGR->scene.push(std::make_shared<Battle>());
	SCENEMGR->scene.top()->Initialize();
	return 0;
}

int App::Update(void) {
	SCENEMGR->scene.top()->Update();
	if (App::KEY[KEY_INPUT_ESCAPE]) App::Terminate();
	return 0;
}

int App::Render(void) {
	SCENEMGR->scene.top()->Render();
	return 0;
}

int App::Terminate(void) {
	SCENEMGR->scene.top()->Terminate();
	RESOURCES->ReleaseAll();
	DxLib::DxLib_End();
	return 0;
}