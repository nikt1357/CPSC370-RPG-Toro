#include <string>
#include <vector>
#include "Monster.h"
#include "Dungeon.h"
using namespace std;

Dungeon::Dungeon()
{
    /* TO DO */
}

int Dungeon::get_rooms()
{
    return rooms;
}

vector<Monster> Dungeon::get_possible_monsters() 
{
    return possible_monsters;
}

vector<Item> Dungeon::get_possible_items()
{
    return possible_items;
}

Monster Dungeon::generate_monster(vector<Monster> monsters)
{


    /* TO DO*/
    

}

Item Dungeon::generate_item(vector<Item> items)
{


    /* TO DO*/


}