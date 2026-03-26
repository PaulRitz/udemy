#include <iostream>

using namespace std;

int main() {

    bool equal_result {false};
    bool not_equal_result {false};

    int num1 {}, num2 {};

    cout << boolalpha;

    cout << "===============================" << endl << endl;
    // Example 1

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    // Example 1
    cout << "===============================" << endl << endl;
    // Example 2

    char char1{}, char2 {};
    
    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
   
    // Example 2
    cout << "===============================" << endl << endl;
    // Example 3

    double double1{}, double2{};

    cout << "Enter two doubles separated by a space: ";
    cin >> double1 >> double2;
    equal_result = (double1 == double2);
    not_equal_result = (double1 != double2);
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    // Example 3
    cout << "===============================" << endl << endl;
    // Example 4
    cout << "Enter an integer and a double separated by a space: ";
    cin >> num1 >> double1;                         // this is mixed expressions comparison
    equal_result = (num1 == double1);               // so the integer will be promoted to a double
    not_equal_result = (num1 != double1);           // only then the comparison happens
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;
    // Example 4
    cout << "===============================" << endl << endl;
    return 0;
}