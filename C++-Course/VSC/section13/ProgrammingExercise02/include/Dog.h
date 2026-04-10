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
 * @brief stores information about dogs
 * @param name stores the name of the dog
 * @param age stores the age of the dog (in dogs years)
 */
class Dog {
private:
    std::string name;
    int age;
public:
    /**
     * @brief returns the dogs name
     */
    std::string get_name();

    /**
     * @brief sets the name of the dog to an entered value
     */
    void set_name(std::string n);

    /**
     * @brief returns the dogs age (in dog years)
     */
    int get_age();

    /**
     * @brief sets the age of the dog to an entered value
     */
    void set_age(int n);

    /**
     * @brief returns the dogs age converted to human years
     */
    int get_human_years();

    /**
     * @brief prints and returns the string woof;
     */
    std::string speak();
};
#endif
/** @} */