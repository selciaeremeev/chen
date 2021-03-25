#include "scene/title.hpp"

int Title::Initialize(void) {
	RESOURCES->LoadGraph("title", "resources/graphics/title.png");
	RESOURCES->LoadSound("heartbeat", "resources/sounds/heartbeat.wav");
	DxLib::PlaySoundMem(RESOURCES->sounds["heartbeat"], DX_PLAYTYPE_BACK);
	return 0;
}

int Title::Update(void) {
	if (APP->KEY[KEY_INPUT_RETURN] || APP->KEY[KEY_INPUT_Z]) {
		SCENEMGR->scene.push(std::make_shared<Encounter>());
		SCENEMGR->scene.top()->Initialize();
	}
	return 0;
}

int Title::Render(void) {
	DxLib::DrawGraph(0, -50, RESOURCES->graphics["title"], FALSE);
	return 0;
}

int Title::Terminate(void) {

	return 0;
}