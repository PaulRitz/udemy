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

class Player {
public:
    // attributes

    string name {"Player"};
    int health {100};
    int xp {3};

    // methods

    void talk(string text_to_say){
        cout << name << " says: " << text_to_say << endl;
    };
    bool is_dead();
};

class Account {
public:
    // attributes
    string name {"Account"};
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
    Player Frank;
    Frank.name = "Frank";
    Frank.health = 100;
    Frank.xp = 12;
    
    Frank.talk("Hello there!");
    
    Player Kevin;
    Kevin.name = "Kevin Rothmann";
    Kevin.health = 700;
    Kevin.xp = -5;
    Kevin.talk("HAAAAAAAAAALLLLLLO!!!");
    
    Player* enemy = new Player;
    (*enemy).name = "enemy";
    enemy->name ="Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");
    // Example 1
    cout << "==========================================" << endl;
    // Example 2

    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Account* mary_account = new Account;
    mary_account->name = "Mary's account";
    mary_account->balance = 67000.0;
    mary_account->deposit(6969.69);
    mary_account->withdraw(4242.42);

    // Example 2
    cout << "==========================================" << endl;
    
    cout << endl;
    return 0;
}
/** @} */