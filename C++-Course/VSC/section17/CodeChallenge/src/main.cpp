/**
 * @file main.cpp
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
 *  
 */
/**
 * @addtogroup section17
 * @{
 * @defgroup s17_cc
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
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s17_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

using namespace std;

#include "../include/header.h"

/**
 * @brief a function named make, that creates and returns a unique_ptr to a vector of shared_ptrs to Test objects.
 */
unique_ptr<vector<shared_ptr<Test4>>> make();
// auto make();                 // ====== auto does work, but the function prototype and the function implementation have to be before the first call of the function
/**
 * @brief a function named fill, that expects a vector of shared pointers to Test objects and a int
 * representing the number of Test objects to create dynamically and add to the vector.
 */
void fill(vector<shared_ptr<Test4>> &vec, int n);
/**
 * @brief a function named display that expeccts a vecctor of shared_ptrs to Test object and displays the 
 * data in each Test object
 */
void display(vector<shared_ptr<Test4>> vec);

int main() {
    std::unique_ptr<std::vector<std::shared_ptr<Test4>>> vec_ptr;
    vec_ptr = make();


    std::cout << "How many data points do you want to enter: ";
    int num {3};
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    cout << endl;
    return 0;
}

unique_ptr<vector<shared_ptr<Test4>>> make(){
// auto make(){
    // unique_ptr<vector<shared_ptr<Test4>>> temp {new vector<shared_ptr<Test4>>};
    // return temp;
    return make_unique<vector<shared_ptr<Test4>>>(); // much easier
}
void fill(vector<shared_ptr<Test4>> &vec, int n){
    int in;
    for(int i{1};i<=n;i++){
        cout << "Enter data point [" << i << "]: ";
        cin >> in;
        vec.push_back(make_shared<Test4>(in));      //  the most efficient
    }
}
void display(vector<shared_ptr<Test4>> vec){
    cout << "======================" << endl;
    cout << "Displaying Vector Data: " << endl;
    for(const auto &obj : vec){
        cout << obj->get_data() << endl;
    }
    cout << "======================" << endl;
}

/** @} */