/**
 * @file Dog.h
 * @brief header file to the programming exercise
 */
/**
 * @addtogroup s13_pe02
 * @{
 */
#ifndef _DOG_H_
#define _DOG_H_
#include <string>
/**
 * @brief stores information about dog2s
 * @param name stores the name of the dog2
 * @param age stores the age of the dog2 (in dog2s years)
 */
class Dog2 {
private:
    std::string name;
    int age;
public:
    /**
     * @brief returns the dog2s name
     */
    std::string get_name();

    /**
     * @brief sets the name of the dog2 to an entered value
     */
    void set_name(std::string n);

    /**
     * @brief returns the dog2s age (in dog2 years)
     */
    int get_age();

    /**
     * @brief sets the age of the dog2 to an entered value
     */
    void set_age(int n);

    /**
     * @brief returns the dog2s age converted to human years
     */
    int get_human_years();

    /**
     * @brief prints and returns the string woof;
     */
    std::string speak();
};
#endif
/** @} */