#ifndef BATTLE_UNIT_HPP
#define BATTLE_UNIT_HPP

#include "library/Unit.hpp"
#include "library/battle/UnitType.hpp"
#include "library/battle/BattleScene.hpp"
#include "library/GameScene.hpp"

class BattleScene;

class BattleUnit : public Unit
{
protected:
    int id;
    UnitType unitType;
    GameScene *scene;

public:
    BattleUnit(GameScene *scene, int id, UnitType type, std::string name, int health, int damage) : scene(scene), id(id), unitType(type), Unit(name, health, damage)
    {
    }
    UnitType type();
    virtual void update();
    BattleUnit *findNearestUnitByType(UnitType type);
    virtual void attackEnemy(UnitType type) = 0;
};

#endif