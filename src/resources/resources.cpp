#include "resources/resources.hpp"

int Resources::LoadGraph(const char* alias, const char* fileName) {
	Resources::graphics[alias] = DxLib::LoadGraph(fileName);
	return 0;
}

int Resources::LoadSound(const char* alias, const char* fileName) {
	Resources::sounds[alias] = DxLib::LoadSoundMem(fileName);
	return 0;
}

int Resources::ReleaseAll(void) {
	Resources::graphics.clear();
	Resources::sounds.clear();
	return 0;
}

int Resources::ReleaseGraph(void) {
	Resources::graphics.clear();
	return 0;
}

int Resources::ReleaseSound(void) {
	Resources::sounds.clear();
	return 0;
}
