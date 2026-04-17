/**
 * @file header.h
 * @brief code challenge: practice using smart pointers
 * @details Create a program that has the following:
 * 
 * 1. a function named make, that creates and returns a unique_ptr to a vector of shared_ptrs to Test objects.
 * 
 * 2. a function named fill, that expects a vector of shared pointers to Test objects and a int
 *    representing the number of Test objects to create dynamically and add to the vector.
 * 
 * 3. a function named display that expeccts a vecctor of shared_ptrs to Test object and displays the 
 *    data in each Test object
 * 
 * 4. The main driver should look as follows
 * 
 *    int main() {
 *        std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
 *        vec_ptr = make();
 *        std::cout << "How many data points do you want to enter: ";
 *        int num;
 *        std::cin >> num;
 *        fill(*vec_ptr, num);
 *        display(*vec_ptr);
 *        return 0;
 *    }
 * 
 *    Below is a sample run for the user entering 3 at the console:
 * How many data points do you want to enter: 3
 * Enter data point [1]: 10
 *      Test constructor (10)
 * Enter data point [2]: 20
 *      Test constructor (20)
 * Enter data point [3]: 30
 *      Test constructor (30)
 * Displaying vector data
 * ======================
 * 10
 * 20
 * 30
 * ======================
 *      Test destructor (10)
 *      Test destructor (20)
 *      Test destructor (30)
 */
/**
 * @addtogroup s17_cc
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <memory>
#include <vector>
#include <iostream>

class Test4 {
private:
    int data;
public:
    Test4();
    Test4(int data);
    ~Test4();

    int get_data() const;
};
#endif
/** @} */