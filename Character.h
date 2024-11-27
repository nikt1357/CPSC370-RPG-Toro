#include <string>
#include "Item.h"
#include "Monster.h"
using namespace std;

/**
 * Character class that represents the player
 */
class Character 
{
    public:
        Character();
        string get_name();
        int get_level();
        int get_health();
        array<Item, 5> open_bag();
        void add_to_bag(Item item);
        void attack(Monster monster);
    private:
        string name;
        int level;
        int health;
        int attack;
        int xp;
        Item inventory[5];
};