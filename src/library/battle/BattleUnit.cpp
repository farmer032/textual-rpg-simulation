#include "library/battle/BattleUnit.hpp"

UnitType BattleUnit::type()
{
    return this->unitType;
}

void BattleUnit::update()
{

}

BattleUnit *BattleUnit::findNearestUnitByType(UnitType type)
{
    for (auto && unit : this->scene->getGameObjects()) {
        BattleUnit * bu = reinterpret_cast<BattleUnit*>(unit);

        if (bu->type() == type && bu->alive()) {
            return bu;
        }
    }
    return nullptr;
}