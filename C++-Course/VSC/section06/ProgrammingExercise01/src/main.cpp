/**
 * @file main.cpp
 * @brief program to file an employee profile
 */

/**
 * @addtogroup section06
 * @{
 * @defgroup s06_p05 ProgrammingExercise01
 * @brief program to file an employee profile
 * @}
 */

 /**
  * @addtogroup s06_p05
  * @{
  */
#include <iostream>

using namespace std;

int main() {

    // Task 1 -- Employee-Profile

    int age {0};
    double hourly_wage {23.50};
    string name {0};
    
    cout << "Enter your name and age seperated by spaces: ";
    cin >> name >> age;
    cout << name << " " << age << " " << hourly_wage;

    // Task 1 -- Employee-Profile


    return 0;
}
/** @} */