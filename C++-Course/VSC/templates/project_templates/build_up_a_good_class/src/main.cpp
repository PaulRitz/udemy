/**
 * @file main.cpp
 * @brief showcase of access modifiers in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p03
 * @brief showcase of access modifiers in c++
 * @}
 */
/**
 * @addtogroup s13_p03
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Player {
private:
    // attributes
    string name {"Player"};
    int health {100};
    int xp {3};

    // methods
public:
    void talk(string text_to_say){
        cout << name << " says: " << text_to_say << endl;
    }
    bool is_dead();
};

class Account {
private:
    // attributes
    string name {"Account"};
    double balance {0.0};

public:
    // methods
    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
        return true;
    }
    bool withdraw(double bal){
        balance -= bal;
        cout << "In withdraw" << endl;
        return true;
    }
};

int main() {

    cout << endl;
    return 0;
}
/** @} */