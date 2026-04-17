/**
 * @file main.cpp
 * @brief showcase of the weak smart pointer
 * @details when we have a situation like below, there is a problem:
 * Shared pointers only can be deleted/freed when their use_count is at 0.
 * This means if we have this kind of circular relationsship, the space 
 * that was allocated on the heap for the shared pointers and the A 
 * and B objects and the shared pointers in the objects towards the other object,
 * the shared pointers to the objects are destroyed but the objects will stay on the heap.
 * ==> this leads to a memory leak
 * ==> you can see this if you execute the program with two shared pointers in the objects
 */
/**
 * @addtogroup section17
 * @{
 * @defgroup s17_p03
 * @brief showcase of the weak smart pointer
 * @details when we have a situation like below, there is a problem:
 * Shared pointers only can be deleted/freed when their use_count is at 0.
 * This means if we have this kind of circular relationsship, the space 
 * that was allocated on the heap for the shared pointers and the A 
 * and B objects and the shared pointers in the objects towards the other object,
 * the shared pointers to the objects are destroyed but the objects will stay on the heap.
 * ==> this leads to a memory leak
 * ==> you can see this if you execute the program with two shared pointers in the object
 * @}
 */
/**
 * @addtogroup s17_p03
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

int main() {

    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_B(b);
    b->set_A(a);
    

    cout << endl;
    return 0;
}
/** @} */