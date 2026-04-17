/**
 * @file header.h
 * @brief showcase of the weak smart pointer
 * @details when we have a situation like below, there is a problem:
 * Shared pointers only can be deleted/freed when their use_count is at 0.
 * This means if we have this kind of circular relationsship, the space 
 * that was allocated on the heap for the shared pointers and the A 
 * and B objects and the shared pointers in the objects towards the other object,
 * the shared pointers to the objects are destroyed but the objects will stay on the heap.
 * ==> this leads to a memory leak
 * ==> you can see this if you execute the program with two shared pointers in the object
 */
/**
 * @addtogroup s17_p03
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <memory>

class B;        // forward declaration -- like function prototype

class A {
    std::weak_ptr<B> b_ptr;               // make one of the 2 pointers in the objects weak, to prevent memory leak
public:
    void set_B(std::shared_ptr<B> &b);
    A();
    ~A();
};
class B{
    std::shared_ptr<A> a_ptr;               // make one of the 2 pointers in the objects weak, to prevent memory leak
public:
    void set_A(std::shared_ptr<A> &a);
    B();
    ~B();
};
#endif
/** @} */