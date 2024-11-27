#include <string>
#include <vector>
#include "Item.h"
#include "Monster.h"
using namespace std;

/**
 * Character class that represents the player
 */
class Character 
{
    public:
        /**
         * Constructs a Character with default stats
         */
        Character(string char_name) 
        {
            name = char_name;
            level = 1;
            health = 15;
            attack = 5;
            xp = 0;
        }

        /**
         * Getter function for a Character's name
         * @return the name
         */
        string get_name()
        {
            return name;
        }

        /**
         * Getter function for a Character's level
         * @return the level
         */
        int get_level()
        {
            return level;
        }

        /**
         * Setter function for a Character's level
         */
        void set_level(int new_level)
        {
            level = new_level;
        }

        /**
         * Getter function for a Character's health
         * @return the health
         */
        int get_health()
        {
            return health;
        }

        /**
         * Setter function for a Character's health
         */
        void set_health(int new_health)
        {
            health = new_health;
        }

        /**
         * Getter function for a Character's xp
         * @return the xp
         */
        int get_xp()
        {
            return xp;
        }

        /**
         * Setter function for a Character's xp
         */
        void set_xp(int new_xp)
        {
            xp = new_xp;
        }

        /**
         * Getter function for Character's inventory
         * @return the inventory
         */
        vector<Item> get_inventory()
        {
            return inventory;
        }

        /**
         * Function that adds a given Item into the Character's inventory if there is enough space
         * @return 0 on success
         * @return 1 on failure
         */
        int add_to_inventory(Item item) 
        {
            if (inventory.size() >= 5)
            {
                return 1;
            } 
            inventory.push_back(item);
            return 0;
        }

        /**
         * Function that handles fighting an enemy
         */
        void fight(Monster monster) 
        {
            /* TO DO */
        }
    private:
        string name;
        int level;
        int health;
        int attack;
        int xp;
        vector<Item> inventory;
};
