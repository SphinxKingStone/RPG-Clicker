#ifndef ITEM_H
#define ITEM_H

#include "modifier.h"
#include <QFile>


class Item: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString source READ getSource)
    Q_PROPERTY(QVector<Modifier *> modifiers READ getModifiers)
public:
    Item();
    int getCost() const;
    void setCost(int value);
    int getRarity() const;
    void setRarity(int value);
    int getLevel() const;
    void setLevel(int value);
    QString getSource() const;
    void setSource(const QString &value);
    QVector<Modifier *> getModifiers() const;
    void setModifiers(const QVector<Modifier *> &value);

private:
    int cost;
    int rarity;
    int level;
    QString source;
    QVector<Modifier *> modifiers;
};

#endif // ITEM_H
