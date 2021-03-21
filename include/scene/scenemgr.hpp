#pragma once

#include <stack>
#include <memory>

#include "scene/scene.hpp"

class SceneManager {
public:
	std::stack<std::shared_ptr<Scene>> scene;

	static SceneManager* GetInstance(void) {
		static SceneManager instance;
		return &instance;
	}
};

#define SCENEMGR SceneManager::GetInstance()