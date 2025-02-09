#include "library/battle/BattleScene.hpp"
#include "library/battle/BattleUnit.hpp"

#include <chrono>
#include <thread>
#include "BattleScene.hpp"

BattleScene::BattleScene()
{
}

void BattleScene::update()
{
    auto sleepInterval = std::chrono::milliseconds(500);
    std::cout << "Updating battle scene" << std::endl;
    for (auto &&unit : this->gameObjects)
    {
        unit->update();
        checkGameOver();
        std::this_thread::sleep_for(sleepInterval);
    }
}

bool checkAllUnitsDead(std::vector<GameObject *> gameObjects, UnitType type)
{
    int countAlive = 0;
    for (auto &&unit : gameObjects)
    {
        BattleUnit *bu = reinterpret_cast<BattleUnit *>(unit);
        if (bu->type() == type && bu->alive())
        {
            countAlive++;
        }
    }
    return countAlive == 0;
}

void BattleScene::checkGameOver()
{

    if (checkAllUnitsDead(this->gameObjects, UnitType::Elfs) && checkAllUnitsDead(this->gameObjects, UnitType::Undeads))
    {
        std::cout << "ORCS VICTORY" << std::endl;
        return;
    }

    if (checkAllUnitsDead(this->gameObjects, UnitType::Orcs) && checkAllUnitsDead(this->gameObjects, UnitType::Undeads))
    {
        std::cout << "ELVES VICTORY" << std::endl;
        return;
    }

    if (checkAllUnitsDead(this->gameObjects, UnitType::Orcs) && checkAllUnitsDead(this->gameObjects, UnitType::Elfs))
    {
        std::cout << "UNDEAD VICTORY" << std::endl;
        return;
    }
}
