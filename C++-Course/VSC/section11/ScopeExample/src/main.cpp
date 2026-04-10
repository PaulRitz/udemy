/**
 * @file main.cpp
 * @brief showcase of scopes in c++
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_p12 ScopeExample
 * @brief showcase of scopes in c++
 * @}
 */

/**
 * @addtogroup s11_p12
 * @{
 */

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void local_example(int x);
void global_example();
void static_local_example();

int num {300}; // Global variable - declared outside any class or function

int main() {

    int num {100};                  // local variables (to the main function)
    int num1 {500};

    cout << "============================" << endl << endl;
    // Example 1
    
    cout << "Local num is: " << num << " in main" << endl;
    
    {   // new (sub-) level of scope
        int num {200};              // local to this scope
                                    // overshadows the higher layerd num variable
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out -- num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl; 
                                    // The overshadowing happens only in the scope
                                    // after the scope the overshadowed value takes place again
    // Example 1
    cout << "============================" << endl << endl;
    // Example 2

    local_example(10);
    cout << endl;
    local_example(20);

    // Example 2
    cout << "============================" << endl << endl;
    // Example 3

    global_example();
    global_example();

    // Example 3
    cout << "============================" << endl << endl;
    // Example 4

    static_local_example();
    static_local_example();
    static_local_example();

    // Example 4
    cout << "============================" << endl << endl;
    
    cout << endl;
    return 0;
}

void local_example(int x){
    int num {1000};
    cout << "Local num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
}
void global_example(){
    cout << "Global num is: " << num << " in global_example - start" << endl;
    num *= 2;
    cout << "Global num is:" << num << " in global_example - start" << endl;
}
void static_local_example(){
    static int num {5000};
    cout << "Local static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static_local_example - end" << endl;
}
/** @} */