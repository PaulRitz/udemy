#include <iostream>
#include <string>

using namespace std;

int main() {
    string input {};
    string pyramid {};
    string std{};

    int count {};
    
    /**
     * State 0:
     * counts to i and adds every letter from input up to position i
     * then switches state 
     * 
     * State 1:
     * counts from i to 0 and adds every letter from input from position i to position 0
     * then switches state
     * 
     * State 2:
     * the run is finished and the code (here the for-loop is finished)
     */
    int state {};

    cout << "Enter a string: " << endl;
    getline(cin, input);

    for(int i {}; i < input.length(); i++){
        std += " ";
    }
    pyramid = std;

    for(int i {}; i < input.length(); i++){    
        pyramid.erase((input.length()-1-i));
        while(state != 2){
            switch(state){
                case 0:
                    if(count == i){
                        pyramid += input.at(count);  
                        count!=0?count--:0;                     
                        state++;
                        break;
                    }

                    pyramid += input.at(count);
                    count++;
                    break;
                case 1:
                    if(count == 0){
                        pyramid += (i==0?0:input.at(count));
                        state++;
                        break;
                    }

                    pyramid += input.at(count);
                    count--;
                    break;
            }
        }
        cout << pyramid << endl;
        pyramid = std;
        count = 0;
        state = 0;
    }

    cout << endl;
    return 0;
}