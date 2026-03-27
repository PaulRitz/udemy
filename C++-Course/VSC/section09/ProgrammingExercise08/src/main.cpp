#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<vector<int>> vecs {
        {5, 12, 67, 3, 9, 12, 4},
        {1, 2, 3, 5, 8, 2,34 },
    };
    unsigned int result{};

    for(unsigned int k{}; k < vecs.size(); k++){
        if(vecs.at(k).size() <= 1){
            result = 0;
        }
        else{
            for(unsigned int i{}; i < vecs.at(k).size(); i++){
                for(unsigned int j{i+1}; j < vecs.at(k).size(); j++){
                    result += vecs.at(k).at(j)*vecs.at(k).at(i);
                }
            }
        }

    cout << "Vector " << k+1 << ": " << result << endl;
    }
    cout << endl;
    return 0;
}