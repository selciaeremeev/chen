#include "scene/encounter.hpp"

int Encounter::Initialize(void) {
	return 0;
}

int Encounter::Update(void) {
	SCENEMGR->scene.push(std::make_shared<Battle>());
	SCENEMGR->scene.top()->Initialize();
	return 0;
}

int Encounter::Render(void) {
	DxLib::PlayMovie("resources\\movies\\encounter.mp4", 1, DX_MOVIEPLAYTYPE_NORMAL);
	return 0;
}

int Encounter::Terminate(void) {
	return 0;
}