#include "I_printablev0.h"

std::ostream &operator<<(std::ostream &out, const I_printablev0 &source){
    source.print(out);
    return out;
}

std::ostream &I_printablev0::print(std::ostream &out) const {};

I_printablev0::~I_printablev0() {}