#include <iostream>
#include <vector>

using namespace std;

int main() {

    int num {};
    int i {1};
    int number {};
    bool done {false};



    cout << "=======================================" << endl;
    
    // Example 1
    cout << "Enter a positive integer - start the countdown: ";
    cin >> num;
    
    while(num > 0){
        cout << num << endl;
        num--;
    }
    cout << "Blastoff!" << endl;
    
    // Example 1
    cout << "=======================================" << endl;
    // Example 2
    
    cout << "Enter a positive integer - to count up to: ";
    cin >> num;
    
    while(i <= num){
        cout << i << endl;
        i++;
    }

    // Example 2
    cout << "=======================================" << endl;
    // Example 3

    cout << "Enter an integer less than 100: ";
    cin >> number;

    while(number >= 100){
        cout << "Enter an integer less than 100: ";
        cin >> number;
    }

    cout << "\nThanks" << endl;
    // Example 3
    cout << "=======================================" << endl;
    // Example 4

    while(!done){
        cout << "Enter an integer between 1 and 5: ";
        cin >> number;
        if(number <= 1 || number >= 5){
            cout << "Out of range, try again" << endl;
        }
        else{
            cout << "Thanks!" << endl;
            done = true;
        }
    }

    // Example 4
    cout << "=======================================" << endl;

    cout << endl;
    return 0;
}