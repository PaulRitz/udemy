#include <iostream>

using namespace std;

// increment operator ++
// decrement operator --

// prefix ++num
// postfix num++

// !!!DON'T OVERUSE THIS OPERATOR!!!

int main() {

    int counter {10};
    int result {0};

    cout << "============================" << endl << endl;
    // Example 1 - simple increment

    cout << "Counter: " << counter << endl;
    
    counter++;
    cout << "Counter: " << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    // Example 1 - simple increment
    cout << "\n============================" << endl << endl;
    // Example 2 - preincrement
    
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter; 
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    // Example 2 - preincrement
    cout << "\n============================" << endl << endl;
    // Example 3 - postincrement
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    
    // Example 3 - postincrement
    cout << "\n============================" << endl << endl;
    // Example 4
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = ++counter + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    // Example 4
    cout << "\n============================" << endl << endl;
    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
    // Example 5
    cout << "\n============================" << endl << endl;

    return 0;
}