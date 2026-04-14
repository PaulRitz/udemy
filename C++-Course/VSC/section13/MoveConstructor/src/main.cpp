/**
 * @file main.cpp
 * @brief showcase of the move constructor in c++
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_p14 MoveConstructor
 * @brief showcase of the move constructor in c++
 * @}
 */
/**
 * @addtogroup s13_p14
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "../include/header.h"

int main() {

    vector<Move0> vec;

    vec.push_back(Move0{10});
    vec.push_back(Move0{20});
    vec.push_back(Move0{30});
    vec.push_back(Move0{40});
    vec.push_back(Move0{50});
    vec.push_back(Move0{60});
    vec.push_back(Move0{70});
    vec.push_back(Move0{80});
    

    cout << endl;
    return 0;
}
/** @} */