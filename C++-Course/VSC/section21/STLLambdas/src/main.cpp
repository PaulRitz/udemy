/**
 * @file main.cpp
 * @brief showcase of lambda expressions with the stl
 */
/**
 * @addtogroup section21
 * @{
 * @defgroup s21_p04 STLLambdas
 * @brief showcase of lambda expressions with the stl
 * @}
 */
/**
 * @addtogroup s21_p04
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
#include <numeric>

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

class Password_Validator01 {
private:
    char restricted_symbol{'$'};
public:
    bool is_valid(string password){
        return all_of(password.begin(),password.end(),[this](char character){
            return character != this->restricted_symbol;
        });
    }
};
class Password_Validator02 {
private:
    vector<char> restricted_symbols{'!','$','+'};
public:
    bool is_valid(string password){
        return all_of(password.begin(),password.end(),[this](char character){
            return none_of(restricted_symbols.begin(),restricted_symbols.end(),[character](char symbol){
                return character == symbol;
            });
        });
    }
};
class Person6 {
    friend std::ostream &operator<<(std::ostream &out, const Person6 &rhs){
        out << "[Person6: " << rhs.name << ": " << rhs.age << "]";
        return out;
    }
private:
    int age;
    std::string name;
public:
    Person6() = default;
    Person6(std::string name, int age)
        :name{name},age{age} {};
    Person6(const Person6 &p)
        :name{p.name},age{p.age} {};
    ~Person6() = default;
    std::string get_name() const{
        return this->name;
    }
    void set_name(std::string name){
        this->name = name;
    }
    int get_age() const{
        return this->age;
    }
    void set_age(int age){
        this->age = age;
    }

    auto change_person1(){return [this](string new_name, int new_age){this->name=new_name;this->age=new_age;};}
    auto change_person2(){return [=](string new_name, int new_age){this->name=new_name;this->age=new_age;};}
    auto change_person3(){return [&](string new_name, int new_age){this->name=new_name;this->age=new_age;};}
};
/**
 * @brief in_between
 * @details all_of - Non-modifying sequence operation
 * Tests whether all elements contained within the sequence satisfy the
 * condition defined by the passed predicate lambda
 */
bool in_between(const vector<int> &nums, int start_value, int end_value){
    bool result{false};
    result = all_of(nums.begin(), nums.end(), [start_value,end_value](int value){
        return value >= start_value && value <=end_value;
    });
    return result;
}


// See cppreference.com for documentation
// for the STL-algorithms

int main() {

    cout << "============================" << endl;
    // Example 1
    {

    vector<int> nums {10,20,30,40,50};

    /**
     * for_each - Non-modifying sequence operation
     * -- displays each element of nums
     */
    for_each(nums.begin(),nums.end(),[](int num){
        cout << num << " ";
    });
    cout << endl;

    }
    // Example 1
    cout << "============================" << endl;
    // Example 2
    {

    /**
     * is_permutation - Non-modifying sequence operation
     * Tests whether rwo triangles are quivalent.
     * Triangles are defined by a vector of three points in any order.
     * Regardless of the order of points, if two triangles contain the
     * same three points then they are quivalent.
     * This is determined by testing whether one sequence of points is a
     * permutation of another using a predicate lambda to compare points
     */
    struct Point {
        int x;
        int y;
    };

    Point pt1{1,2};
    Point pt2{4,3};
    Point pt3{3,5};
    Point pt4{3,1};

    vector<Point> triangle1{pt1,pt2,pt3};
    vector<Point> triangle2{pt2,pt3,pt1};
    vector<Point> triangle3{pt1,pt2,pt4};

    // Tests whether triangle 1 and triangle 2 are equivalent
    if(is_permutation(triangle1.begin(),triangle1.end(),triangle2.begin(),[](Point lhs,Point rhs){
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })){
        cout << "Triangle1 and Triangle2 are equivalent!" << endl;
    }else{
        cout << "Triangle1 and Triangle2 are not equivalent!" << endl;
    }

    // Tests whether triangle 1 and triangle 2 are equivalent
    if(is_permutation(triangle1.begin(),triangle1.end(),triangle3.begin(),[](Point lhs, Point rhs){
        return lhs.x == rhs.x && lhs.y == rhs.y;
    })){
        cout << "Triangle1 and Triangle3 are equivalent!" << endl;
    }else{
        cout << "Triangle1 and Triangle3 are not equivalent!" << endl;
    }

    }
    // Example 2
    cout << "============================" << endl;
    // Exampe 3
    {

    /**
     * transform - Modifying sequence operation
     * Similar to the lambda "bonus" we defined earlier which awarded
     * bonus points to test scores, the transform function applies whatever
     * operation is defined within the passed lambda to each element of the sequence
     * In this case, each test score is increased by 5 points
     */
    vector<int> test_scores{93,88,75,68,65};
    int bonus_points {5};

    transform(test_scores.begin(),test_scores.end(),test_scores.begin(),[bonus_points](int score){
        return score+=bonus_points;
    });

    for(int score : test_scores){
        cout << score << " ";
    }
    cout << endl;

    }
    // Exampe 3
    cout << "============================" << endl;
    // Exampe 4
    {
    
    /**
     * remove_if - Modifying sequence operations
     * This example is what's known as an erase-remove idiom and is one of
     * the most common uses of lambdas with the standard template library
     * The remove_if function removes all elements for which the predicate
     * lambda returns true. The way in which it does this is by replacing
     * each element for which the predicate returns true with the next element
     * hte elements for which the predicate returned false.
     * In this case the erase remove idiom is used to remove alle vene numbers from nums
     */
    vector<int> nums{1,2,3,4,5};

    nums.erase(remove_if(nums.begin(),nums.end(),[](int num){
        return num%2 == 0;
    }),nums.end());

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;

    }
    // Exampe 4
    cout << "============================" << endl;
    // Example 5
    {

    /**
     * sort - Sorting
     * Sorts elements in the sequence according to the predicate lambda.
     * In this example, a vector of people is first sorted by name in ascending order 
     * and then by age in descending order
     */

    Person6 person1{"Larry",18};
    Person6 person2{"Moe",30};
    Person6 person3{"Curly",25};

    vector<Person6> people {person1,person2,person3};

    sort(people.begin(),people.end(),[](Person6 lhs,Person6 rhs){
        return lhs.get_name() < rhs.get_name();
    });

    for(const auto person : people){
        cout << &person << endl;
    }
    cout << endl;
    
    sort(people.begin(),people.end(),[](Person6 lhs, Person6 rhs){
        return lhs.get_age() > rhs.get_age();
    });
    
    for(const auto &person : people){
        cout << person << endl;
    }
    cout << endl;
    
    sort(people.begin(),people.end(),[](Person6 lhs, Person6 rhs){
        return lhs.get_age() < rhs.get_age();
    });
    
    for(const auto &person : people){
        cout << person << endl;
    }
    cout << endl;

    }
    // Example 5
    cout << "============================" << endl;
    // Example 6
    {
    
    cout << boolalpha;

    vector<int> nums(10);
    iota(nums.begin(),nums.end(),1);

    for(int num : nums){
        cout << num << " ";
    }

    cout << endl;

    cout << in_between(nums, 50, 60) << endl;
    cout << in_between(nums, 1, 10) << endl;
    cout << in_between(nums,5 ,7) << endl;


    }
    // Example 6
    cout << "============================" << endl;
    // Example 7
    {

    /**
     * all_of - Non-modifying sequence operation
     * Tests whether all elements contained within the sequence satisfy the
     * condition defined by the passed predicate lambda.
     * In this case, the all_of function is contained within the class
     * Password_Validator which determines whether a password contains
     * a restricted symbol and thus is valid or not.
     * The same can be accomplished by using the stl function "none_of" and
     * changing the conditional contained within the passed lambda.
     */

    string password {"hollywood1$"};
    Password_Validator01 pv1;

    if(pv1.is_valid(password)){
        cout << "The password " << password << " is valid!" << std::endl;
    }else {
        cout << "The password " << password << " is not valid!" << endl;
    }

    password = "hollywood1";
    if(pv1.is_valid(password)){
        cout << "The password " << password << " is valid!" << std::endl;
    }else {
        cout << "The password " << password << " is not valid!" << endl;
    }

    cout << endl;

    password = "C++Rocks!";
    Password_Validator02 pv2;

    if(pv2.is_valid(password)){
        cout << "The password " << password << " is valid!" << std::endl;
    }else {
        cout << "The password " << password << " is not valid!" << endl;
    }
    
    password = "CPlusPlusRocks!";
    if(pv2.is_valid(password)){
        cout << "The password " << password << " is valid!" << std::endl;
    }else {
        cout << "The password " << password << " is not valid!" << endl;
    }

    password = "CPlusPlusRocks";
    if(pv2.is_valid(password)){
        cout << "The password " << password << " is valid!" << std::endl;
    }else {
        cout << "The password " << password << " is not valid!" << endl;
    }

    }
    // Example 7
    cout << "============================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */