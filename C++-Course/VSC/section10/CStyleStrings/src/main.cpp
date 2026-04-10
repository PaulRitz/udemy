/**
 * @file main.cpp
 * @brief showcase of c style strings in c++
 */

/**
 * @addtogroup section10
 * @{
 * @defgroup s10_p02 CStyleStrings
 * @brief showcase of c style strings in c++
 * @}
 */

/**
 * @addtogroup s10_p02
 * @{
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    cout << "=========================================" << endl;
    // Example 1
    
    // cout << first_name; // this will print anything thats in the memory space of the array
    // -> when the arrays aren't initialized
    
    // cout << "Please enter your first name: ";
    // cin >> first_name;
    
    // cout << "Please enter your last name: ";
    // cin >> last_name;
    // cout << "------------------------------------" << endl;
    
    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters." << endl;
    
    // strcpy(full_name, first_name);
    // //     target,  object from where to copy
    // strcat(full_name, " ");
    // strcat(full_name, last_name);
    // cout << "Your full name is " << full_name << endl;

    // Example 1
    cout << "=========================================" << endl;
    // // Example 2

    // cout << "Enter your full name: ";       // This will store the input up to the first space
    // cin >> full_name;                       // in full_name not more.
    // cout << "Your full name is " << full_name << endl;

    // // Example 2
    cout << "=========================================" << endl;
    // Example 3

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    // Example 3
    cout << "=========================================" << endl;
    // Example 4
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else {
        cout << temp << " and " << full_name << " are different" << endl;
    }
    // Example 4
    cout << "=========================================" << endl;
    // Example 5
    
    for(size_t i{0}; i < strlen(full_name); i++){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    cout << "Your full name is: " << full_name << endl;
    
    // Example 5
    cout << "=========================================" << endl;
    // Example 6
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else {
        cout << temp << " and " << full_name << " are different" << endl;
    }
    // Example 6
    cout << "=========================================" << endl;
    cout << endl;
    return 0;
}
/** @} */