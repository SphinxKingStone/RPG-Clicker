#ifndef ITEMGENERATOR_H
#define ITEMGENERATOR_H

#include <QObject>
#include <QRandomGenerator>

#include "item.h"
#include "chest.h"
#include "datamanager.h"


class ItemGenerator: public QObject
{
    Q_OBJECT
public:
    ItemGenerator();

    Item* generate(Chest chest); //also add chest

private:
    DataManager dataManager;
};

#endif // ITEMGENERATOR_H
