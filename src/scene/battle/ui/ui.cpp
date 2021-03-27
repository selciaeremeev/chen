#include "scene/battle/ui/ui.hpp"

int Ui::Initialize(void) {
	Ui::count = 0.5;
	Ui::anim = 0;
	Ui::flag = TRUE;
	RESOURCES->LoadGraph("fight-enable", "resources\\ui\\fight-enable.png");
	RESOURCES->LoadGraph("fight-disable", "resources\\ui\\fight-disable.png");
	RESOURCES->LoadGraph("act-enable", "resources\\ui\\act-enable.png");
	RESOURCES->LoadGraph("act-disable", "resources\\ui\\act-disable.png");
	RESOURCES->LoadGraph("item-enable", "resources\\ui\\item-enable.png");
	RESOURCES->LoadGraph("item-disable", "resources\\ui\\item-disable.png");
	RESOURCES->LoadGraph("mercy-enable", "resources\\ui\\mercy-enable.png");
	RESOURCES->LoadGraph("mercy-disable", "resources\\ui\\mercy-disable.png");
	RESOURCES->LoadGraph("state", "resources\\ui\\state.png");
	RESOURCES->LoadGraph("hp", "resources\\ui\\hp.png");
	AddFontResourceEx(Ui::fontFileName, FR_PRIVATE, NULL);
	DxLib::ChangeFont("JFドット東雲ゴシック14", DX_CHARSET_DEFAULT);
	RESOURCES->LoadSound("pi", "resources\\sounds\\pi.wav");
	RESOURCES->LoadSound("piko", "resources\\sounds\\piko.wav");
	for (int i = 0; i < 36; i++) {
		sprintf_s(Ui::alias, sizeof(Ui::alias), "box-%02d", i);
		sprintf_s(Ui::fileName, sizeof(Ui::fileName), "resources\\ui\\box-%02d.png", i);
		RESOURCES->LoadGraph(alias, fileName);
	}
	return 0;
}

int Ui::Update(void) {
	if (APP->KEY[KEY_INPUT_SPACE] && Ui::anim == 0) Ui::flag = TRUE;
	if (APP->KEY[KEY_INPUT_SPACE] && Ui::anim >= 35) Ui::flag = FALSE;
	if (Ui::flag) Ui::anim += Ui::count;
	if (!Ui::flag) Ui::anim -= Ui::count;
	if (Ui::anim >= 35) Ui::anim = 35;
	if (Ui::anim <= 0) Ui::anim = 0;
	sprintf_s(Ui::alias, sizeof(Ui::alias), "box-%02d", int(Ui::anim));
 	return 0;
}

int Ui::Render(void) {
	if (CHARA->pos.x == CHARA->FIGHT.x && CHARA->pos.y == CHARA->FIGHT.y) {
		DxLib::DrawGraph(35, 420, RESOURCES->graphics["fight-enable"], FALSE);
	} else {
		DxLib::DrawGraph(35, 420, RESOURCES->graphics["fight-disable"], FALSE);
	}
	if (CHARA->pos.x == CHARA->ACT.x && CHARA->pos.y == CHARA->ACT.y) {
		DxLib::DrawGraph(188, 420, RESOURCES->graphics["act-enable"], FALSE);
	} else {
		DxLib::DrawGraph(188, 420, RESOURCES->graphics["act-disable"], FALSE);
	}
	if (CHARA->pos.x == CHARA->ITEM.x && CHARA->pos.y == CHARA->ITEM.y) {
		DxLib::DrawGraph(346, 420, RESOURCES->graphics["item-enable"], FALSE);
	} else {
		DxLib::DrawGraph(346, 420, RESOURCES->graphics["item-disable"], FALSE);
	}
	if (CHARA->pos.x == CHARA->MERCY.x && CHARA->pos.y == CHARA->MERCY.y) {
		DxLib::DrawGraph(502, 420, RESOURCES->graphics["mercy-enable"], FALSE);
	} else {
		DxLib::DrawGraph(502, 420, RESOURCES->graphics["mercy-disable"], FALSE);
	}
	DxLib::DrawGraph(34, 392, RESOURCES->graphics["state"], FALSE);
	DxLib::DrawGraph(188, 393, RESOURCES->graphics["hp"], FALSE);
	DxLib::DrawBox(220, 390, 300, 410, WHITE, TRUE);
	DxLib::DrawGraph(-150, -50, RESOURCES->graphics[alias], TRUE);
	return 0;
}

int Ui::Terminate(void) {
	RemoveFontResourceEx(Ui::fontFileName, FR_PRIVATE, NULL);
	return 0;
}