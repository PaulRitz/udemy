#include <iostream>

using namespace std;

int main() {

    int DayCode {};

    cout << "   Day Code        " << "Display       " << endl;
    cout << "   --------        " << "--------------------------" << endl;
    cout << "       0           " << "Sunday        " << endl;
    cout << "       1           " << "Monday        " << endl;
    cout << "       2           " << "Tuesday        " << endl;
    cout << "       3           " << "Wednesday        " << endl;
    cout << "       4           " << "Thursday        " << endl;
    cout << "       5           " << "Friday        " << endl;
    cout << "       6           " << "Saturday        " << endl;
    cout << "     other         " << "Error - illegal day code   " << endl;

    cout << endl << "Please enter your Day-Code: ";
    cin >> DayCode;

    switch(DayCode){
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Error - illegal day code";
            break;

    }

    cout << endl;
    return 0;
}