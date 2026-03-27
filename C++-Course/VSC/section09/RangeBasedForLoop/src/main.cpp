#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {

    int scores[] {10,20,30};

    cout << "====================================" << endl;
    // Example 1

        for(int score : scores){
            cout << score << endl;
        }

    // Example 1
    cout << "====================================" << endl;
    // Example 2

        for(auto score : scores){
            cout << score << endl;
        }

    // Example 2
    cout << "====================================" << endl;
    // Example 3

        vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
        double average_temp{};
        double total {};

        cout << fixed << setprecision(1);

        for(auto temp : temperatures){
            cout << temp << endl;
            total += temp;
        }

        if(temperatures.size() != 0){
            average_temp = total / temperatures.size();
        }

        cout << "Average temperature is " << average_temp << endl;

    // Example 3
    cout << "====================================" << endl;
    // Example 4

        for(auto val : {1,2,3,4,5}){
            cout << val << endl;
        }

    // Example 4
    cout << "====================================" << endl;
    // Example 5

        for(auto c : "This is a test"){
            if(c != ' '){
            cout << c;
            }
        }
        cout << endl;
        // Example 5
        cout << "====================================" << endl;
        // Example 6

        for(auto c : "This is a test"){
            if(c == ' '){
                cout << "\t";
            }
            else {
                cout << c;
            }
        }
        cout << endl;

        // Example 6
        cout << "====================================" << endl;
    
    cout << endl;
    return 0;
}