#include "I_printablev2.h"

std::ostream &operator<<(std::ostream &out, const I_printablev2 &source){
    source.print(out);
    return out;
}

std::ostream &I_printablev2::print(std::ostream &out) const {};

I_printablev2::~I_printablev2() {}