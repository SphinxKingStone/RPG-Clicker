#include "datamanager.h"

DataManager::DataManager()
{
    bases.append("helmet");
    bases.append("chestplate");
}

QVector<QString> DataManager::getHelmets()
{
    QVector<QString> helmets;
    helmets.append("leather hood");

    return helmets;
}

QVector<QString> DataManager::getChestplates()
{
    QVector<QString> chestplates;
    chestplates.append("leather chestplate");

    return chestplates;
}

QVector<Modifier *> DataManager::getChestplatesModifiers()
{
    QVector<Modifier *> chestplatesModifiers;
    chestplatesModifiers.append(new Modifier("+ # Силы"));
    chestplatesModifiers.append(new Modifier("+ # Здоровья"));

    return chestplatesModifiers;
}

QVector<QString> DataManager::getBases()
{
    return bases;
}
