/**
 * @file player12.h
 * @brief showcase of friends in c++
 */
/**
 * @addtogroup s13_p17
 * @{
 */
#ifndef _PLAYER12_H_
#define _PLAYER12_H_
#include <string>
#include <iostream>

class Friend_class;

class Player12{
    // friend std::ostream &operator<<(std::ostream &out, const Player12 &source);
public:
    enum class Mode {Attack, Defense, Idle};
    enum class Direction {North, South, East, West};

    std::string get_name() const;
    void set_name(std::string name);

    Mode get_mode() const;
    void set_mode(Mode mode);

    Direction get_direction() const;
    void set_direction(Direction direction);
    
    int get_health() const;
    void set_health(int health);
    
    int get_xp() const;
    void set_xp(int xp);

    Player12(std::string name_val = "None", Mode mode = Mode::Idle,
        Direction direction = Direction::North, int health_val = 0, int xp_val = 0);
    Player12(const Player12 &source);
    ~Player12();

    static int get_num_players();
private:
    Direction direction;
    Mode mode;

    static int player_count;
    std::string name;
    int health;
    int xp;
};
#endif
/** @} */