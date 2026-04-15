#include "Moneyv0.h"
Moneyv0::Moneyv0(int dollars, int cents)
    :dollars{dollars},cents{cents} {}
Moneyv0::Moneyv0(int total)
    :dollars{total/100},cents{total%100} {}

bool Moneyv0::operator==(const Moneyv0 &rhs) const{
    if(this->cents == rhs.cents && this->dollars == rhs.dollars){
        return true;
    } else{
        return false;
    }
}
bool Moneyv0::operator!=(const Moneyv0 &rhs) const{
    return !(*this==rhs);
}

void Moneyv0::display(){
    std::cout << "--Dollars:    " << this->dollars << std::endl;
    std::cout << "--Cents:      " << this->cents << std::endl;
}