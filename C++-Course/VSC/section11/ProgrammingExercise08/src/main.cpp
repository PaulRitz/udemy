#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

double a_penny_doubled_every_day(int n, double p);

int main() {

    double total_amount = a_penny_doubled_every_day(25, 0.01);
    cout << total_amount;
    cout << endl;
    return 0;
}

double a_penny_doubled_every_day(int n, double p){
    if(n == 1){
        return p;
    }
    
    return a_penny_doubled_every_day(n-1, p) * 2.0;
}