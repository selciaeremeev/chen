#include "ui/ui.hpp"

int Ui::Initialize(void) {
	RESOURCES->LoadGraph("fight", "resources\\ui\\fight.png");
	RESOURCES->LoadGraph("act", "resources\\ui\\act.png");
	RESOURCES->LoadGraph("item", "resources\\ui\\item.png");
	RESOURCES->LoadGraph("mercy", "resources\\ui\\mercy.png");
	return 0;
}

int Ui::Update(void) {

	return 0;
}

int Ui::Render(void) {
	DxLib::DrawGraph(50, 420, RESOURCES->graphics["fight"], FALSE);
	DxLib::DrawGraph(193, 420, RESOURCES->graphics["act"], FALSE);
	DxLib::DrawGraph(335, 420, RESOURCES->graphics["item"], FALSE);
	DxLib::DrawGraph(475, 420, RESOURCES->graphics["mercy"], FALSE);
	DxLib::DrawBoxAA(50, 250, 584, 380, DxLib::GetColor(255, 255, 255), FALSE, 3.0F);
	return 0;
}

int Ui::Terminate(void) {

	return 0;
}