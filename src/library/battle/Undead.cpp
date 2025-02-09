#include "Undead.hpp"

void Undead::update()
{
    this->attackEnemy(UnitType::Orcs);
    this->attackEnemy(UnitType::Elfs);
}

void Undead::attackEnemy(UnitType type)
{
    Unit *enemyUnit = findNearestUnitByType(type);
    if (enemyUnit == nullptr)
    {
        return;
    }
    this->attack(enemyUnit);
}