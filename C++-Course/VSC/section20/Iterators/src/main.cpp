/**
 * @file main.cpp
 * @brief a brief description of the program
 */
/**
 * @addtogroup
 * @{
 * @defgroup sXX_XXX
 * @brief a brief decription of the program
 * @}
 */
/**
 * @addtogroup sXX_XXX
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
#include <set>
#include <map>
#include <list>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

void display(const std::vector<int> &vec);


int main() {

    cout << "========================" << endl;
    // Example 1

    std::vector<int> nums1 {1,2,3,4,5};
    auto it1 = nums1.begin();
    std::cout << *it1 << std::endl;
    it1++;
    std::cout << *it1 << std::endl;
    it1 += 2;
    std::cout << *it1 << std::endl;
    it1 -= 2;
    std::cout << *it1 << std::endl;
    it1 = nums1.end() -1;
    cout << *it1 << endl;

    // Example 1
    cout << "========================" << endl;
    // Example 2

    std::vector<int> nums2 {1,2,3,4,5};

    std::vector<int>::iterator it2 = nums2.begin();
    while(it2 != nums2.end()) {
        std::cout << *it2 << std::endl;
        it2++;
    }

    it2 = nums2.begin();
    while(it2 != nums2.end()){
        *it2 = 0;
        it2++;
    }

    display(nums2);

    // Example 2
    cout << "========================" << endl;
    // Example 3

    std::vector<int> nums3 {1,2,3,4,5};
    std::vector<int>::const_iterator it3 = nums3.begin();
    // auto it3 = nums1.cbegin();

    while(it3 != nums3.end()){
        std::cout << *it3 << std::endl;
        it3++;
    }

    it3 = nums3.begin();
    while(it3 != nums3.end()){
        // *it3 = 0; // compiler error
        it3++;
    }
    // Example 3
    cout << "========================" << endl;
    // Example 4

    std::vector<int> vec{1,2,3,4,5};
    auto it4 = vec.rbegin(); // reverse iterator
    while(it4 != vec.rend()){
        std::cout << *it4 << std::endl;
        it4++;
    }

    std::list<std::string> name {"Larry", "Moe", "Curly"};
    auto it5 = name.crbegin();      // cconstant reverse iterator over list of strings
    std::cout << *it5 << std::endl;
    it5++;
    std::cout << *it5 << std::endl;

    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it6 = favorites.begin();    // iterator over map of string, string pairs
    while(it6 != favorites.end()){
        std::cout << it6->first << ":" << it6->second << std::endl;
        it6++;
    }

    // Example 4
    cout << "========================" << endl;
    // Example 5

    std::vector<int> vec2 {1,2,3,4,5,6,7,8,9,10};
    auto start = vec2.begin() + 2;
    auto finish = vec2.end() -3;
    while(start != finish){
        std::cout << *start << std::endl;
        start++;
    }

    // Example 5
    cout << "========================" << endl;

    std::cout << std::endl;
    return 0;
}

void display(const std::vector<int> &vec){
    std::cout << "[ ";
    for(auto const &i : vec) {
        std::cout << i << " "; 
    }
    std::cout << "]" << std::endl;
}


/** @} */