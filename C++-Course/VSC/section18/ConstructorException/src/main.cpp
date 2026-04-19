/**
 * @file main.cpp
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup section18
 * @{
 * @defgroup s18_p07 ConstructorExceptions
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_p07
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/I_printablev3.h"
#include "../include/Accountv5.h"
#include "../include/Savings_Accountv5.h"
#include "../include/Account_Util.h"
#include "../include/Checking_Accountv5.h"
#include "../include/Trust_Accountv5.h"

int main() {
    cout << "========================" << endl;

    try{
        unique_ptr<Accountv5> moes_account = make_unique<Checking_Accountv5>("Moe", -10.0);
        cout << *moes_account << endl;
    }
    catch(const IllegalBalanceException0 &ex){
        cout << "Couldn't create account -- negative balance" << endl;
    }
    cout << "Programm completed successfully" << endl;
    cout << "========================" << endl;
    cout << endl;
    return 0;
}


/** @} */