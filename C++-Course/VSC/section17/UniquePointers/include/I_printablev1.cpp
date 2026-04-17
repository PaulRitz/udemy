#include "I_printablev1.h"

std::ostream &operator<<(std::ostream &out, const I_printablev1 &source){
    source.print(out);
    return out;
}

std::ostream &I_printablev1::print(std::ostream &out) const {};

I_printablev1::~I_printablev1() {}