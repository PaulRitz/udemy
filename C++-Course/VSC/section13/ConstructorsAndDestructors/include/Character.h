/**
 * @file Char.h
 * @brief contains a class that stores data for players in a video game
 */
/**
 * @addtogroup s13_p06
 * @{
 */
#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <string> 
#include <iostream>
/**
 * @brief stores playerdata for players in a videogame
 * @param name stores the name of the player
 * @param health stores the hp of the player
 * @param xp stores the experioence points of the player 
 */
class Player3 {

private:
    std::string name;
    int health;
    int xp;

public:
    /**
     * @brief sets the name of the player to an entered value
     */
    void set_name(std::string val);

    /**
     * @brief this is an constructor with no arguments
     * @details in this example the constructor will be overloaded
     */
    Player3();
    Player3(std::string name);
    Player3(std::string name, int health, int xp);

    /**
     * @brief this is the destructor, that destroys the object after its scope is left
     * 
     */
    ~Player3();
};
#endif
/** @} */