#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "\n=================================" << endl;
    // Example 1
    for(int i {1}; i <= 10 ; i++){
        cout << i << endl;    
    }    
    // Example 1
    cout << "=================================" << endl;
    // Example 2
    for(int i {1}; i <= 10 ; i+=2){
        cout << i << endl;
    }    
    // Example 2
    cout << "=================================" << endl;
    // Example 3
    for(int i {10}; i > 0 ; i--)        // some compiler will give out Warnings for 
        cout << i << endl;              // misleading indentations of code.
        cout << "Blastoff!" << endl;    // In a loop without curly braces only the next line of code / code statement
                                        // will be looped (here line 22.)
    // Example 3                        // Just use curly braces everytime (easier to read)
    cout << "=================================" << endl;
    // Example 3
    for(int i {10}; i <= 100; i += 10){
        if(i % 15 == 0){
        cout << i << endl;
        }
    }
    // Example 3
    cout << "=================================" << endl;
    // Example 4
    for(int i{1}, j{5}; i<=5; i++, j++ ){
        cout << i << " + " << j << " = " << j + i << endl;
    }
    // Example 4
    cout << "=================================" << endl;
    // Example 5
    for(int i{1}; i <= 100; i++){
        cout << i << ((i%10==0)?"\n":" ");
        // if(i%10==0){
        //     cout << endl;
        // }
        // else {
        //     cout << " ";
        // }
    }
    // Example 5
    cout << "=================================" << endl;
    // Example 6

    vector <int> nums{10,20,40,50};

    for(unsigned int i{0}; i < nums.size(); i++){
        cout << nums.at(i) << endl;
    }

    // Example 6
    cout << "=================================" << endl;
    cout << endl;
    return 0;
}