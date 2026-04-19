#include "I_printablev3.h"

std::ostream &operator<<(std::ostream &out, const I_printablev3 &source){
    source.print(out);
    return out;
}


I_printablev3::~I_printablev3() {}