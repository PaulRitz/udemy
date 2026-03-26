#include <iostream>

using namespace std;

int main() {

    cout << boolalpha;
    
    int num1 {}, num2{};
    
    cout << "===============================" << endl << endl;
    // Example 1
    
    cout << "Enter 2 integers seperated by a space: ";
    cin >> num1 >> num2;
    
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
    // Example 1
    cout << "===============================" << endl << endl;
    // Example 2
    const int lower {10};
    const int upper {20};

    cout << "Enter an integer that is greater than: " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) <<endl;

    cout << "Enter an integer that is less than or equal to: " << upper << ": ";
    cin >> num2;
    cout << num2 << " <= " << lower << " is " << (num2 <= lower) << endl;

    // Example 2
    cout << "===============================" << endl << endl;
 
    cout << endl;
    return 0;
}