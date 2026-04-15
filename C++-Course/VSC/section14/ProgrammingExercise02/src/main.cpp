/**
 * @file main.cpp
 * @brief programming exercise 02: practice using operator overloading
 */
/**
 * @addtogroup section14
 * @{
 * @defgroup s14_pe02 ProgrammingExercise02
 * @brief programming exercise 02: practice using operator overloading
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s14_pe02
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Moneyv1.h"

int main() {
    Moneyv1 obj1 {1150};
    Moneyv1 obj2 {12, 70};
    Moneyv1 obj3 {11, 50};
    Moneyv1 obj4 {0};
    cout << "Displaying Object 1: [11$ 50ct]" << endl;
    obj1.display();
    cout << endl;
    
    cout << "Displaying Object 2: [12$, 70ct]" << endl;
    obj2.display();
    cout << endl;

    cout << "Displaying Object 3: [11$, 50ct]" << endl;
    obj3.display();
    cout << endl;

    cout << "Displaying Object 4: [ 0$, 0 ct]" << endl;
    obj4.display();
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


    obj4 = obj1 + obj3;
    cout << endl << "Displaying Object 4 (again): [23$,  0ct]" << endl;
    obj4.display();
    cout << endl;
    

    cout << endl;
    return 0;
}
/** @} */