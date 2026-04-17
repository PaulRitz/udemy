/**
 * @file I_printablev2.h
 * @brief showcase of the shared smart pointer
 */
/**
 * @addtogroup s17_p02
 * @{
 */
#ifndef _I_PRINTABLEV2_H_
#define _I_PRINTABLEV2_H_

#include <iostream>

class I_printablev2 {
    friend std::ostream &operator<<(std::ostream &out, const I_printablev2 &source);
public:
    virtual ~I_printablev2();

    virtual std::ostream &print(std::ostream &out) const = 0;
};

#endif
/** @} */