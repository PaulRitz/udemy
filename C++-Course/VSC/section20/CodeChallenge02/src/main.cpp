/**
 * @file main.cpp
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
 * @addtogroup section20
 * @{
 * @defgroup s20_cc02 CodeChallenge02
 * @brief practice using stl list containers
 */
/**
 * @file main.cpp
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
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s20_cc02
 * @{
 */

#ifndef FILES_IN_DIR
#define FILES_IN_DIR "files/in/"
#endif
#ifndef FILES_OUT_DIR
#define FILES_OUT_DIR "files/out/"
#endif

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>
#include <fstream>
#include <algorithm>
#include <list>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

#include "../include/song0.h"

ostream &operator<<(ostream &out, const list<Song0> &source){
    for(const auto &val : source){
        cout << val << endl;
    }
    cout << endl;
    return out;
}

void play_first(list<Song0> &source, list<Song0>::iterator &curr);
void play_next(list<Song0>::iterator &curr);
void play_previous(list<Song0>::iterator &curr);
void add_and_play(list<Song0> &source, list<Song0>::iterator &curr);


bool func_tree(char choice, list<Song0> &source, list<Song0>::iterator &curr);
char display_menu();
void display_playlist(const list<Song0> &source, const Song0 &curr);
void display_current(const Song0 &curr);

int main() {
    
    list<Song0> playlist{
        {"God's Plan", "Drake", 5},
        {"Never Be The Same", "Camilla Cabello", 5},
        {"Pray For Me", "The Weekend and K. Lamar", 4},
        {"The Middle", "Zedd, Maren Morris & Grey", 5},
        {"Wait", "Maroone 5", 4},
        {"Whatever it takes", "Imagine Dragons", 3}
    };
    list<Song0>::iterator current_song = playlist.begin();
    //####################################################
    //####################################################
    bool quit {false};
    char choice {};
    
    display_playlist(playlist, *current_song);
    do{
    choice = display_menu();
    quit = func_tree(choice, playlist, current_song);
    }while(!quit);
    
    cout << "\nQuitting -- Goodbye..." << endl;
    std::cout << std::endl;
    return 0;
}

char display_menu(){
    char input {};
    cout << "F -- Play first song" << endl;
    cout << "N -- Play next song" << endl;
    cout << "P -- Play srevious song" << endl;
    cout << "A -- Add and play a new Song at current location" << endl;
    cout << "L -- List the current playlist" << endl;
    cout << "Q -- Quit" << endl;
    cout << "Enter a selection: ";
    cin >> input;
    cout << "=================================================" << endl;
    return toupper(input);
}
void display_playlist(const list<Song0> &source, const Song0 &curr){
    cout << source;
    display_current(curr);
}
void display_current(const Song0 &curr){
    cout << "--------------------------------------------------------" << endl;
    cout << "-- Currently Playing: " << endl;
    cout << curr << endl;
    cout << "--------------------------------------------------------" << endl;
}
bool func_tree(char choice, list<Song0> &source, list<Song0>::iterator &curr){
    switch(choice){
        case 'Q':
            return true;
            break;
        case 'F':
            play_first(source, curr);
            break;
        case 'N':
            play_next(curr);
            break;
        case 'P':
            play_previous(curr);
            break;
        case 'A':
            add_and_play(source, curr);
            break;
        case 'L':
            cout << "-- displaying playlist: " << endl;
            display_playlist(source, *curr);
            break;
        default:
            cout << "Not a valid selection, please try again" << endl;
            break;
    }
    return false;
}
void play_first(list<Song0> &source, list<Song0>::iterator &curr){
    cout << "-- Playing first song" << endl;
    curr = source.begin();
    display_current(*curr);
}
void play_next(list<Song0>::iterator &curr){
    cout << "-- Playing next song: " << endl;
    curr++;
    display_current(*curr);
}
void play_previous(list<Song0>::iterator &curr){
    cout << "-- Playing previous song:" << endl;
    curr--;
    display_current(*curr);
}
void add_and_play(list<Song0> &source, list<Song0>::iterator &curr){
    string name {};
    string artist {};
    int rating {};

    cout << "-- Adding and playing a new song" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "-- Enter song name: ";
    getline(cin, name);
    cout << "-- Enter artist: ";
    getline(cin, artist);
    cout << "-- Enter your rating (1-5): ";
    cin >> rating;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    curr = source.emplace(curr, name, artist, rating);
    display_current(*curr);
}

/** @} */