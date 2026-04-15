#include "Moneyv2.h"
Moneyv2::Moneyv2(int dollars, int cents)
    :dollars{dollars},cents{cents} {}
Moneyv2::Moneyv2(int total)
    :dollars{total/100},cents{total%100} {}

bool Moneyv2::operator==(const Moneyv2 &rhs) const{
    if(this->cents == rhs.cents && this->dollars == rhs.dollars){
        return true;
    } else{
        return false;
    }
}
bool Moneyv2::operator!=(const Moneyv2 &rhs) const{
    return !(*this==rhs);
}

Moneyv2 operator+(const Moneyv2 &a, const Moneyv2 &b){
    int sum {(a.dollars+b.dollars)*100};
    sum += a.cents+b.cents;
    return Moneyv2(sum);
}

std::ostream &operator<<(std::ostream &out, const Moneyv2 &rhs){
    out << "dollars: " << rhs.dollars << " cents: " << rhs.cents;
    return out;
}

void Moneyv2::display(){
    std::cout << "--Dollars:    " << this->dollars << std::endl;
    std::cout << "--Cents:      " << this->cents << std::endl;
}