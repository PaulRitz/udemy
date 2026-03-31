#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int sum_of_digits(int n);

int main() {

    cout << "1234 = " << sum_of_digits(1234) << endl;
    cout << "5678 = " << sum_of_digits(5678) << endl;
    

    cout << endl;
    return 0;
}

int sum_of_digits(int n){
    if(n==0){
        return 0;
    }
    return (n%10 + sum_of_digits(n/10));
}