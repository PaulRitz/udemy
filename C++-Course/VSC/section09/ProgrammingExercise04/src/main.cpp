#include <iostream>

using namespace std;

int main() {

    int sum {0};
    
    for(unsigned int i = 0; i <= 15; i++){
        if(i%2!=0){
            sum += i;
        }
    }

    cout << sum << endl;
    cout << endl;
    return 0;
}