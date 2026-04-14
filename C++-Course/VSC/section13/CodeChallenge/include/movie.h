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
#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>
#include <vector>
#include "movies.h"

/**
 * @brief class that stores data about one singular movie
 * @param name stores the movie name (string)
 * @param rating stores the movie rating [G,PG,PG-13,R](string)
 * @param watched stores the counter, that counts how often the movie was watched
 * @note this class has to have the Movies class as a friend
 */
class Movie {
private:
    std::string name;
    std::string rating;
    const std::vector<std::string> ratings {"G","PG","PG-13","R"};
    int watched;
    friend class Movies;
public:
    /**
     * @brief constructor for a movie object
     */
    Movie(std::string name_val = "None", 
            std::string rating_val = "None", 
            int watched_val = 0);
    
    /**
     * @brief enables user to change the name of a movie object after initialization
     */
    void set_name(std::string str);
    /**
     * @brief enables user to change the rating of the movie object after initialization
     */
    void set_rating(std::string str);
    /**
     * @brief enables user to change the number of times watched of the movie object after initialization
     */
    void set_watched(int val);
    /**
     * @brief enables user to increment the number of times watched of the movie by one
     */
    void increment_watched();
    /**
     * @brief displays the whole movie object
     */
    void display() const;

    /**
     * @brief returns the name of the movie object
     */
    std::string get_name() const;
    /**
     * @brief returns the rating of the movie object
     */
    std::string get_rating() const;
    /**
     * @brief returns the number of times watched of the movie object
     */
    int get_watched() const;


};

#endif
/** @} */