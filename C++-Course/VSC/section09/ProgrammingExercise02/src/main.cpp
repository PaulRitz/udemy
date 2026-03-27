#include <iostream>

using namespace std;

int main() {
    // anyone older than the age of 15 years can drive (legally)

    int age {};
    bool has_car {false};

    cout << "Please enter your age: ";
    cin >> age;

    if(age < 16){
        cout << "Sorry, you are not allowed to drive!" << endl
        << "Come back in " << 16 - age << " years.";
    }
    else {
        cout << "Do you have a car? ";
        cin >> has_car;

        if(has_car){
            cout << "Yes - you can drive!";
        }
        else {
            cout << "Sorry, you need to buy a car before you can drive!";
        }
    }
    

    cout << endl;
    return 0;
}