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
#include <algorithm>

/**
 * @brief this class provides convertion of created objects (numbers) to the most common number systems
 * @param obj_name you have the option to name the object you created, if you have to for some reason
 * @param int_number the number as a decimal value and integer data type
 * @param str_number the number used to store the input to build the object
 * @param hex_number the number as a hexadecimal value and string data type
 * @param bin_number the number as a binary number and string data type
 * 
 * @note change variable name of *int_number* to *dec_number* 
 */
class ToConvert{
private:
    std::string obj_name;
    std::string hex_number;
    std::string str_number;
    std::string bin_number;
    int int_number;
    /**
     * @brief used to update the other numbers when a value is changed
     */
    void updateValues(std::string origin);


    /**
     * @brief returns and calculates the goal value from the hexadecimal number
     * @param conv if provided, and a valid input is given, then the function will convert to the
     * provided type
     * 
     */
    int HexTo();
    std::string HexTo(std::string conv);
    /**
     * @brief returns and calculates the goal value from the binary number
     * @param conv if provided, and a valid input is given, then the function will convert to the
     * provided type
     */
    int BinTo();
    std::string BinTo(std::string conv);
    /**
     * @brief returns and calculates the Hexadecimal value from the binary number
     * @param conv input in form of string to tell the function to what it should convert.
     */
    std::string DecTo(std::string conv);
public:
    // methods

    /**
     * @brief returns the string of the hex number value
     */
    std::string get_hexNumber() ;
    /**
     * @brief returns the integer of the dec number value
     */
    int get_intNumber() ;
    /**
     * @brief returns the string of the bin number value
     */
    std::string get_binNumber();


    /**
     * @brief enables user to change the integer number after the initialization of the object
     * @note does not make sense without updating the hex number as well (automatically) (in current implementation)
     * 
     * @param n this is the value that will be assigned to the int_number variable;
     */
    void set_number(int n);
    /**
     * @brief enables user to change the string of the hex number after the initialization of the object
     * @note does not make sense without updating the hex number as well (automatically) (in current implementation)
     * 
     * @param str this is the string that will be assigned to the hex_number variable;
     */
    void set_number(std::string str);
    /**
     * @brief enables user to change the name of the display object (only with this function not possible during initialization)
     */
    void set_objName(std::string name);

    /**
     * @brief displays the object and all its values (one kind of number initialized and all others will be stored and displayed here)
     */
    void display_obj() ;
    
    
    // constructor
    ToConvert(int num = 0);
    ToConvert(std::string num = "0");
    ToConvert(ToConvert &source);
};

#endif
/** @} */