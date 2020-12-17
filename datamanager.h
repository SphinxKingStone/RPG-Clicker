#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QVector>
#include "modifier.h"

class DataManager
{
public:
    DataManager();

    QVector<QString> getHelmets();
    QVector<QString> getChestplates();
    QVector<Modifier *> getChestplatesModifiers();
    QVector<QString> getBases();

private:
    QVector<QString> bases;
};

#endif // DATAMANAGER_H
