/**
 * This challenge is about using a collectin (list) of integers and allowing the user 
 * to select options from a menu to perform operations on the list.
 * 
 * Your program should display a menu options to the user as follows:
 * 
 * P - Print numbers
 * A - Add a number
 * M - Display mean of the numbers
 * S - Display the smalles number
 * L - Display the largest number
 * C - Clear numbers
 * Q - Quit
 * 
 * Enter your choice: 
 * ---------------------------------
 * 
 * The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
 * If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be 
 * displayed again.
 * 
 * If the user enters 'P'/'p', you should display all of the elements (ints) in the list.
 * If the list is empty you should display "[] - the list is empty".
 * If the list is not empty then all the list elements should be displayed inside square brackets separated by a space.
 * For example, [1 2 3 4 5]
 * 
 * If the user enters 'A'/'a' then you should prompt the user for an integer to add to the list
 * which you will add to the list and then display it was added. For example, if the user enters 5
 * You should display, "5 added".
 * Duplicate list entries are ok.
 * 
 * If the user enters 'M'/'m' you should calculate the mean/average of the elements in the list and display it.
 * If the list is empty you should display, "Unable to calculate the mean - no data"
 * 
 * If the user enters 'S'/'s' you should display the smallest element in the list.
 * For example, if the list contains [2 4 5 1], you should display, "The smallest number is 1"
 * If the list is empty you should display, "Unable to determine the smallest number - list is empty"
 * 
 * If the user enters 'L'/'l' you should display the largest element in the lsit
 * For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
 * If the list is empty you should display, "Unable to determine the largest number - list is empty"
 * 
 * If the user enters 'Q'/'q' then you should display "Goodbye..." and the program should terminate.
 * 
 * Additional functionality:
 * 
 *  - search for a number in the list and if found display the number of times it occurs in the list
 *  - clearing out the list (make it empty again) (Hint: vector has .clear() method)
 *  - don't allow duplicate entries
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool quit {false}, allow_duplicates {true};
    char choice{};
    vector <int> list{};

    do{
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the average of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Clear numbers" << endl;
    cout << "F - Find a number" << endl,
    cout << "D - Enable/Disable duplicates [ " << (allow_duplicates?"enabled":"disabled") << " ]\n";
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
    cin >> choice;
    cout << "-----------------------------------------" << endl;

        switch(choice){
            case 'q':
            case 'Q':
                quit = 1;
                cout << "Quitting - Goodbye..." << endl;;
                break;
            case 'P':
            case 'p':
                if(list.empty()){
                    cout << "[] - the list is empty" << endl;;
                }
                else{
                    cout << "[ ";
                    for(auto val : list){
                        cout << val << " "; 
                    }
                    cout << "]" << endl;;
                }
                break;
            case 'A':
            case 'a':
                {
                    bool err {false};
                    int number_to_add {};
                    cout << "Please enter the number you want to add to the list: ";
                    cin >> number_to_add;

                    if(allow_duplicates){
                        list.push_back(number_to_add);
                        cout << "\nThe number [ " << number_to_add << " ] was added to the list" << endl;
                    }
                    else {
                        for(auto val : list){
                            if(number_to_add == val){
                                cout << "Sorry, no duplicates are allowed" << endl;
                                err = true;
                            }
                        }
                        if(err == 0){
                            list.push_back(number_to_add);
                            cout << "\nThe number [ " << number_to_add << " ] was added to the list" << endl;
                        };
                    }
                }
                break;
            case 'M':
            case 'm':
                {
                    double average{};
                    int sum{};
                    if(list.size() > 1){ 
                        for(auto val : list){
                            sum += val;
                        }
                        average = static_cast<double>(sum) / list.size();
                    }
                    else{
                        average = list.empty()?0:list.at(0);
                        cout << "Unable to calculate average - no data" << endl;
                    }
                    cout << "Average: " << average << endl;
                }
                break;
            case 'S':
            case 's':
                {
                    int smallest{list.at(0)};
                    if(list.empty()){
                        cout << "Unable to determine the smallest number - no data" << endl;
                    }
                    else{
                        for(unsigned int i{1}; i < list.size(); i++){
                            if(list.at(i) < smallest){
                                smallest = list.at(i);
                            }
                        }
                        cout << "The smallest number is: [ " << smallest << " ]" << endl;
                    }
                    
                }
                break;
            case 'L':
            case 'l':
                {
                    int largest{list.at(0)};
                    if(list.empty()){
                        cout << "Unable to determine the largest number - no data" << endl;
                    }
                    else{
                        for(unsigned int i{1}; i < list.size(); i++){
                            if(list.at(i) > largest){
                                largest = list.at(i);
                            }
                        }
                        cout << "The largest number is: [ " << largest << " ]" << endl;
                    }
                    
                }
                break;
            case 'C':
            case 'c':
                if(list.empty()){
                    cout << "Nothing to do - List is already empty." << endl;
                }
                else{
                    list.clear();
                    if(list.empty()){
                        cout << "List was cleared succesfully" << endl;
                    }
                }
                break;
            case 'F':
            case 'f':
                {
                    int number_to_find{};
                    int count{};

                    if(list.empty()){
                        cout << "Nothing to find here - no data" << endl;
                    }
                    else{
                        cout << "Enter the number you want to search for: ";
                        cin >> number_to_find;

                        for(auto val : list){
                            if(number_to_find == val){
                                count++;
                            }
                        }
                        if(count){
                            cout << "Your number [ " << number_to_find << " ] was found " << count << " time" 
                            << (count>1?"s!":"!") << endl; 
                        }
                        else {
                            cout << "Your number couldn't be found :(" << endl;
                        }
                    }
                }
                break;
            case 'D':
            case 'd':
                if(list.empty()){
                    allow_duplicates = !allow_duplicates;
                    cout << "!!! Duplicates are now " << (allow_duplicates?"enabled !!!":"disabled !!!") << endl;
                }
                else{
                    cout << "Please, clear your list before changing this setting!" << endl;
                }
                break;
            default:
                cout << "Unknown selection - Please try again..." << endl;
        }

    cout << "-----------------------------------------" << endl;
    }while(!quit);


    cout << endl;
    return 0;
}