#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

void display(vector<string>* v);

void display(int* array, int sentinel);

int main() {

    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);
    
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);

    cout << endl;
    return 0;
}

void display(vector<string>* v){
    for(auto str : *v){
        cout << str << " ";
    }
    cout << endl;
    v = nullptr;
}

void display(int* array, int sentinel){
    while(*array!=sentinel){
        cout << *array++ << endl;
    }
}