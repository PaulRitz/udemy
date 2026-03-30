#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

const double pi {3.14159};

void area_circle();
double calc_area_circle(double radius);
void volume_cylinder();
double calc_volume_cylinder(double radius, double height);

int main() {

    area_circle();
    volume_cylinder();

    cout << endl;
    return 0;
}

void area_circle(){
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The are of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_area_circle(double radius){
    return pi * radius * radius;
}

void volume_cylinder(){
    double radius {};
    double height {};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\n Enter the height of the cylinder: ";
    cin >> height;

    cout << "\nThe volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

double calc_volume_cylinder(double radius, double height){
    return (calc_area_circle(radius)*height);
}