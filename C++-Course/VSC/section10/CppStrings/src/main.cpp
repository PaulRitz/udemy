#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};
    string s6 {s1, 0, 3};
    string s7 (10, 'X');

    cout << "==================================" << endl;
    // Example 1
    
    cout << "String 0 is:" << s0 << "." << endl;
    cout << "String 0 is " << s0.length() << " long." << endl;
    
    // Example 1
    cout << "==================================" << endl;
    // Example 2 - Initialization

    cout << "\nInitialization" << "\n----------------------------------" << endl;
    cout << "String 1 is initialized to: " << s1 << endl;
    cout << "String 2 is initialized to: " << s2 << endl;
    cout << "String 3 is initialized to: " << s3 << endl;
    cout << "String 4 is initialized to: " << s4 << endl;
    cout << "String 5 is initialized to: " << s5 << endl;
    cout << "String 6 is initialized to: " << s6 << endl;
    cout << "String 7 is initialized to: " << s7 << endl << endl;;

    // Example 2 - Initialization
    cout << "==================================" << endl;
    // Example 3 - Comparison
    
    cout << "\nComparison" << "\n----------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl << endl;;
    
    // Example 3 - Comparison
    cout << "==================================" << endl;
    // Example 4 - Assignment

    cout << "\nAssignment" << "\n----------------------------------" << endl;
    s1 = "Watermelon";
    cout << "String 1 is now:" << s1 << endl;
    s2 = s1;
    cout << "String 2 is now: " << s2 << endl;

    s3 = "Frank";
    cout << "String 3 is now: " << s3 << endl;

    s3[0] = 'C';
    cout << "String 3 change first letter to 'C': [arraysyntax] " << s3 << endl;
    s3.at(0) = 'P';
    cout << "String 3 change first letter to 'P': [vectorsyntax] " << s3 << endl;

    // Example 4 - Assignment
    cout << "==================================" << endl;
    //Example 5 - Concatenation

    cout << "\nConcatenation" << "\n----------------------------------" << endl;
    s3 = "Watermelon";

    s3 = s5 + " and " + s2 + " juice";
    cout << "String 3 is now: " << s3  << endl;

    // s3 = "nice " + "cold " + s5 + "juice";   // compiler error
                                                // do not try to concatenate 2 c style strings back to back with another
                                                // like this. This will give out an compiler error.
                                                // This works only like: [C-Style-String] + [Cpp-Style-String] + [C-Style-String] ...
                                                // Or: [Cpp-Style-String] + [C-Style-String] + ...

    //Example 5 - Concatenation
    cout << "==================================" << endl;
    // Example 6 - for loops

    cout << "\nLooping" << "\n----------------------------------" << endl;

    s1 = "Apple";
    for(size_t i {0}; i < s1.length(); i++){
        cout << s1.at(i);
    }
    cout << endl;

    // Example 6 - for loops
    cout << "==================================" << endl;
    // Example 7 - range based for loops

    cout << "\nRange based looping" << "\n----------------------------------" << endl;
    
    for (char c : s1){
        cout << c;
    }
    cout << endl;

    // Example 7 - range based for loops
    cout << "==================================" << endl;
    // Example 8 - substrings

    cout << "\nSubstrings" << "\n----------------------------------" << endl;

    s1 = "This is a test";

    cout << s1.substr(0,4) << endl;
    cout << s1.substr(5,2) << endl;
    cout << s1.substr(10,4) << endl;

    // Example 8 - substrings
    cout << "==================================" << endl;
    // Example 9 - Erase

    cout << "\nErase" << "\n----------------------------------" << endl;

    s1 = "This is a test";
    s1.erase(0,5);
    cout << "String 1 is now: " << s1 << endl;

    // Example 9 - Erase
    cout << "==================================" << endl;
    // Example 10 - getline

    cout << "\ngetline" << "\n----------------------------------" << endl;

    string full_name {};
    
    cout << "Enter your full name: ";
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;

    // Example 10 - getline
    cout << "==================================" << endl;
    // Example 11 - find

    s1 = "The secret word is Boo";
    string word{};
    
    cout << "Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos){
        cout << "Found " << word << " at position " << position << endl;
    }
    else {
        cout << "Sorry, " << word << " not found" << endl;
    }

    // Example 11 - find
    cout << "==================================" << endl;
    
    cout << endl;
    return 0;
}