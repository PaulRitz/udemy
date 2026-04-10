/**
 * @file main.cpp
 * @brief showcase of using arrays with pointers
 */

/**
 * @defgroup section12 Section 12: Pointers and References
 * @brief in this section pointers and references are presented as well as their usage
 */

/**
 * @addtogroup section12
 * @{
 * @defgroup s12_p01 ArraysAndPointers
 * @brief showcase of using arrays with pointers
 * @}
 */

/**
 * @addtogroup s12_p01
 * @{
 */
#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int main() {

    int scores[] {100,95,89};

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArrays subscript notation -------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation -------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl,
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation -------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr+1) << endl;
    cout << *(score_ptr+2) << endl;

    cout << "\nArray offset notation -------------------" << endl;
    cout << *scores << endl;
    cout << *(scores+1) << endl;
    cout << *(scores+2) << endl;

    cout << endl;
    return 0;
}
/** @} */