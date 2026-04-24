/**
 * @file main.cpp
 * @brief showcase of unscoped enumerations
 */
/**
 * @defgroup section23 Section 23: Enumerations
 * @brief showcase of basic enumerations in c++
 */
/**
 * @addtogroup section23
 * @{
 * @defgroup s23_p01 UnscopedEnums
 * @brief showcase of unscoped enumerations
 * @}
 */
/**
 * @addtogroup s23_p01
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

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

enum Direction {North, South, East, West};
// enum Street {Main, North, Elm};              // compiler Error, unscoped enums can't have
                                                // redeclarations of their elements
// used for example 1
string direction_to_string(Direction direction){
    string result;
    switch(direction){
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
            break;
    }
    return result;
}

// used for example 2
enum Grocery_Item {Milk, Bread, Apple, Orange};
/**
 * @details overloading the stream insertion operator to insert
 * the string representation of the provided Grocery_Item
 * parameter into the output stream
 */
ostream &operator<<(ostream &os, Grocery_Item grocery_item){
    switch(grocery_item){
        case Milk:
            os << "Milk";
            break;
        case Bread:
            os << "Bread";
            break;
        case Apple:
            os << "Apple";
            break;
        case Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid Item";
    }
    return os;
}
bool is_valid_grocery_item(Grocery_Item grocery_item){
    switch (grocery_item){
        case Milk:
        case Bread:
        case Apple:
        case Orange:
            return true;
        default:
            return true;
    }
}
/**
 * @details Given a vector of Grocery_Items, this function displays
 * the string representation of each item using the overloaded
 * operator<< function
 * This function also keeps track of how many valid and invalid items 
 * are in the provided vector by using the is_valid_grocery_item function
 * written above
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
 * @details unscoped enumerations holding the possible states
 * and sequences of a rocket launch
 * @note the addition of the unknown enumerator of the State enumeration
 */
enum State{Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence{Abort, Hold, Launch};

/**
 * @details overloading the stream extraction operator to allow user to enter the state of State enumeration
 * @note the user of underlying_type_t
 */
istream &operator>>(istream &in, State &state){
    underlying_type_t<State> user_input;
    in >> user_input;
    switch(user_input){
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;
        default:
            cout << "User input is not a valid launch state" << endl;
            state = Unknown;
    }
    return in;
}
/**
 * @details overloading the stream insertion operator to insert 
 * the string representation of the provided Sequence
 * parameter into the output stream
 */
ostream &operator<<(ostream &out, const Sequence &sequence){
    switch(sequence){
        case Abort:
            out << "Abort";
            break;
        case Hold:
            out << "Hold";
            break;
        case Launch:
            out << "Launch";
            break;
    }
    return out;
}
// Displays an information message given the sequence parameter
void initiate(Sequence sequence){
    cout << "Initiate " << sequence << " sequence!" << endl;
}

int main() {

    cout << "=========================" << endl;
    // Example 1
    {

    /**
     * simple example that shows the use of an unscoped enumeration
     */

    Direction direction {North};
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;

    direction = West;
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;

    // direction = 5;       // compiler error

    // Be carefull casting since the compiler will asume 
    // that you know what you are doing!
    direction = Direction(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;

    direction = static_cast<Direction>(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;

    }
    // Example 1
    cout << "=========================" << endl;
    // Example 2
    {

    vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);

    // Grocery_Item item = 100;

    // Be careful when casting
    int Helicopter {1000};

    shopping_list.push_back(Grocery_Item(Helicopter));  // Invalid item
    shopping_list.push_back(Grocery_Item(0));           // Milk again

    display_grocery_list(shopping_list);

    }
    // Example 2
    cout << "=========================" << endl;
    // Example 3
    {
    /**
     * Using unscoped enums to control a rocket launch
     * Reads input from the user for the State of the rocket launch,
     * and then determines which Sequence to execute.
     */

     State state;
     cout << "Launch state: ";
     cin >> state;

     switch(state){
        case Engine_Failure:
        case Unknown:
            initiate(Abort);
            break;
        case Inclement_Weather:
            initiate(Hold);
            break;
        case Nominal:
            initiate(Launch);
            break;
     }
    }
    // Example 3
    cout << "=========================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */