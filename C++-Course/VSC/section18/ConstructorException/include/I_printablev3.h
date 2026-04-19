/**
 * @file I_printablev3.h
 * @brief showcase of ConstructorExceptions
 */
/**
 * @addtogroup s18_p07
 * @{
 */
#ifndef _I_PRINTABLEV3_H_
#define _I_PRINTABLEV3_H_

#include <iostream>

class I_printablev3 {
    friend std::ostream &operator<<(std::ostream &out, const I_printablev3 &source);
public:
    virtual ~I_printablev3();

    virtual std::ostream &print(std::ostream &out) const = 0;
};

#endif
/** @} */