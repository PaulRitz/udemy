/**
 * @file main.cpp
 * @brief programming exercise 01: practice using strings in c++
 */

/**
 * @addtogroup section10
 * @{
 * @defgroup s10_pe01 ProgrammingExercise01
 * @brief programming exercise 01: practice using strings in c++
 * @}
 */

/**
 * @ingroup PEs
 * @addtogroup s10_pe01
 * @{
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

    char first_name[]  {"Bjarne"};
    char last_name[] {"Stroustrup"};
    char whole_name[40] {};

    cout << first_name << " " << last_name << " | " << whole_name << endl;
    
    int first_name_length {strlen(first_name)};
    int last_name_length {strlen(last_name)};

    cout << first_name << " " << last_name << " | " << whole_name << endl;
    cout << first_name_length << " | " << last_name_length << endl;
    
    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);
    
    int whole_name_length {strlen(whole_name)};
    
    cout << first_name << " " << last_name << " | " << whole_name << endl;
    cout << first_name_length << " | " << last_name_length << " | " << whole_name_length << endl;

    cout << endl;
    return 0;
}
/** @} */