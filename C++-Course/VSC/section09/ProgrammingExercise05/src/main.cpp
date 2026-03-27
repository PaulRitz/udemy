#include <iostream>
#include <vector>

using namespace std;

int main() {

    int count{};
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};

    for(auto t : vec){
        if(t%3==0 || t%5==0){
            count += 1;
        }
    }

    cout << count << endl;
    
    cout << endl;
    return 0;
}