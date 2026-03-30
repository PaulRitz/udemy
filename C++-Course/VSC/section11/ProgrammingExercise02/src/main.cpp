#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

double fahrenheit_to_kelvin(double val);
double fahrenheit_to_celsius(double val);

double celsius_to_fahrenheit(double val);
double celsius_to_kelvin(double val);

double kelvin_to_fahrenheit(double val);
double kelvin_to_celsius(double val);

int main() {

    double temperature {};
    double result {};
    bool quit {false};
    string choice {};
    do{
        cout << "Temperature converter: " << endl;
        cout << "--------------------------" << endl;
        cout << "KF - Convert kelvin to fahrenheit" << endl;
        cout << "KC - Convert kelvin to celsius" << endl;
        cout << "CF - Convert celsius to fahrenheit" << endl;
        cout << "CK - Convert celsius to kelvin" << endl;
        cout << "FK - Convert fahrenheit to kelvin" << endl;
        cout << "FC - Convert fahrenheit to celsius" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        getline(cin, choice);
        cout << "--------------------------" << endl;
        if(choice == "Q" || choice == "q"){
            cout << "Quitting - Goodbye...";
            quit = true; 
        }
        if(!quit){
            cout << "Enter your temperature: ";
            cin >> temperature;
        }

        if(choice == "KF" || choice == "kf" || choice == "Kf" || choice == "kF"){
            cout << temperature << " K is " << kelvin_to_fahrenheit(temperature) << " °F" << endl;
        }
        else if(choice == "KC" || choice == "kc" || choice == "Kc" || choice == "kC"){
            cout << temperature << " K is " << kelvin_to_celsius(temperature) << " °C" << endl;
        }
        else if(choice == "CF" || choice == "cf" || choice == "Cf" || choice == "cF"){
            cout << temperature << " °C is " << celsius_to_fahrenheit(temperature) << " °F" << endl;;
        }
        else if(choice == "CK" || choice == "ck" || choice == "Ck" || choice == "cK"){
            cout << temperature << " °C is " << celsius_to_kelvin(temperature) << " K" << endl;
        }
        else if(choice == "FK" || choice == "fk" || choice == "Fk" || choice == "fK"){
            cout << temperature << " °F is " << fahrenheit_to_kelvin(temperature) << " K" << endl;
        }
        else if(choice == "FC" || choice == "fc" || choice == "Fc" || choice == "fC"){
            cout << temperature << " °F is " << fahrenheit_to_celsius(temperature) << " °C" << endl;
        }
        
        if(!quit){
            cin.ignore(100, '\n');
        }
    }while(!quit);

    cout << endl;
    return 0;
}

double fahrenheit_to_celsius(double val){
    return round((5.0/9.0)*(val-32));
}
double fahrenheit_to_kelvin(double val){
    return round((5.0/9.0)*(val-32)+273);
}

double celsius_to_fahrenheit(double val){
    return round((val*(9.0/5.0))+32);
}
double celsius_to_kelvin(double val){
    return round(val+273);
}

double kelvin_to_celsius(double val){
    return round(val - 273);
}
double kelvin_to_fahrenheit(double val){
    return round(((val-273)*(9.0/5.0))+32);
}