#ifndef ELF_HPP
#define ELF_HPP

#include "library/battle/BattleUnit.hpp"
#include "library/battle/UnitType.hpp"

class Elf : public BattleUnit
{
public:
    Elf(GameScene *scene, int id, std::string name) : BattleUnit(scene, id, UnitType::Elfs, name, 110, 15)
    {
    }
    void update();
    virtual void attackEnemy(UnitType type);
};

#endif