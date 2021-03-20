#include <DxLib.h>

#include "app/app.hpp"

int App::Initialize(void) {
	DxLib::SetOutApplicationLogValidFlag(FALSE);
	DxLib::ChangeWindowMode(TRUE);
	DxLib::SetWindowTextA(APP->NAME.c_str());
	DxLib::DxLib_Init();
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	DxLib::SetGraphMode(APP->WIDTH, APP->HEIGHT, APP->DEPTH);
	return 0;
}

int App::Update(void) {

	return 0;
}

int App::Render(void) {
	DxLib::PlayMovie("resources\\chen\\chen.gif", 1, DX_MOVIEPLAYTYPE_NORMAL);
	return 0;
}

int App::Terminate(void) {
	DxLib::DxLib_End();
	return 0;
}