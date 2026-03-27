#include <iostream>

using namespace std;

int main() {

    char letter_grade {};

    cout << "Enter the letter grade you expect on the exam: ";
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
        case 'A':
            cout << "You need a 90 or a above, study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << " You need a 80 to 89!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "You need a 70 to 79 for a average grade!" << endl;
            break;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is 60-69!" << endl;
            break;
        case 'f':
        case 'F':
            {
                char confirm {};
                cout << "Are you sure? (Y/N) ";
                cin >> confirm;
                if(confirm == 'Y' || confirm == 'y'){
                    cout << "OK, I guess you don't want to study :( ..." << endl;
                }
                else if (confirm == 'N' || confirm == 'n') {
                    cout << "Good, go study! ;)";
                }
                else{
                    cout << "Illegal choice" << endl;
                }
                break;
            }
        default:
            cout << "Sorry, thats not a valid grade!" << endl;
            break;
    }
    

    cout << endl;
    return 0;
}