#include <iostream>
#include <vector>

using namespace std;

int main() {

    bool quit {false};
    char input {};

    do{

        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl << endl;

        cout << "Enter your selection: ";
        cin >> input;

        switch(input){
            case '1':
                cout << "You chose 1 - doing this" << endl;
                break;
            case '2':
                cout << "You chose 2 - doing that" << endl;
                break;
            case '3':
                cout << "You chose 3 - doing something else" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Quitting..." << endl;
                quit = 1;
                break;
            default:
                cout << "Unknown option - try again..." << endl;
                break;
        }

        cout << "\n------------------------" << endl;


    }while(!quit);


    cout << endl;
    return 0;
}