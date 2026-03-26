#include <iostream>

using namespace std;

int main() {
    // with age 16 or older driving is legal

    int age {};

    cout << "Please enter your age: ";
    cin >> age;

    if(age >= 16){
        cout << "Yes - you can drive (legally)!" << endl;
    }
    else {
        cout << "Sorry come back in " << 16 - age << " years." << endl;
    }
    

    cout << endl;
    return 0;
}