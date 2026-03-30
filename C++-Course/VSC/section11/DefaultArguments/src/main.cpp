#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

int main() {
    double cost{0};
    
    cost = calc_cost(100.0,0.08,4.25);
    cout << fixed << setprecision(2);       // uses entered values for tax_rate and
    cout << "Cost is: " << cost << endl;    // shipping

    cost = calc_cost(100.0, 0.08);          // uses entered value for tax_rate and 
    cout << "Cost is: " << cost << endl;    // default value for shipping

    cost = calc_cost(200.0);                // uses only default values for tax_rate and
    cout << "Cost is: " << cost << endl;    // shipping
    

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("Paul Ritz");
    greeting("Frank Miller", "Dr.");
    greeting("Anna Ritz", "Ms.");

    cout << endl;
    return 0;
}

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}
void greeting(string name, string prefix, string suffix){
    cout << "Hello " << prefix + " " + name + " " + suffix << endl; 
}