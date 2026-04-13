/**
 * @file ConvertSystem.h
 * @brief small library that converts from one number system to another
 */
/**
 * @addtogroup s0_priv_convertsystem
 * @{
 */
#ifndef _CONVERTSYSTEM_H_
#define _CONVERTSYSTEM_H_

#include <iostream>
#include <string>
#include <math.h>

class ToConvert{
private:
    int int_number;
    std::string str_number;
public:
    // methods
    std::string get_strNumber();
    int get_intNumber();
    int HexToDec();
    std::string DecToHex();

    void set_intNumber(int n);
    void set_strNumber(std::string str);
    // constructor
    ToConvert(int num = 0);
    ToConvert(std::string num = "0");
    ToConvert(ToConvert &source);
};

#endif
/** @} */