#include "I_printablev4.h"

std::ostream &operator<<(std::ostream &out, const I_printablev4 &source){
    source.print(out);
    return out;
}


I_printablev4::~I_printablev4() {}