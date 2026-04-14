/**
 * @file movie.h
 * @brief Code Challenge for section 13 -- Movie Class
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
 * @addtogroup s13_cc
 * @{
 */
#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "movie.h"
#include <vector> 
#include <iostream>
#include <string>

class Movie;

/**
 * @brief this class stores a collection of movie objects in a vector
 * @param list the vector that stores all the movie objects
 * @param movie_count NOT IMPLEMENTED -- the movie count should count up with every added movie
 */
class Movies {
private:
    std::vector<Movie> list;
    static int movie_count;
public:
    /**
     * @brief enables user to add a movie to the movies object
     * @details this function checks whether there is a movie with the same name in the vector already
     * and return false if there is -- then, the movie is not added --, if there is no movie with the same name 
     * in the vector then the function returns true -- then, the movie is added to the list --
     */
    bool add_movie(std::string name_val, std::string rating_val, int watched_val);
    /**
     * @brief enables user to increment a movie in the movies list by one
     * @details this function searches for an entered movie name. if the movie is in the list
     * of the functions then the watched count for this movie is incremented and the function returns true.
     * If there is no movie in the list then the function returns false and nothing is incremented
     */
    bool increment_movie(std::string name_val);

    /**
     * @brief enables user to display every movie in the list
     */
    void display();

    Movies();
    ~Movies();

};

#endif
/** @} */