/**
 * @file main.cpp
 * @brief programming exercise 03: practice using operator overloading
 */
/**
 * @addtogroup section14
 * @{
 * @defgroup s14_pe03 ProgrammingExercise03
 * @brief programming exercise 03: practice using operator overloading
 * @}
 */
/**
 * @ingroup PEs
 * @addtogroup s14_pe03
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/Moneyv2.h"

int main() {
    Moneyv2 obj1 {1150};
    Moneyv2 obj2 {12, 70};
    Moneyv2 obj3 {11, 50};
    Moneyv2 obj4 {0};
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

    cout << "Displaying with output stream only: " << endl;
    cout << obj1 << endl;
    cout << obj2 << endl;
    cout << obj3 << endl;
    cout << obj4 << endl;
    

    cout << endl;
    return 0;
}
/** @} */