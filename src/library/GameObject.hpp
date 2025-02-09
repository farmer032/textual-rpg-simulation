#ifndef GAME_OBJECT
#define GAME_OBJECT

class GameObject
{
public:
    GameObject();
    virtual void update() = 0;
};

#endif