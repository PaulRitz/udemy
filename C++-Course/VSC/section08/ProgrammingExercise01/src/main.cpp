#include <iostream>

using namespace std;

int main() {
    // Task 1
    int num1 {13};
    int num2 {0};

    num1 = 5;

    num2 = num1;

    cout << num1 << ", " << num2 << endl;
    // Task 1

    // Task 2
    int number {25};

    number *= 2;

    number += 9;

    number -= 3;

    number /= 2;

    number -= 25;

    number %= 3;

    cout << number << endl;
    // Task 2


    cout << endl;
    return 0;
}