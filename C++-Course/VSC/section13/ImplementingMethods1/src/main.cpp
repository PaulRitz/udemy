/**
 * @file main.cpp
 * @brief showcase on how to implement a method
 */
/**
 * @addtogroup
 * @{
 * @defgroup s13_p04 ImplementingMethods1
 * @brief showcase on how to implement a method
 * @}
 */
/**
 * @addtogroup s13_p04
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

class Account {
private:
    // attributes
    string name;
    double balance;
public:
    // methods
    void set_balance(double bal){
        balance = bal;
    }
    double get_balance(){
        return balance;
    }
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){
    name = n;
}
string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
    // cout << "In deposit" << endl;
    return true;
}
bool Account::withdraw(double amount){
    if(balance - amount >= 0){
    balance -= amount;
    // cout << "In Withdraw" << endl;
    return true;
    }
    else{
        return false;
    }
}

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if(frank_account.deposit(200.0)){
        cout << "Deposit OK" << endl;
    }
    else{
        cout << "Deposit Not allowed" << endl; 
    }

    if(frank_account.withdraw(500.0)){
        cout << "Withdrawal OK" << endl;
    }
    else{
        cout << "Not sufficient funds" << endl;
    }

    if(frank_account.withdraw(1500.0)){
        cout << "Withdrawal OK" << endl;
    }
    else {
        cout << "Not sufficient funds" << endl;
    }
    

    cout << endl;
    return 0;
}
/** @} */