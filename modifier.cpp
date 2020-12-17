#include "modifier.h"

Modifier::Modifier(QString name)
{
    this->name = name;
}

Modifier::Modifier(QString name, QVector<float> values)
{
    this->name = name;
    this->values = values;
}

QString Modifier::getModifier()
{
    if (name.count("#") != values.size())
        return name;

    QString result = name;
    int count = 0;
    int index = result.indexOf("#");
    while (index != -1) {
         result.replace(index, 1, QString::number(values[count]));
         index = result.indexOf("#");
         count++;
     }
     return result;
}

QString Modifier::getName() const
{
    return name;
}

void Modifier::setName(const QString &value)
{
    name = value;
}

QVector<float> Modifier::getValues() const
{
    return values;
}

void Modifier::setValues(const QVector<float> &value)
{
    values = value;
}
