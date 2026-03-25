#include <iostream>

using namespace std;

int main() {

    // int age {21};

    // cout << age << endl;

    int length {0};
    int width {0};

    cout << "Enter the width and length of the room seperated by spaces: ";
    cin >> width >> length;
    cout << "The area of the room is " << width*length << "m²" << endl;

    return 0;
}