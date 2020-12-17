#include "item.h"

Item::Item()
{

}

int Item::getCost() const
{
    return cost;
}

void Item::setCost(int value)
{
    cost = value;
}

int Item::getRarity() const
{
    return rarity;
}

void Item::setRarity(int value)
{
    rarity = value;
}

int Item::getLevel() const
{
    return level;
}

void Item::setLevel(int value)
{
    level = value;
}

QString Item::getSource() const
{
    return source;
}

void Item::setSource(const QString &value)
{
    source = value;
}

QVector<Modifier *> Item::getModifiers() const
{
    return modifiers;
}

void Item::setModifiers(const QVector<Modifier *> &value)
{
    modifiers = value;
}
