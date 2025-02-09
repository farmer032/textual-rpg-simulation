#ifndef GAME_SCENE
#define GAME_SCENE

#include <vector>

#include "library/Unit.hpp"

class GameScene
{
protected:
    std::vector<GameObject *> gameObjects;

public:
    void addGameObject(GameObject *gameObject);
    std::vector<GameObject *> getGameObjects();
    virtual void update() = 0;
};

#endif