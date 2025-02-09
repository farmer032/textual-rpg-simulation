#ifndef BATTLE_SCENE
#define BATTLE_SCENE

#include "library/GameScene.hpp"
#include "library/battle/BattleUnit.hpp"

class BattleScene : public GameScene
{
public:
    BattleScene();

    virtual void update();

    void checkGameOver();
};

#endif