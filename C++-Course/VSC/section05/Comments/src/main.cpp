/*******************************************
 * 
 * author:
 * 
 * 
 * 11/11/2017 Bug ... Fixed - Name
 * 11/13/2017 Bug ... Fixed - Name
 * 
 *******************************************/

#include <iostream>

// This is a comment

/**
 * This is a multiple
 * line
 * comment
 * 
 */

 //Using a modified version of Dijkstra's algorithm to improve space efficiency
int main() {

    int favourite_number = 0; // this is where my favourite number is stored

    std::cout << "Enter your favourite number between 1 and 100: " << std::endl;

    std::cin >> favourite_number;

    std::cout << "Amazing!! Thats my favourite number too!" << std::endl;
    std::cout << "No really!! " << favourite_number << " is my favourite number!" << std::endl;

    return 0;
}