#include "itemgenerator.h"

ItemGenerator::ItemGenerator()
{

}

Item* ItemGenerator::generate(Chest chest)
{
    Item *item = new Item();
    item->setRarity(1);
    item->setLevel(1); // 1 = chest.getLevel();

    QString base = dataManager.getBases()[1];
    if (base == "chestplate") {
        QString chestplate = dataManager.getChestplates()[0];
        item->setSource("resources/weapons/" + chestplate + ".png");

        QVector<Modifier *> chestplatesModifiers = dataManager.getChestplatesModifiers();
        int numberOfModifiers = QRandomGenerator::global()->bounded(1,3);
        QVector<Modifier *> mods;
        for (int i = 0; i < numberOfModifiers; i++){
            mods.append(chestplatesModifiers[QRandomGenerator::global()->bounded(0, chestplatesModifiers.size())]);
        }
        item->setModifiers(mods);
    }

//    QVector<Modifier *> mods;
//    QVector<float> values;
//    values.append(7);
//    values.append(12);
//    mods.append(new Modifier("Добавляет # Здоровья #",  values));
//    mods.append(new Modifier("Добавляет # Силы #",  values));
//    item->setModifiers(mods);
    return item;
}
