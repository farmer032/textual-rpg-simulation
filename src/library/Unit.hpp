#ifndef UNIT_HPP
#define UNIT_HPP

#include "library/GameObject.hpp"

#include <iostream>
#include <string>

class Unit : public GameObject
{

private:
    std::string name;
    int health;
    int damage;
    bool isAlive;

public:
    Unit(std::string name, int health, int damage) : name(name),
                                                     health(health),
                                                     damage(damage),
                                                     isAlive(true) {}
    void update();
    void attack(Unit *anotherUnit);
    void kill();
    bool alive();
    void takeDamage(int value);
};

#endif