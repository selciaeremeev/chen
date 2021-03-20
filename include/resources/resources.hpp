#pragma once

#include <vector>

class Resources {
public:

	std::vector<char> resources;

	Resources(void) {};

	static Resources* GetInstance(void) {
		static Resources instance;
		return &instance;
	}
};

#define RESOURCES Resources::GetInstance()