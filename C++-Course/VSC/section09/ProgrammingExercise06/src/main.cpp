#include <iostream>
#include <vector>

using namespace std;

int main() {

    int count {};
    bool found {false};
    unsigned int i {};
    vector<int> vec1 {10,105,120,1,23,123,46,68,23,9,3,-99};
    vector<int> vec2 {10,105,120,1,23,123,46,68,23,9,3,929,20,7};
    vector<int> vec3 {10,105,120,1,23,123,46,68,23,9,3,-99, 123, 1, 35, 345};

    
    cout << "\n=====================" << endl;
    cout << "Vektoren: " << endl;
    cout << "Größe vec1: " << vec1.size() << endl;
    cout << "Größe vec2: " << vec2.size() << endl;
    cout << "Größe vec3: " << vec3.size() << endl;
    for(unsigned int i = 0; i < vec3.size(); i++){
        
        if(i <= (vec1.size() - 1)){
            cout << vec1.at(i) << "\t" << vec2.at(i) << "\t" << vec3.at(i) << endl;
        }
        else if(i <= (vec2.size()-1)){
            cout << "   \t" << vec2.at(i) << "\t" << vec3.at(i) << endl;
        }
        else{
            cout << "  \t" << "  \t" << vec3.at(i) << endl;
        }
    }
    cout << "\n=====================" << endl;

    while(!found){
        if(vec3.at(i) == -99){
            found = 1;
            break;
        }
        else if(i >= (vec3.size()-1)){
            break;
        }
        count++;
        i++;
        cout << i << endl;
    }
    if(found){
        cout << "The number -99 was found in [vec3]" << endl;
        cout << "count: " << count << endl; // count displays how many elements are before -99 in the vector
    }
    else{
        cout << "The number was not found!" << endl;
        cout << "count: " << vec3.size() << endl;
    }
    cout << endl;
    return 0;
}