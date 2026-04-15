#include "Moneyv1.h"
Moneyv1::Moneyv1(int dollars, int cents)
    :dollars{dollars},cents{cents} {}
Moneyv1::Moneyv1(int total)
    :dollars{total/100},cents{total%100} {}

bool Moneyv1::operator==(const Moneyv1 &rhs) const{
    if(this->cents == rhs.cents && this->dollars == rhs.dollars){
        return true;
    } else{
        return false;
    }
}
bool Moneyv1::operator!=(const Moneyv1 &rhs) const{
    return !(*this==rhs);
}

Moneyv1 operator+(const Moneyv1 &a, const Moneyv1 &b){
    int sum {(a.dollars+b.dollars)*100};
    sum += a.cents+b.cents;
    return Moneyv1(sum);
}

void Moneyv1::display(){
    std::cout << "--Dollars:    " << this->dollars << std::endl;
    std::cout << "--Cents:      " << this->cents << std::endl;
}