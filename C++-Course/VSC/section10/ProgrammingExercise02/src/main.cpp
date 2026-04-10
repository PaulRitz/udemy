/**
 * @file main.cpp
 * @brief programming exercise 02: practice using strings in c++
 */

/**
 * @addtogroup section10
 * @{
 * @defgroup s10_pe02 ProgrammingExercise02
 * @brief programming exercise 02: practice using strings in c++
 * @}
 */

/**
 * @addtogroup s10_pe02
 * @{
 */

#include <iostream>
#include <string>

using namespace std;

int main() {

    // Task 1
    string unformatted_full_name {"StephenHawking"};
    string formatted_full_name{};
    
    string first_name {unformatted_full_name, 0, 7};
    string last_name{};
    
    last_name = unformatted_full_name.substr(7,16);
    
    formatted_full_name = first_name + last_name;
    
    cout << unformatted_full_name << endl;
    cout << first_name << " " << last_name << endl;
    cout << formatted_full_name << endl;
    
    formatted_full_name.insert(7, " ");
    
    cout << endl <<  unformatted_full_name << endl;
    cout << first_name << " " << last_name << endl;
    cout << formatted_full_name << endl << endl;
    // Task 1

    // Task 2

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};

    cout << journal_entry_1 << endl << journal_entry_2 << endl;

    journal_entry_1.erase(0, 6);
    
    cout << journal_entry_1 << endl << journal_entry_2 << endl << endl;

    if(journal_entry_1 > journal_entry_2){
        swap(journal_entry_1, journal_entry_2);
    }

    cout << journal_entry_1 << endl << journal_entry_2 << endl;

    // Task 2
    
    cout << endl;
    return 0;
}
/** @} */