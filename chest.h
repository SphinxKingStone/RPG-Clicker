#ifndef CHEST_H
#define CHEST_H


class Chest
{
public:
    Chest(int id);
    Chest(int id, int level);

    int getId() const;
    int getLevel() const;
    void setLevel(int value);

private:
    int id;
    int level;
};

#endif // CHEST_H
