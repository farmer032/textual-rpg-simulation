#ifndef GAME_INSTANCE
#define GAME_INSTANCE

#include "library/GameScene.hpp"

class GameInstance
{
private:
    GameScene *scene;

public:
    GameInstance(GameScene *scene) : scene(scene)
    {
    }

    void start();
};

#endif