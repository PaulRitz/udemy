/**
 * @file song0.h
 * @brief practice using stl list containers
 * @details In this challenge you will create menu driven application that
 * will simulate a user playing songs from a playlist of songs.
 * 
 * We will use a list to simulate the user selecting the first song in the play
 * then selecting next and previous and forward or backwards through the playlist.
 * 
 * Please refer to the video demo run.
 * 
 * We will also allow users to add new song to the playlist and they
 * will be added prior to the currently playing song.
 * The menu looks as follows:
 * 
 * F -- Play First Song
 * N -- Play Next Song
 * P -- Play Previous Song
 * A -- Add and play a new Song at current location
 * L -- List the current playlist
 * Q -- quit
 * Enter a selction:
 * ================================================
 * 
 * And the available playlist is modeled as a list<song>
 * I will provide the Son class. Following are the songs in the playlist.
 * I grabbed these from the pop charts, you can use them or change 
 * them to any songs you wish.
 * 
 * God's Plan               Drake                       5
 * Never Be The Same        Camilla Cabello             5
 * Pray For Me              The Weekend and K. Lamar    4
 * The Middle               Zedd, Maren Morris & Grey   5
 * Wait                     Maroone 5                   4
 * Whatever it takes        Imagine Dragons             3
 * 
 * Note:
 * If you have trouble reading input, you can clear cin and 
 * ignore everything in the buffer with:
 * 
 * cin.clear();
 * cin.ignoer(numeric_limits<streamsize>::max(),'\n');
 */
/**
 * @addtogroup s20_cc02
 * @{
 */
#ifndef _SONG0_H_
#define _SONG0_H_
#include <iostream>
#include <iomanip>
#include <string>

class Song0 {
    friend std::ostream &operator<<(std::ostream &out, const Song0 &source);
private:
    std::string name;
    std::string artist;
    int rating;
public:
    Song0() = default;
    Song0(std::string name, std::string artist, int rating);
    
    std::string get_name();
    std::string get_artist();
    int get_rating();

    bool operator<(const Song0 &rhs) const;
    bool operator==(const Song0 &rhs) const;
};

#endif
/** @} */