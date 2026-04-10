/**
 * @file main.cpp
 * @details Code Challenge for Section 11 is to modify Code Challenge from Section 9
 * --> This means Section 9 Code should use functions
 */

/**
 * @addtogroup section11
 * @{
 * @defgroup s11_cc CodeChallenge
 * @details Code Challenge for Section 11 is to modify Code Challenge from Section 9
 * --> This means Section 9 Code should use functions
 * @}
 */

/**
 * @addtogroup s11_cc
 * @{
 */

#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;
char home_menu(bool allow_duplicates);

bool func_tree(char choice, vector<int> &list, bool &allow_duplicates);
bool check_for_doubling_error(bool allow_duplicates, vector<int> vec, int num);
bool cmp(int a, int b, bool dir); // helper function for find_extreme()
bool set_duplicate_allowance(bool allow_duplicates, const vector<int> vec);

void calc_average(const vector<int> vec);
void print_vector(const vector<int> vec);
void append_to_vector(vector<int> &vec, bool allow_duplicates); 
void find_extreme(bool dir, const vector<int> vec); // dir = true -> find minimum | dir = false -> find maximum
void clear_vector(vector<int> &vec);
void search_for_num(const vector<int> vec);


int main() {
    bool quit {false};
    bool allow_duplicates {true};
    vector<int> list{};


    do{
        quit = func_tree(home_menu(allow_duplicates), list, allow_duplicates);
    }while(!quit);

    cout << endl;
    return 0;
}

char home_menu(bool allow_duplicates){
    char choice;
    cout << "P - Print list" << endl;
    cout << "A - Add a number to the list" << endl;
    cout << "M - Display the average of the numbers in the list" << endl;
    cout << "S - Display the smallest number of the list" << endl;
    cout << "L - Display the largest number of the list" << endl;
    cout << "C - Clear the list" << endl;
    cout << "F - Find a number in the list" << endl;
    cout << "D - Enable/Disable duplicates [" << (allow_duplicates?"enabled":"disabled") << " ]\n";
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << "---------------------------------------" << endl;

    return choice;
}

bool func_tree(char choice, vector<int> &list, bool &allow_duplicates){
    switch(choice){
        case 'q':
        case 'Q':
            return true;
            break;
        case 'p':
        case 'P':
            print_vector(list);
            cout << "---------------------------------------" << endl;

            break;
        case 'a':
        case 'A':
            append_to_vector(list, allow_duplicates);
            cout << "---------------------------------------" << endl;
            break;
        case 'm':
        case 'M':
            calc_average(list);
            cout << "---------------------------------------" << endl;
            break;
        case 's':
        case 'S':
            cout << "Determine smallest number in List: " << endl;
            find_extreme(true, list);
            cout << "---------------------------------------" << endl;
            break;
        case 'l':
        case 'L':
            cout << "Determine largest number in List:" << endl;
            find_extreme(false, list);
            cout << "---------------------------------------" << endl;
            break;
        case 'c':
        case 'C':
            clear_vector(list);
            cout << "---------------------------------------" << endl;
            break;
        case 'f':
        case 'F':
            search_for_num(list);
            cout << "---------------------------------------" << endl;
            break;
        case 'd':
        case 'D':
            allow_duplicates = set_duplicate_allowance(allow_duplicates, list);
            cout << "---------------------------------------" << endl;
            break;
        default:
            cout << "Unknown selection - Please try again..." << endl;
            cout << "---------------------------------------" << endl;
    }
    return false;
}

void print_vector(const vector<int> vec){
    if(vec.empty()){
        cout << "[] - the list is empty" << endl;
    }
    else{
        cout << "[ ";
        for(auto val : vec){
            cout << val << " ";
        }
        cout << " ]" << endl;
    }
    return;
}

void append_to_vector(vector<int> &vec, bool allow_duplicates){
    int number_to_add {};
    cout << "Please enter the number you want to add to the list: ";
    cin >> number_to_add;
    if(!check_for_doubling_error(allow_duplicates, vec, number_to_add)){
        vec.push_back(number_to_add);
        cout << "\nThe number [ " << number_to_add << " ] was added to the list" << endl;
    }
    
}

bool check_for_doubling_error(bool allow_duplicates, vector<int> vec, int num){
    if(!allow_duplicates){
        for(auto val : vec){
            if(num == val){
                cout << "Sorry, no duplicates are allowed" << endl;
                return true;
            }
        }
    }
    return false;
}

void calc_average(const vector<int> vec){
    double average{};
    int sum{};
    if(vec.size() > 1){
        for(auto val : vec){
            sum += val;
        }
        average = static_cast<double>(sum) / vec.size();
    }
    else{
        average = vec.empty()?0:vec.at(0);
        cout << "Unable to calculate average - no data" << endl;
    }
    cout << "Average: " << average << endl;
}

void find_extreme(bool dir, const vector<int> vec){
    if(vec.empty()){
        cout << "Unable to determine the extrema - no data" << endl;
    }
    else{
        int extreme{vec.at(0)};
        for(unsigned int i{1}; i < vec.size(); i++){
            (cmp(extreme, vec.at(i), dir))?(extreme=vec.at(i)):0;
        }
        cout << "The extreme number is: [ " << extreme << " ]" << endl;
    }
}

bool cmp(int a, int b, bool dir){
    if(dir){
        return (a>b);
    }
    else {
        return (a<b);
    }
}

void clear_vector(vector<int> &vec){
    if(vec.empty()){
        cout << "Nothing to do - List is already empty." << endl;
    }
    else{
        vec.clear();
        if(vec.empty()){
            cout << "List was cleared successfully" << endl;
        }
    }
}

void search_for_num(const vector<int> vec){
    int number_to_find {};
    int count {};

    if(vec.empty()){
        cout << "Nothing to find here - no data" << endl;
    }
    else{
        cout << "Enter the number you want to search for: ";
        cin >> number_to_find;
    }
    for(auto val : vec){
        if(number_to_find == val){
            count++;
        }
    }
    if(count){
        cout << "Your number [" << number_to_find << " ] was found " << count << " time" 
        << ((count>1)?"s!":"!") << endl;
    }
    else{
        cout << "Your number couldn't be found :(" << endl;
    }
}

bool set_duplicate_allowance(bool allow_duplicates, const vector<int> vec){
    if(vec.empty()){
        cout << "!!! Duplicates are now " << (allow_duplicates?"disabled !!!":"enabled !!!") << endl;
        return !allow_duplicates;
    }
    else{
        cout << "Please, clear your list before changing this setting!" << endl;
    }
    return allow_duplicates;
}
/** @} */