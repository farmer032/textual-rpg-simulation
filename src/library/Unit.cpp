#include "library/Unit.hpp"

#include <string>
#include <iomanip>

void Unit::update()
{
}

void Unit::attack(Unit *anotherUnit)
{
    if (alive())
    {

        if (anotherUnit->alive())
        {
            std::cout << std::quoted(this->name) << " attack " << std::quoted(anotherUnit->name) << " with damage " << this->damage << '\n';
            anotherUnit->takeDamage(this->damage);
        }
        else
        {
            std::cout << std::quoted(anotherUnit->name) << " already dead" << '\n';
        }
    }
}

void Unit::kill()
{
    std::cout << std::quoted(this->name) << " is dead" << '\n';
    this->isAlive = false;
}

bool Unit::alive()
{
    return this->isAlive;
}

void Unit::takeDamage(int value)
{
    int hpLeft = (health - value) >= 0 ? this->health - value : 0;

    std::cout << std::quoted(this->name) << " got damage: " << value << " : " << (hpLeft) << " HP left" << '\n';

    if (hpLeft == 0)
    {
        kill();
    }
    else
    {
        this->health -= value;
    }
}
