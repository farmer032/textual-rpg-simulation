#include "library/GameInstance.hpp"

void GameInstance::start()
{
    while (true)
    {
        std::cout << "Updating scene..." << std::endl;
        this->scene->update();
    }
}