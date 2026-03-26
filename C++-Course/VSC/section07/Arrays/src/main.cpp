#include <iostream>

using namespace std;

int main() {
    cout << "===============================" << endl;

    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "\nThe last vowel is: " << vowels[4] << endl << endl;
    // cin >> vowels[5]; programm crashes

    cout << "===============================" << endl;

    double hi_temps[] {90.1, 89.8, 77.5, 88.6};
    cout << "\nThe first temperature is: " << hi_temps[0] << endl;

    hi_temps[0] = 100.7; // set first element to 100.7

    cout << "The first temperature is: " << hi_temps[0] << " now." << endl << endl;

    cout << "===============================" << endl;

    int test_scores[5] {100,90,80,70,60}; // {} or {0} initializes array to 0, 
                                          // {1} initializes 1. element to 1 and rest to 0.

    cout << "\nScore at index 0: " << test_scores[0] <<endl;
    cout << "Score at index 1: " << test_scores[1] <<endl;
    cout << "Score at index 2: " << test_scores[2] <<endl;
    cout << "Score at index 3: " << test_scores[3] <<endl;
    cout << "Score at index 4: " << test_scores[4] <<endl;

    cout << "\nEnter 5 test scores: ";
    
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "\n---The updated array is---" << endl;
    cout << "Score at index 0: " << test_scores[0] <<endl;
    cout << "Score at index 1: " << test_scores[1] <<endl;
    cout << "Score at index 2: " << test_scores[2] <<endl;
    cout << "Score at index 3: " << test_scores[3] <<endl;
    cout << "Score at index 4: " << test_scores[4] <<endl;

    cout << "Watch this: " << test_scores << endl;  // value for array is the address 
                                                    //of the first elemnt in the array    

    cout << "===============================" << endl;



    return 0;
}