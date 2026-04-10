/**
 * @file main.cpp
 * @brief programming exercise 07: practice using control structures
 */

/**
 * @addtogroup section09
 * @{
 * @defgroup s09_pe07 ProgrammingExercise07
 * @brief programming exercise 07: practice using control structures
 * @}
 */

/**
 * @addtogroup s09_pe07
 * @{
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // find first occurence of vowel (a,e,i,o,u)

    vector<char> vec {'H','k','l','l','v'};
    bool is_vowel {false};
    unsigned int index {};

    do{
        if(vec.empty()){
            is_vowel = 0;
            break;
        }
        switch(vec.at(index)){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                is_vowel = 1;
                break;
            default:
                is_vowel = 0;
                break;
        }
        index++;
    }while(!is_vowel && vec.size() > index);

    if(is_vowel){
        cout << "Vowel found: " << vec.at(index-1) << endl;
    }
    else{
        cout << "No vowel was found";
    }

    cout << endl;
    return 0;
}
/** @} */