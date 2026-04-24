/**
 * @file main.cpp
 * @brief showcase of statefull lambada expressions
 */
/**
 * @addtogroup section21
 * @{
 * @defgroup s21_p03 StatefullLambda
 * @brief showcase of statefull lambada expressions
 * @}
 */
/**
 * @addtogroup s21_p03
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

const std::string input_file_path = std::string(FILES_IN_DIR);
const std::string output_file_path = std::string(FILES_OUT_DIR);

using namespace std;

class Person5 {
    friend std::ostream &operator<<(std::ostream &out, const Person5 &rhs){
        out << "[Person5: " << rhs.name << ": " << rhs.age << "]";
        return out;
    }
private:
    int age;
    std::string name;
public:
    Person5() = default;
    Person5(std::string name, int age)
        :name{name},age{age} {};
    Person5(const Person5 &p)
        :name{p.name},age{p.age} {};
    ~Person5() = default;
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
class People0 {
private:
    vector<Person5> people;
    int max_people;
public:
    People0(int max=10)
        :max_people(max){}
    People0(const People0 &p)=default;
    void add(string name, int age){
        people.emplace_back(name,age);
    }
    void set_max_people(int max){
        this->max_people = max;
    }
    int get_max_people()const{
        return this->max_people;
    }

    /**
     * @brief get_people method
     * @details This method returns a vector of Person5 objects in
     * people whose age > max_age AND it limits the number of
     * persons returned to be <= the member variable max_people.
     * @note that the lambda in this example captures this, by reference, and by value
     */
    vector<Person5> get_people(int max_age){
        vector<Person5> result {};
        int count {};
        copy_if(people.begin(),people.end(),
                back_inserter(result),[this,&count,max_age](const Person5 &p){
                    // count++;
                    return p.get_age() > max_age && ++count <= this->max_people;
                });
        return result;
    }
};
class Lambda0 {
private:
    int y;
public:
    Lambda0(int y)
        :y{y} {}
    void operator()(int x)const{
        cout << x+y << endl;
    }
};

int global_x {1000};


int main() {

    cout << "============================" << endl;
    // Example 1
    {
    /**
     * Capture by value
     * The global variable global_x cannout be captured because it is not
     * within the reaching scope of the lambda. It can however still be accessed
     * from within the lambda using normal name lookup rules.
     */
    int local_x {100};

    auto l = [local_x](){
        cout << local_x << endl;
        cout << global_x << endl;
    };
    l();

    }
    // Example 1
    cout << "============================" << endl;
    // Example 2
    {

    /**
     * Capture by value
     * The captured variable x can only be modified within the lambda by 
     * using the mutable keyword. Note that this modifiability only pertains to
     * the captured variable within the lambda body and not the actual variable
     */
        
    int x {100};
    auto l = [x]()mutable{
        x+=100;
        cout << x << endl;
    };
    l();
    cout << x << endl;

    l();
    cout << x << endl;

    }
    // Example 2
    cout << "============================" << endl;
    // Example 3
    {

    /**
     * Capture by reference
     * Any changes made to the captured reference variable within the lambda body
     * will change the actual variable
     */
        
    int x {100};

    auto l = [&x]()mutable{
        x+=100;
        cout << x << endl;
    };
    l();
    cout << x << endl;
    }
    // Example 3
    cout << "============================" << endl;
    // Example 4
    {

    /**
     * Default capture by value - mutable
     * Only variables used within the lambda body are captured by value.
     * The variable z is not captured by the lambda
     */
    int x {100};
    int y {100};
    int z {100};    // Note that z is not captured in the lambda since it is not used
                    // This should produce an 'unused variable' warning when compiling

    auto l = [=]()mutable{
        x+=100;
        y+=100;
        cout << x << endl;
        cout << y << endl;
    };
    l();

    cout << endl;
    cout << x << endl;
    cout << y << endl;

    }
    // Example 4
    cout << "============================" << endl;
    // Example 5
    {

    /**
     * Default capture by reference
     * This time because all three variables -x,y,z are used within
     * the lambda body, all three of them will be captured by reference.
     */
    int x {100};
    int y {200};
    int z {300};

    auto l = [&](){
        x+=100;
        y+=100;
        z+=100;
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    };
    l();

    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    }
    // Example 5
    cout << "============================" << endl;
    // Example 6
    {

    /**
     * Default capture by value, capture y by reference
     */
    int x {100};
    int y {200};
    int z {300};

    auto l = [=,&y]mutable{
        x+=100;
        y+=100;
        z+=100;
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    };
    l();

    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    }
    // Example 6
    cout << "============================" << endl;
    // Example 7
    {

    /**
     * Default capture by reference, capture x and z by value
     * Equivalent to example 6
     */
    int x {100};
    int y {200};
    int z {300};


    auto l = [&,x,z]mutable{
        x+=100;
        y+=100;
        z+=100;
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    };
    l();

    cout << endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    }
    // Example 7
    cout << "============================" << endl;
    // Example 8
    {

    /**
     * Default capture by referene of the current object usin [this]
     * [=],[&], and [this] are equivalent when capturing an object's member variables - all are captured by reference
     * Note that capturing this with [=] has been deprecatewd in C++20
     * Also, C++20 allows [*this] which captures by value!
     */
    Person5 person{"Larry",18};
    cout << person << endl;

    // Default capture [this]
    // This is the preferred way
    auto change_person1 = person.change_person1();
    change_person1("Moe",30);
    cout << person << endl;

    // Default capture [=]
    // This has been deprecated in C++20
    auto change_person2 = person.change_person2();
    change_person2("Curly",25);
    cout << person << endl;

    // Default capture [&]
    auto change_person3 = person.change_person3();
    change_person3("Frank",34);
    cout << person << endl;
    }
    // Example 8
    cout << "============================" << endl;
    // Example 9
    {

    /**
     * Lamda class equivalence example
     */
    int y{100};
    Lambda0 lambda1(y);
    auto lambda2 = [y](int x){cout << x + y << endl;};
    
    lambda1(200);
    lambda2(200);

    }
    // Example 9
    cout << "============================" << endl;
    // Example 10
    {

    People0 friends;
    friends.add("Larry",18);
    friends.add("Curly",25);
    friends.add("Moe",35);
    friends.add("Frank",28);
    friends.add("James",65);

    auto result = friends.get_people(17);

    cout << endl;
    for(const auto &p : result){
        cout << p << endl;
    }

    friends.set_max_people(3);

    result = friends.get_people(17);

    cout << endl;
    for(const auto &p : result){
        cout << p << endl;
    }

    result = friends.get_people(50);

    cout << endl;
    for(const auto &p : result){
        cout << p << endl;
    }
    }
    // Example 10
    cout << "============================" << endl;

    std::cout << std::endl;
    return 0;
}
/** @} */