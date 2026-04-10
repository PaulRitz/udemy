/**
 * @file main.cpp
 * @brief programming exercise 02: practice using c++ operations
 */
#include <iostream>

using namespace std;

int main() {

    int age {};
    bool parental_consent {false};
    bool valid_ssn {false};
    bool accidents {false};
    bool can_apply {false};

    const int age_w_consent {15};
    const int age_wo_consent {18};

    

    cout << "Enter your Age: ";
    cin >> age;
    cout << "Is your SSN valid? ";
    cin >> valid_ssn;
    cout << "Did you have any driving accidents? ";
    cin >> accidents;
    
    if(age < 16){
        cout << "YOU CANNOT APPLY FOR THIS JOB!" << endl;
        return -1;
    } 
    if(age > 15 && age < 18){
        cout << "Do you have consent from your parents for this application? ";
        cin >> parental_consent;
    }
    if((age > 15) && ((age < 18 && parental_consent) || age >= 18) && !accidents && valid_ssn){
        cout << "YOU CAN WORK" << endl;
    }
    cout << "EOP" << endl;
    cout << endl;
    return 0;
}