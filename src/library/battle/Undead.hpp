#ifndef UNDEAD_HPP
#define UNDEAD_HPP

#include "library/battle/BattleUnit.hpp"
#include "library/battle/UnitType.hpp"

class Undead : public BattleUnit
{
public:
    Undead(GameScene *scene, int id, std::string name) : BattleUnit(scene, id, UnitType::Undeads, name, 50, 5)
    {
    }

    void update();
    virtual void attackEnemy(UnitType type);
};

#endif