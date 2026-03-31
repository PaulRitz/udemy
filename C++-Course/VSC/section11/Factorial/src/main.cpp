#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

unsigned long long factorial(unsigned long long n);

int main() {

    cout << factorial(5) << endl;
    cout << factorial(15) << endl;
    cout << factorial(25) << endl;

    cout << endl;
    return 0;
}

/**
 * @file main.cpp
 * @brief shows how the factorial number is calculated recursively
 */
unsigned long long factorial(unsigned long long n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}