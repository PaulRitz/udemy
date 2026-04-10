/**
 * @file main.cpp
 * @brief showcase of declaring c++ classes and objects
 */
/**
 * @defgroup section13 Section 13: OOP - Classes and Objects
 * @brief introduction to oop (object oriented programming)
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p01 DeclareClassAndObjects
 * @brief showcase of declaring c++ classes and objects
 * @}
 */
/**
 * @addtogroup s13_p01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Player {
public:
    // attributes

    string name {"Player"};
    int health {100};
    int xp {3};

    // methods

    void talk(string text_to_say);
    bool is_dead();
};

class Account {
public:
    // attributes
    string name {"Account"};
    double balance {0.0};

    // methods
    bool deposit(double bal);
    bool withdraw(double bal);
};

int main() {

    Player Frank;
    Player Hero;

    Player* enemy = new Player;

    Account Frank_acc;
    Account Jim_acc;

    Account* Mary_acc;
    
    cout << endl;
    return 0;
}
/** @} */