/**
 * @file main.cpp
 * @brief programming exercise 01: practice using operator overloading
 */
/**
 * @addtogroup section14
 * @{
 * @defgroup s14_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using operator overloading
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s14_pe01
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Moneyv0.h"

int main() {
    Moneyv0 obj1 {1150};
    Moneyv0 obj2 {12, 70};
    Moneyv0 obj3 {11, 50};
    cout << "Displaying Object 1: [11$ 50ct]" << endl;
    obj1.display();
    cout << endl;
    
    cout << "Displaying Object 2: [12$, 70ct]" << endl;
    obj2.display();
    cout << endl;

    cout << "Displaying Object 3: [11$, 50ct]" << endl;
    obj3.display();
    cout << endl;
    
    cout << boolalpha << endl;
    cout << "Comparing: obj1==obj2" << endl;
    cout << "Expected: false,   Actual: " << (obj1==obj2) << endl; 

    cout << "Comparing: obj2==obj3" << endl;
    cout << "Expected: false,   Actual: " << (obj3==obj2) << endl;   

    cout << "Comparing: obj1==obj3" << endl;
    cout << "Expected: true,    Actual: " << (obj3==obj1) << endl << endl;

    cout << "Comparing: obj1!=obj2" << endl;
    cout << "Expected: true,    Actual: " << (obj3==obj1) << endl;

    cout << "Comparing: obj2!=obj3" << endl;
    cout << "Expected: true,    Actual: " << (obj2!=obj3) << endl;

    cout << "Comparing: obj1!=obj3" << endl;
    cout << "Expected: false,   Actual: " << (obj1!=obj3) << endl;

    cout << endl;
    return 0;
}
/** @} */