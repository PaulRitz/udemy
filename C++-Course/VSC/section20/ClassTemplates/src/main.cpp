/**
 * @file main.cpp
 * @brief showcase of class templates in generic programming
 */
/**
 * @addtogroup section20
 * @{
 * @defgroup s20_p02 ClassTemplates
 * @brief showcase of class templates in generic programming
 * @}
 */
/**
 * @addtogroup s20_p02
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

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

// using namespace std;

// Template classes are typically completely contained in header files
// So, we would have the template class in Item.h and no Item.cpp file
// would be used
template<typename T>
class Item{
private:
    std::string name;
    T value;
public:
    Item(std::string name, T value):name{name},value{value} {}
    std::string get_name() const {
        return name;
    }
    T get_value() const {
        return value;
    }
};

template<typename T1, typename T2>
struct My_Pair{
    T1 first;
    T2 second;
};

int main() {

    std::cout << "============================" << std::endl;
    // Example 1
    
    Item<int> item1 {"Frank", 100};
    std::cout << item1.get_name() << ", " << item1.get_value() << std::endl;
    
    Item<std::string> item2 {"Frank", "Professor"};
    std::cout << item2.get_name() << ", " << item2.get_value() << std::endl;
    
    Item<Item<std::string>> item3 {"Frank", {"C++", "Professor"}};
    std::cout << item3.get_name() << ", "
    << item3.get_value().get_name() << ", "
    << item3.get_value().get_value() << std::endl;
    
    // Example 1
    std::cout << "============================" << std::endl;
    // Example 2

    std::vector<Item<double>> vec {};
    vec.push_back(Item<double>("Larry", 100));
    vec.push_back(Item<double>("Moe", 200));
    vec.push_back(Item("Larry", 300.0));

    for(const auto &item : vec){
        std::cout << item.get_name() << ", " << item.get_value() << std::endl;
    }

    // Example 2
    std::cout << "============================" << std::endl;
    // Example 3

    My_Pair <std::string, int> p1 {"Frank", 100};
    My_Pair <int,double> p2 {124, 13.6};

    std::cout << p1.first << ", " << p1.second << std::endl;
    std::cout << p2.first << ", " << p2.second << std::endl;

    // Example 3
    std::cout << "============================" << std::endl;
    

    std::cout << std::endl;
    return 0;
}
/** @} */