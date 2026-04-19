/**
 * @file main.cpp
 * @brief showcase of stack unwinding when exceptions are thrown
 * @details When an exception is thrown the exception all functions etc.
 * will be canceled and unwinded from the stack until an exception handler for 
 * the thrown exception is found
 */
/**
 * @addtogroup
 * @{
 * @defgroup s18_p05
 * @brief showcase of stack unwinding when exceptions are thrown
 * @details When an exception is thrown the exception all functions etc.
 * will be canceled and unwinded from the stack until an exception handler for 
 * the thrown exception is found
 * @}
 */
/**
 * @addtogroup s18_p05
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

void func_a();
void func_b();
void func_c();

int main() {

    cout << "Starting main" << endl;
    try{
    func_a();
    }
    catch(int &ex){
        cout << "Caught error in main" << endl;
    }
    cout << "Finishing main" << endl;
    

    cout << endl;
    return 0;
}

void func_a(){
    cout << "Starting func_a" << endl;
    func_b();
    cout << "Ending func_b" << endl;
}
void func_b(){
    cout << "Starting func_b" << endl;
    func_c();
    cout << "Ending fun_b" << endl;
}
void func_c(){
    cout << "Starting func_c" << endl;
    throw 100;
    cout << "Ending func_c" << endl;
}
/** @} */