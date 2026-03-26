#include <iostream>

using namespace std;

int main() { // convert EUR to USD
    // 1 € = 1.16 USD

    const double usd_per_eur {1.16};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";
    cin >> euros;

    dollars = euros * usd_per_eur;

    cout << euros << " EUR is equivalent to " << dollars << " USD!" << endl;

    cout << endl;
    return 0;
}