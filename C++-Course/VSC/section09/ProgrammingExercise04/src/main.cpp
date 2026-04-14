/**
 * @file main.cpp
 * @brief programming exercise 04: practice using control structures
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_pe04 ProgrammingExercise04
 * @brief programming exercise 04: practice using control structures
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s09_pe04
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    int sum {0};
    
    for(unsigned int i = 0; i <= 15; i++){
        if(i%2!=0){
            sum += i;
        }
    }

    cout << sum << endl;
    cout << endl;
    return 0;
}
/** @} */