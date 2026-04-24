/**
 * @file main.cpp
 * @brief showcase of scoped enumerations in c++
 */
/**
 * @addtogroup section23
 * @{
 * @defgroup s23_p02 ScopedEnums
 * @brief showcase of scoped enumerations in c++
 * @}
 */
/**
 * @addtogroup s23_p02
 * @{
 */

#ifndef FILES_IN_DIR
#define FILES_IN_DIR "files/in/"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out/"
#endif

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <algorithm>
#include "../include/player12.h"

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

/**
 * scoped enumeration holding the items for a grocery list
 * The value of the enumerator could be the item code
 */
enum class Grocery_Item {Milk=350, Bread=250, Apple=132, Orange=100};
/**
 * @details Overloaded stream insertion operator.
 * Inserts the name grocery item parameter to the input stream
 */
ostream &operator<<(ostream &out, Grocery_Item grocery_item){
    underlying_type_t<Grocery_Item> value = underlying_type_t<Grocery_Item>(grocery_item);
    switch(grocery_item){
        case Grocery_Item::Milk:
            out << "Milk";
            break;
        case Grocery_Item::Bread:
            out << "Bread";
            break;
        case Grocery_Item::Apple:
            out << "Apple";
            break;
        case Grocery_Item::Orange:
            out << "Orange";
            break;
        default:
            out << "Invalid item";
    }
    out << ": " << value;
    return out;
}
/**
 * @details Returns a boolean depending on whether the Grocery_Item
 * parameter is a valid enumerator or not
 */
bool is_valid_grocery_item(Grocery_Item grocery_item){
    switch(grocery_item){
        case Grocery_Item::Milk:
        case Grocery_Item::Bread:
        case Grocery_Item::Apple:
        case Grocery_Item::Orange:
            return true;
        default:
            return false;
    }
}
/**
 * @details Displays the grocery items in the grocery list
 * Given a vector of Grocery_items, this function displays
 * the string representation of each item using the overloaded
 * operator<< function.
 * This function also keeps track of how many valid and invalid items
 * are in the provided vector by using the is_valid_grocery_item function
 * written above.
 */
void display_grocery_list(const vector<Grocery_Item> &grocery_list){
    cout << "Grocery List" << endl;
    cout << "============" << endl;
    int invalid_item_count {0};
    int valid_item_count{0};
    for(Grocery_Item grocery_item : grocery_list){
        cout << grocery_item << endl;
        if(is_valid_grocery_item(grocery_item)){
            valid_item_count++;
        }else{
            invalid_item_count++;
        }
    }
    cout << "============" << endl;
    cout << "Valid items: " << valid_item_count << endl;
    cout << "Invalid items: " << invalid_item_count << endl;
    cout << "Total items: " << valid_item_count+invalid_item_count << endl;
}

/**
 * @details a simple function that returns the string representation 
 * of the Player::Mode parameter passed into it.
 */
string get_player_mode(Player12::Mode mode){
    string result;
    switch(mode){
        case Player12::Mode::Attack:
            result = "Attack";
            break;
        case Player12::Mode::Defense:
            result = "Defense";
            break;
        case Player12::Mode::Idle:
            result = "Idle";
            break;
    };
    return result;
}
/**
 * @details A simple funciton that returns the string representation 
 * of the Player::Direction parameter passed into it
 */
string get_player_direction(Player12::Direction direction){
    string result;
    switch(direction){
        case Player12::Direction::East:
            result = "East";
            break;
        case Player12::Direction::North:
            result = "North";
            break;
        case Player12::Direction::South:
            result = "South";
            break;
        case Player12::Direction::West:
            result = "West";
            break;
    };
    return result;
}
ostream &operator<<(ostream &out, const Player12 &source){
    out << "-- name: " << source.get_name() << endl;
    out << "-- health: " << source.get_health() << endl;
    out << "-- xp: " << source.get_xp() << endl;
    out << "-- mode: " << get_player_mode(source.get_mode()) << endl;
    out << "-- direction: " <<  get_player_direction(source.get_direction()) << endl;
    return out;
}

int main() {

    cout << "========================" << endl;
    // Example 1
    {
        vector<Grocery_Item> shopping_list;

        shopping_list.push_back(Grocery_Item::Apple);
        shopping_list.push_back(Grocery_Item::Milk);
        shopping_list.push_back(Grocery_Item::Orange);

        int Helicopter {1000};

        shopping_list.push_back(Grocery_Item(Helicopter));
        shopping_list.push_back(Grocery_Item(350));

        display_grocery_list(shopping_list);
    }
    // Example 1
    cout << "========================" << endl;
    // Example 2
    {

    Player12 p1{"Cloud Strife", Player12::Mode::Attack, Player12::Direction::North};
    Player12 p2{"Cloud Strife", Player12::Mode::Defense, Player12::Direction::West};
    Player12 p3{"Cloud Strife", Player12::Mode::Idle, Player12::Direction::South};

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    }
    // Example 2
    cout << "========================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */