#include "scene/title.hpp"

int Title::Initialize(void) {

	return 0;
}

int Title::Update(void) {
	if (APP->KEY[KEY_INPUT_RETURN]) {
		SCENEMGR->scene.push(std::make_shared<Encounter>());
		SCENEMGR->scene.top()->Initialize();
	}
	return 0;
}

int Title::Render(void) {
	DxLib::DrawString(0, 0, "test: PRESS ENTER", WHITE);
	return 0;
}

int Title::Terminate(void) {

	return 0;
}