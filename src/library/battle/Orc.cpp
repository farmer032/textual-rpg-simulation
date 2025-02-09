#include "library/battle/Orc.hpp"
#include "Orc.hpp"

void Orc::update()
{
    this->attackEnemy(UnitType::Elfs);
    this->attackEnemy(UnitType::Undeads);
}

void Orc::attackEnemy(UnitType type)
{
    Unit *enemyUnit = findNearestUnitByType(type);
    if (enemyUnit == nullptr)
    {
        return;
    }
    this->attack(enemyUnit);
}