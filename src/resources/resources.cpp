#include "resources/resources.hpp"

int Resources::LoadGraph(const char* alias, const char* fileName) {
	Resources::graphics[alias] = DxLib::LoadGraph(fileName);
	return 0;
}

int Resources::ReleaseGraph(void) {
	Resources::graphics.clear();
	return 0;
}
