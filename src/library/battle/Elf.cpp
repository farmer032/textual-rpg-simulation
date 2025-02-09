#include "library/battle/Elf.hpp"
#include "library/battle/UnitType.hpp"
#include "Elf.hpp"

void Elf::update()
{
    this->attackEnemy(UnitType::Orcs);
    this->attackEnemy(UnitType::Undeads);
}

void Elf::attackEnemy(UnitType type)
{
    Unit *enemyUnit = findNearestUnitByType(type);
    if (enemyUnit == nullptr)
    {
        return;
    }
    this->attack(enemyUnit);
}