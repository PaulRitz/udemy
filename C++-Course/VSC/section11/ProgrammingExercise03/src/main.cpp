#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void print_grocery_list(int mangos = 13, int apples = 3, int oranges = 7);

int main() {

    print_grocery_list();

    cout << endl;
    return 0;
}

void print_grocery_list(int mangos, int apples, int oranges){
    cout << "Mangos: " << mangos << endl;
    cout << "Apples: " << apples << endl;
    cout << "Oranges: " << oranges <<endl;
}