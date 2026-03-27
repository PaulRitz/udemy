/**
 * Shipping cost calculator
 * 
 * Ask the user for package dimension in inches
 * length, width, height - these should be integers
 * 
 * All dimension must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches there is a 10% surcharge
 * If package volume is greater than 500 cubic inches there is a 25% surcharge
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int length{}, width{}, height{};
    double base_cost {2.50};

    const int tier1_threshold {100};
    const int tier2_threshold {500};

    int max_dimension_length {10}; //inches

    double tier1_surcharge {0.1};
    double tier2_surcharge {0.25};

    int package_volume {};

    cout << fixed << setprecision(2);

    cout << "Welcome to the shipping cost calculator!" << endl;
    cout << "Please enter length width and height separated by spaces: ";
    cin >> length >> width >> height;

    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        cout << "Only packages with dimensions less than or equal to 10 inches are allowed!";
    } else {
        package_volume = length * width * height;
        cout << "The package size is: " << package_volume << endl;
        if (package_volume >= tier2_threshold){
            cout << "The charge for shipping this package is: $" << base_cost + (base_cost * tier2_surcharge) << endl;
            cout << "There is a 25% surcharge because the dimensions of the package [" << package_volume << "] exceed " << tier2_threshold << ".";
        }
        else if(package_volume >= tier1_threshold){
            cout << "The charge for shipping this package is: $" << base_cost + (base_cost * tier1_surcharge) << endl;
            cout << "There is a 10% surcharge because the dimensions of the package [" << package_volume << "] exceed " << tier1_threshold << ".";
        }
        else{
            cout << "The charge for shipping this package is: $" << base_cost << endl;
        }
    }

    cout << endl;
    return 0;
}