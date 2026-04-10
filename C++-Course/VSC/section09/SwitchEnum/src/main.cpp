/**
 * @file main.cpp
 * @brief showcase of using the switch statement with enumerations in c++
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_p12 SwitchEnum
 * @brief showcase of using the switch statement with enumerations in c++
 * @}
 */

/**
 * @addtogroup s09_p12
 * @{
 */
#include <iostream>

using namespace std;

int main() {

    enum Direction {
        left,right,up,down
    };

    /**
     * The compiler knows how many elements an enumeration has.
     * If the enumeration is used in a SwitchCase Statement and not all
     * elements of the enumeration are used, the compiler will give out a 
     * Warning.
     * 
     * Either use all elements of the enumeration or use the default case to
     * handle the fallthrough.
     */


    Direction heading {left};

    switch(heading){
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        // case up:
        //     cout << "Going up" << endl;
        // case down:
        //     cout << "Goind down" << endl;
        default:
            cout << "Heading nowhere!" << endl;
    }

    cout << endl;
    return 0;
}
/** @} */