/**
 * @file .h
 * @brief the first header file, declaration of the account5 class
 */
/**
 * @addtogroup s13_p05
 * @{
 */
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

/**
 * @brief a class that safes account5 name and account5 balance
 * @param name c++ string variable which stores the name of the account5
 * @param balance variable of type double which stores the balance of the account5
 */
class Account5 {
private:
    std::string name;
    double balance;

public:
    /**
     * @brief sets the balance of the account5 to a certain value
     */
    void set_balance(double bal){
        balance = bal;
    }
    /**
     * @brief returns the balance of the account5
     */
    double get_balance(){
        return balance;
    }
    /**
     * @brief sets the name of the account5 to an entered string
     */
    void set_name(std::string n);
    /**
     * @brief returns the name of the account5
     */
    std::string get_name();
    /**
     * @brief deposits an entered amount to the account5
     * @details adds the entered amount to the balance of the account5
     * should have a check whether the deposition is legal/valid or not
     * 
     * ----- returns true if succesfull | else returns false -----
     */
    bool deposit(double amount);
    /**
     * @brief withdraws an entered amount from the account5
     * @details subtracts the entered amount from the balance of the account5
     * if the ammount is bigger than the balance no withdrawal will be made
     * 
     * ----- returns true if succesfull | else returns false -----
     */
    bool withdraw(double amount);

};

#endif
/** @} */