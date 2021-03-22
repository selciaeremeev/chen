#include "obj/chen/chen.hpp"

int Chen::Initialize(void) {
	Chen::anim = 0;
	for (int i = 0; i < 30; i++) {
		sprintf_s(Chen::alias, sizeof(Chen::alias), "chen-stand-%02d", i);
		sprintf_s(Chen::fileName, sizeof(Chen::fileName), "resources\\chen\\stand-%02d.png", i);
		RESOURCES->LoadGraph(alias, fileName);
	}
	return 0;
}

int Chen::Update(void) {
# ifdef _DEBUG
	DxLib::DrawFormatString(0, 100, DxLib::GetColor(255, 255, 255), "Anim: %f", Chen::anim);
	DxLib::DrawFormatString(0, 120, DxLib::GetColor(255, 255, 255), "Alias: %s", Chen::alias);
#endif
	Chen::anim += 0.5;
	if (Chen::anim == 29) Chen::anim = 0;
	sprintf_s(Chen::alias, sizeof(Chen::alias), "chen-stand-%02d", int(Chen::anim));
	return 0;
}

int Chen::Render(void) {
	DxLib::DrawGraph(250, 50, RESOURCES->graphics[alias], FALSE);
	return 0;
}

int Chen::Terminate(void) {
	return 0;
}