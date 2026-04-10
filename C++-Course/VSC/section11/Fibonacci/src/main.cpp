/**
 * @file main.cpp
 * @brief shows how the fibonacci numbers are calculatet recursively
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p04 Fibonacci
 * @brief shows how the fibonacci numbers are calculatet recursively
 * @}
 */

/**
 * @addtogroup s11_p04
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

unsigned long long fibonacci(unsigned long long n);

int main() {

    cout << fibonacci(5) << endl;
    cout << fibonacci(30) << endl;
    cout << fibonacci(40) << endl;

    cout << endl;
    return 0;
}

unsigned long long fibonacci(unsigned long long n){
    if(n<=1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
/** @} */