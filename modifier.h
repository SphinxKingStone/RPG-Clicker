#ifndef MODIFIER_H
#define MODIFIER_H

#include <QString>
#include <QVector>
#include <QObject>


class Modifier: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getModifier)
public:
    Modifier(QString name);
    Modifier(QString name, QVector<float> values);

    QString getModifier();

    QString getName() const;
    void setName(const QString &value);
    QVector<float> getValues() const;
    void setValues(const QVector<float> &value);

private:
    QString name;
    QVector<float> values;
    QString type; // Здоровье, урон

};

#endif // MODIFIER_H
