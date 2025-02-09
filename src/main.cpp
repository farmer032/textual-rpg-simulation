#include <iostream>

#include "library/GameScene.hpp"
#include "library/battle/BattleScene.hpp"
#include "library/battle/Orc.hpp"
#include "library/battle/Elf.hpp"
#include "library/battle/Undead.hpp"
#include "library/GameInstance.hpp"

int main(int argc, char **argv)
{

    GameScene *scene = new BattleScene();

    scene->addGameObject(new Orc(scene, 1, "Grommash Orc"));
    scene->addGameObject(new Orc(scene, 2, "Rubaka Orc"));
    scene->addGameObject(new Orc(scene, 3, "Chubaka Orc"));

    scene->addGameObject(new Elf(scene, 4, "Elven Elf"));
    scene->addGameObject(new Elf(scene, 5, "Some Elf"));
    scene->addGameObject(new Elf(scene, 6, "Ulu Elf"));

    scene->addGameObject(new Undead(scene, 7, "Ded Undead"));
    scene->addGameObject(new Undead(scene, 8, "Maad Undead"));
    scene->addGameObject(new Undead(scene, 9, "Crazy Undead"));
    scene->addGameObject(new Undead(scene, 10, "Skuf Undead"));
    scene->addGameObject(new Undead(scene, 11, "Skull Undead"));

    GameInstance *instance = new GameInstance(scene);

    instance->start();

    return EXIT_SUCCESS;
}