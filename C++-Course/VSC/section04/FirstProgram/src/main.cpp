#include <iostream>

int main() {
    int number = 0;

    std::cout << "Enter your favorite number: ";
    
    std::cin >> number;

    std::cout << "wait mine is " << number*10 << std::endl;
    
    return 0;
}