/**
 * @file main.cpp
 * @brief showcase of how function calls work
 * @details What typically happens when main calls func1 (or any function calls another)?
 * There are other ways to acheive the same results ;)
 * 
 * main:
 *  push space for the return value
 *  push space for the parameters
 *  push the returen address
 *  transfer control to func1 (jmp)
 * func1:
 *  push the address of the previous activation record
 *  push any register values that will need to be restored before returning to the caller
 *  perform the code int func1
 *  restore the register values
 *  restore the previous activation record (move the stack pointer)
 *  store any function result
 *  transfer control to the return address(jmp)
 * main:
 *  pop the marametes
 *  pop the return value
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p08 HowFunctionCallsWork
 * @brief showcase of how function calls work
 * @details What typically happens when main calls func1 (or any function calls another)?
 * There are other ways to acheive the same results ;)
 * 
 * main:
 *  push space for the return value
 *  push space for the parameters
 *  push the returen address
 *  transfer control to func1 (jmp)
 * func1:
 *  push the address of the previous activation record
 *  push any register values that will need to be restored before returning to the caller
 *  perform the code int func1
 *  restore the register values
 *  restore the previous activation record (move the stack pointer)
 *  store any function result
 *  transfer control to the return address(jmp)
 * main:
 *  pop the marametes
 *  pop the return value
 * @}
 */

/**
 * @addtogroup s11_p08
 * @{
 */

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int func1(int a, int b);
void func2(int &x, int y, int z);

int main() {
    int x {10};
    int y {20};
    int z {};

    z=func1(x,y);
    cout << z << endl;
    cout << endl;
    return 0;
}

int func1(int a, int b){
    int result {};
    result = a+b;
    func2(result, a, b);
    return result;
}

void func2(int &x, int y, int z){
    x += y + z;
}
/** @} */