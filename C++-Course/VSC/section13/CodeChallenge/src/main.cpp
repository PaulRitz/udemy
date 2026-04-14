/**
 * @file main.cpp
 * @brief Code Challenge for section 13
 * @details For this challenge you are to develop the foundation for a program 
 * for movie fanatics to keep track of what movies they have watched
 * and how many times they watched each movie.
 * 
 * The program must support the following:
 * 
 * class Movie - models a movie which includes
 * -- movie name 
 * -- movie rating (G, PG, PG-13, R)
 * -- watched - the number of times the movie has been watched
 * 
 * class Movies - models a collection of movie objects
 * 
 * Obviously, Movies needs to know about Movie since it is a collection of Movie object
 * However, our main driver should only interact with the Movies class.
 * 
 * For example. A simple main should be able to
 * -- create a Movies object
 * -- ask the Movies object to add a movie by providing the movie name, rating and watched count
 * -- ask the Movies object to increment the watched count by 1 for a movie given its name
 * -- ask the Movies object to display all of its movies
 * 
 * Additionally,
 * -- if we try to add a movie whose name is already in the movies collection
 *    we should display this error to the user
 * -- if we try to increment the watched count for a movie whose name is not in the movies
 *    collection we should display this error to the user
 */
/**
 * @addtogroup section13
 * @{
 * @defgroup s13_cc Code Challenge
 * @brief Code Challenge for section 13
 * @details For this challenge you are to develop the foundation for a program 
 * for movie fanatics to keep track of what movies they have watched
 * and how many times they watched each movie.
 * 
 * The program must support the following:
 * 
 * class Movie - models a movie which includes
 * -- movie name 
 * -- movie rating (G, PG, PG-13, R)
 * -- watched - the number of times the movie has been watched
 * 
 * class Movies - models a collection of movie objects
 * 
 * Obviously, Movies needs to know about Movie since it is a collection of Movie object
 * However, our main driver should only interact with the Movies class.
 * 
 * For example. A simple main should be able to
 * -- create a Movies object [x]
 * -- ask the Movies object to add a movie by providing the movie name, rating and watched count [x]
 * -- ask the Movies object to increment the watched count by 1 for a movie given its name [x]
 * -- ask the Movies object to display all of its movies
 * 
 * Additionally,
 * -- if we try to add a movie whose name is already in the movies collection
 *    we should display this error to the user
 * -- if we try to increment the watched count for a movie whose name is not in the movies
 *    collection we should display this error to the user
 * @}
 */
/**
 * @addtogroup s13_cc
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#include "movie.h"

int main() {

    Movies obj1;

    obj1.add_movie("Fallout", "PG-13", 0);
    obj1.add_movie("Fallout", "PG-13", 0);
    obj1.add_movie("Harry Potter", "G", 0);
    obj1.add_movie("apusd", "R",0);

    obj1.increment_movie("Fallout");
    obj1.increment_movie("Fallout");
    obj1.increment_movie("Fallout");
    obj1.increment_movie("Harry Potter");
    obj1.increment_movie("Harry Potter");

    obj1.display();



    cout << endl;
    return 0;
}
/** @} */