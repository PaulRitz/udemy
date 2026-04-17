/**
 * @file header.h
 * @brief showcase of pure virtual functions in c++ polymorphism
 */
/**
 * @addtogroup s16_p06
 * @{
 */
#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>

class Shape0{
private:
    // optional attributes common to all shapes
public:
    virtual void draw() =0;
    virtual void rotate() =0;
    virtual ~Shape0();
};
class Open_Shape0: public Shape0 {
public:
    virtual ~Open_Shape0();
};
class Closed_Shape0: public Shape0 {
public:
    virtual ~Closed_Shape0();
};

class Line0: public Open_Shape0{
public:
    virtual void draw() override;
    virtual void rotate() override; 
    
    virtual ~Line0();
};
class Circle0: public Closed_Shape0{
public:
    virtual void draw() override;
    virtual void rotate() override;

    virtual ~Circle0();
};
class Square0: public Closed_Shape0{
public:
    virtual void draw() override;
    virtual void rotate() override;

    virtual ~Square0();
};
#endif
/** @} */