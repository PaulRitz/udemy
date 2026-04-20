/**
 * @file main.cpp
 * @brief code challenge 1: practice using io manipulation
 * @details Foramtting output
 * 
 * I have provided you with the starter sourcecode for this challenge.
 * In this challenge you are to diplay the provided data in a nicely formatted tale.
 * Your table does not have to match mine, but pracitce with the format manipulators 
 * so you become comfortable with them.
 * 
 * There are 3 structures provided. Yes, these could also be classes with public data,
 * but it's common to use structures when we simply want to model only data and not 
 * operations as we would with classes.
 * 
 * The structures work together to create a Tours structure that will contain 
 * information about Tours to South America.
 * The Tours include countries, Cities within thoes countries along wth population and cost data for
 * each city tour.
 * I know, population? Huh? I just wanted a big number so that you can format it, OK :)
 * 
 * Please wathc the challenge video for the expected output. It won't look right if I put it in this
 * editor because fo the font style
 * 
 * In the provided source code I'm giving you some code that displays the data from the structures 
 * and the vectors within the structures. This code uses tabs to format the data and it looks pretty ugly.
 */
/**
 * @addtogroup section19
 * @{
 * @defgroup s19_cc1 CodeChallenge1
 * @brief code challenge 1: practice using io manipulation
 * @}
 */
/**
 * @ingroup CCs
 * @addtogroup s19_cc1
 * @{
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <memory>

// using namespace std;

struct City {
    std::string name;
    long population;
    double cost;
};
struct Country {
    std::string name;
    std::vector<City> cities;
};
struct Tour {
    std::string title;
    std::vector<Country> countries;
};

Tour init_tour01();
void display_table(const Tour &source);
void ruler(int n);

int main() {
    Tour tour01 {init_tour01()};
    
    display_table(tour01);

    std::cout << std::endl;
    return 0;
}

void display_table(const Tour &source){
    const int width_of_table {100};
    const int width_of_column {width_of_table/4};
    int run_var {};
    // int mult {};
    
    ruler(width_of_table);

    std::cout << std::setw(width_of_column*2.5) << std::right << source.title << std::endl << std::endl;

    // std::cout << std::setfill('-');
    std::cout << std::setw(width_of_column) << std::left << "Country";
    std::cout << std::setw(width_of_column) << std::left << "City";
    std::cout << std::setw(width_of_column) << std::left << "Population";
    std::cout << std::setw(width_of_column) << std::left << "Price";
    std::cout << std::endl;

    std::cout << std::setfill(' ');
    std::cout << std::setprecision(2) << std::fixed;
    for(const auto &c : source.countries){
        std::cout << std::setw(width_of_column) << std::left << c.name;
        run_var = 0;
        for(const auto &ci : c.cities){
            if(run_var != 0){
                // mult = 2;
                std::cout << std::setw(width_of_column) << std::left << " ";
            }
            else {
                // mult = 1;
            }
            std::cout << std::setw(width_of_column) << std::left << ci.name;
            // std::cout << std::setw(mult*width_of_column) << ((mult==1)?(std::left):(std::right)) << ci.name;
            std::cout << std::setw(width_of_column) << std::left << ci.population;
            std::cout << std::setw(width_of_column) << std::left << ci.cost;
            std::cout << std::endl;
            run_var++;
        }
        // std::cout << std::endl;
    }
}

void ruler(int n){
    for(int i {}; i < n/10; i++){
    std::cout << "1234567890";  
    }
    std::cout << std::endl << std::endl;
};

Tour init_tour01(){
    return Tour {
        "Tour Ticket Prices from Miami",
        {
            {
                "Colombia", {
                    {"Bogota", 8778000, 400.98},
                    {"Cali", 2401000, 424.12},
                    {"Medellin", 2464000, 350.98},
                    {"Cartagena", 972000, 345.34},
                },
            },
            {
                "Brazil", {
                    {"Rio De Janiero", 13500000, 567.45},
                    {"Sao Paulo", 11310000, 975.45},
                    {"Salvador", 18234000, 855.99}
                },
            },
            {
                "Chile", {
                    {"Valdivia", 260000, 569.12},
                    {"Santiago", 7040000, 520.00}
                },
            },
            {
                "Argentina", {
                    {"Buenos Aires", 3010000, 723.77}
                }
            }
        },
    };
}
/** @} */