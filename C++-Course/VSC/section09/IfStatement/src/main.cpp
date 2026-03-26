#include <iostream>

using namespace std;

int main() {
    int num{};
    
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if(num >= min){
        int difference{num - min};              // difference exists only 
                                                // in the scope of the if Statement 
        
        cout << "\n=============== If statement 1 ===============" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        cout << num << " is " << difference << " greater than " << min << endl;
    }

    if(num <= max){
        int difference{max - num};              // difference has to be redeclared if 
                                                // its used in another scope
                                                // the value doesn't carry from one scope
                                                // to another (for local variables)
        cout << "\n=============== If statement 2 ===============" << endl;
        cout << num << " is less than or equal to " << max << endl;
        cout << num << " is " << difference << " less than " << max << endl;
    }

    if(num >= min && num <= max){
        cout << "\n=============== If statement 3 ===============" << endl;
        cout << num << " is in range of " << min << " and " << max << endl;
        cout << "This means statements 1 & 2 mus also be true/display!" << endl;
    }
    
    if(num == min || num == max){
        cout << "\n=============== If statement 4 ===============" << endl;
        cout << num << " is right on a boundary!" << endl;
        cout << "This means that all 4 statements must be true/display!" << endl;
    }
    cout << endl;
    return 0;
}