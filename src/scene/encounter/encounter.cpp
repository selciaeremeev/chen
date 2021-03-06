#include "scene/encounter/encounter.hpp"

int Encounter::Initialize(void) {
	RESOURCES->LoadGraph("encounter", "resources\\movies\\encounter.mp4");
	DxLib::PlayMovieToGraph(RESOURCES->graphics["encounter"]);
	return 0;
}

int Encounter::Update(void) {
	if (!DxLib::GetMovieStateToGraph(RESOURCES->graphics["encounter"])) {
		DxLib::SetDrawBright(0, 0, 0);
		SCENEMGR->scene.push(std::make_shared<Battle>());
		SCENEMGR->scene.top()->Initialize();
	}
	return 0;
}

int Encounter::Render(void) {
	DxLib::DrawGraph(0, 0, RESOURCES->graphics["encounter"], FALSE);
	return 0;
}

int Encounter::Terminate(void) {
	return 0;
}