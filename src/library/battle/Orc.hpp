#ifndef ORC_HPP
#define ORC_HPP

#include "library/battle/BattleUnit.hpp"
#include "library/battle/UnitType.hpp"

class Orc : public BattleUnit
{
public:
    Orc(GameScene *scene, int id, std::string name) : BattleUnit(scene, id, UnitType::Orcs, name, 100, 20)
    {
    }

    void update();
    virtual void attackEnemy(UnitType type);
};

#endif