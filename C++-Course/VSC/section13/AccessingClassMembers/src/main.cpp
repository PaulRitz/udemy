/**
 * @file main.cpp
 * @brief showcase of accessing classmembers in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p02 AccessingClassMembers
 * @brief showcase of accessing classmembers in c++
 * @}
 */
/**
 * @addtogroup s13_p02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Player1 {
public:
    // attributes

    string name {"Player1"};
    int health {100};
    int xp {3};

    // methods

    void talk(string text_to_say){
        cout << name << " says: " << text_to_say << endl;
    };
    bool is_dead();
};

class Account1 {
public:
    // attributes
    string name {"Account1"};
    double balance {0.0};

    // methods
    bool deposit(double bal){
        balance += bal;
        cout << "in_deposit" << endl;
        return true;
    };
    bool withdraw(double bal){
        balance -= bal;
        cout << "in_withdraw" << endl;
        return true;
    };
};

int main() {

    cout << "==========================================" << endl;
    // Example 1
    Player1 Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;
    
    Frank.talk("Hello there!");
    
    Player1 Kevin;
    Kevin.name = "Kevin Rothmann";
    Kevin.health = 700;
    Kevin.xp = -5;
    Kevin.talk("HAAAAAAAAAALLLLLLO!!!");
    
    Player1* enemy = new Player1;
    (*enemy).name = "enemy";
    enemy->name ="Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    // Example 1
    cout << "==========================================" << endl;
    // Example 2

    Account1 frank_account1;
    frank_account1.name = "Frank's account1";
    frank_account1.balance = 5000.0;

    frank_account1.deposit(1000.0);
    frank_account1.withdraw(500.0);

    Account1* mary_account1 = new Account1;
    mary_account1->name = "Mary's account1";
    mary_account1->balance = 67000.0;
    mary_account1->deposit(6969.69);
    mary_account1->withdraw(4242.42);

    // Example 2
    cout << "==========================================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */