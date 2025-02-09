#include "library/GameScene.hpp"
#include "GameScene.hpp"

void GameScene::addGameObject(GameObject *gameObject)
{
    this->gameObjects.push_back(gameObject);
}

std::vector<GameObject *> GameScene::getGameObjects()
{
    return this->gameObjects;
}