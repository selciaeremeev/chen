#pragma once

#include <map>
#include <string>
#include <DxLib.h>

class Resources {
public:

	std::map<std::string, int> sounds;
	std::map<std::string, int> graphics;

	Resources(void) {};

	int LoadGraph(const char* alias, const char* fileName);
	int LoadSound(const char* alias, const char* fileName);

	int ReleaseAll(void);
	int ReleaseGraph(void);
	int ReleaseSound(void);

	static Resources* GetInstance(void) {
		static Resources instance;
		return &instance;
	}
};

#define RESOURCES Resources::GetInstance()