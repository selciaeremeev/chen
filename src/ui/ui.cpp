#include "ui/ui.hpp"

int Ui::Initialize(void) {
	Ui::anim = 0;
	RESOURCES->LoadGraph("fight", "resources\\ui\\fight.png");
	RESOURCES->LoadGraph("act", "resources\\ui\\act.png");
	RESOURCES->LoadGraph("item", "resources\\ui\\item.png");
	RESOURCES->LoadGraph("mercy", "resources\\ui\\mercy.png");
	for (int i = 0; i < 36; i++) {
		sprintf_s(Ui::alias, sizeof(Ui::alias), "box-%02d", i);
		sprintf_s(Ui::fileName, sizeof(Ui::fileName), "resources\\ui\\box-%02d.png", i);
		RESOURCES->LoadGraph(alias, fileName);
	}
	return 0;
}

int Ui::Update(void) {
	if (Ui::anim <= 35) Ui::anim += 0.5;
	if (Ui::anim >= 35) Ui::anim = 35;
	sprintf_s(Ui::alias, sizeof(Ui::alias), "box-%02d", int(Ui::anim));
	return 0;
}

int Ui::Render(void) {
	DxLib::DrawGraph(35, 420, RESOURCES->graphics["fight"], FALSE);
	DxLib::DrawGraph(188, 420, RESOURCES->graphics["act"], FALSE);
	DxLib::DrawGraph(340, 420, RESOURCES->graphics["item"], FALSE);
	DxLib::DrawGraph(496, 420, RESOURCES->graphics["mercy"], FALSE);
	DxLib::DrawGraph(-150, -50, RESOURCES->graphics[alias], TRUE);
	return 0;
}

int Ui::Terminate(void) {

	return 0;
}