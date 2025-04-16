#include <iostream>
using namespace std;
class Monster
{
public:
    string name;
    string character;
    virtual void AttackOfMonster() = 0;
};
class Dragon : public Monster
{
public:
    void AttackOfMonster()
    {
        cout << "Dragon: spill out Fire and will Burn You.\n";
    }
};
class Zombie : public Monster
{
public:
    void AttackOfMonster()
    {
        cout << "Zombie: It will Bite You and Become Zombie.\n";
    }
};
class Vampire : public Monster
{
public:
    void AttackOfMonster()
    {
        cout << "Vampire: can Sowallow you.\n";
    }
};
int main()
{
    Monster *monsters[3];
    monsters[0] = new Dragon();
    monsters[1] = new Zombie();
    monsters[2] = new Vampire();
    for (int i = 0; i <= 2; i++)
        monsters[i]->AttackOfMonster();
    system("pause>0");
    return 0;
}