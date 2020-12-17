#include "chest.h"

Chest::Chest(int id)
{
    this->id = id;
}

Chest::Chest(int id, int level)
{
    this->id = id;
    this->level = level;
}

int Chest::getId() const
{
    return id;
}

int Chest::getLevel() const
{
    return level;
}

void Chest::setLevel(int value)
{
    level = value;
}
