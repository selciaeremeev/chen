#include "obj/chara/chara.hpp"

int Chara::Initialize(void) {
	RESOURCES->LoadGraph("chara", "resources\\obj\\chara\\chara.png");
	ZeroMemory(&(Chara::pos), sizeof(Chara::pos));
	Chara::pos.x = 42;
	Chara::pos.y = 430;
	return 0;
}

int Chara::Update(void) {
	if (Chara::isCommand) {
		if (APP->KEY[KEY_INPUT_RIGHT] == 1) {
			Chara::commandState = (Chara::commandState + 1) % 4;
			DxLib::PlaySoundMem(RESOURCES->sounds["pi"], DX_PLAYTYPE_BACK);
		}
		if (APP->KEY[KEY_INPUT_LEFT] == 1) {
			Chara::commandState = (Chara::commandState + 3) % 4;
			DxLib::PlaySoundMem(RESOURCES->sounds["pi"], DX_PLAYTYPE_BACK);
		}
	}
	if (!Chara::isCommand) {
		if (APP->KEY[KEY_INPUT_UP]) Chara::pos.y -= 2;
		if (APP->KEY[KEY_INPUT_DOWN]) Chara::pos.y += 2;
		if (APP->KEY[KEY_INPUT_LEFT]) Chara::pos.x -= 2;
		if (APP->KEY[KEY_INPUT_RIGHT]) Chara::pos.x += 2;
	}
	return 0;
}

int Chara::Render(void) {
	DxLib::DrawFormatString(0, 0, WHITE, "commandState: %d", Chara::Chara::commandState);
	DxLib::DrawFormatString(0, 100, WHITE, "X: %d Y: %d", int(Chara::pos.x), int(Chara::pos.y));
	DxLib::DrawGraph(int(Chara::pos.x), int(Chara::pos.y), RESOURCES->graphics["chara"], TRUE);
	if (Chara::isCommand) {
		switch (Chara::commandState) {
		case 0:
			Chara::pos.x = Chara::FIGHT.x;
			Chara::pos.y = Chara::FIGHT.y;
			break;
		case 1:
			Chara::pos.x = Chara::ACT.x;
			Chara::pos.y = Chara::ACT.y;
			break;
		case 2:
			Chara::pos.x = Chara::ITEM.x;
			Chara::pos.y = Chara::ITEM.y;
			break;
		case 3:
			Chara::pos.x = Chara::MERCY.x;
			Chara::pos.y = Chara::MERCY.y;
			break;
		default:
			break;
		}
	}
	return 0;
}

int Chara::Terminate(void) {
	return 0;
}