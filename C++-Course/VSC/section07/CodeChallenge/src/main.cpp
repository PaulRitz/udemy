#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "=====================" << endl;

    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nContent of Vector 1:" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "\nContent of Vector 2:" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;
    
    cout << "=====================" << endl;

    vector <vector <int>> vector2D {};
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << "Content of Vector 2D:" << endl;
    cout << vector2D.at(0).at(0) << endl;
    cout << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << endl;
    cout << vector2D.at(1).at(1) << endl;

    cout << "=====================" << endl;

    vector1.at(0) = 1000;

    cout << "Vector 1 is now " << vector1.at(0) << " at position 0" << endl;

    cout << "\nContent of Vector 2D:" << endl;
    cout << vector2D.at(0).at(0) << endl;
    cout << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << endl;
    cout << vector2D.at(1).at(1) << endl;

    /**
     * at first glance you would expect vector2D to change its value according to
     * the changes made to vector1.
     * 
     * but if you think about it, the push_back() method only pushes the values
     * of the vector to another vector not the vector itself. 
     */

    cout << "=====================" << endl;

    


    cout << endl;
    return 0;
}