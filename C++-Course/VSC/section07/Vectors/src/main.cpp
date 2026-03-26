#include <iostream>
#include <vector> // required when using vectors

using namespace std; // vectors are part of the std namespace --> either use std::vector or this

int main() {

    cout << "==============================" << endl;

    vector <char> vowels1; //empty
    vector <char> vowels2 (5); // 5 elements initialized to zero
    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

    cout << "The first element of vowels: " << vowels[0] << endl;
    cout << "The last element of vowels: " << vowels[4] << endl;

    // cout << "vowels1: " << vowels1[0] << endl;
    cout << "vowels2: " << vowels2[0] << endl;

    cout << "==============================" << endl;

    // vector <int> test_scores (3); // 3 elements all init to 0
    // vector <int> test_scores(3, 100); //3 elements all init to 100

    vector <int> test_scores {100, 98 , 89};

    cout << "\nTest scores using array syntax:" << endl; // array syntax doesn't have boundary syntax (not a method)
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl; // vector syntax has boundary checking (is a method)
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << "==============================" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "==============================" << endl;

    cout << "\nAdd a test score: " << endl;
    int score_to_add {0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    
    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << "==============================" << endl;

    cout << "\nAdd one more test score: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);
    
    cout << "\nUpdated test scores: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    // cout << "==============================" << endl;

    // cout << "This should cause an exception!!" << test_scores.at(10) << endl;
    // cout << "This should cause an exception!!" << test_scores[10] << endl;

    cout << "==============================" << endl;

    cout << "Example of a 2D-vector: " << endl;

    vector <vector <int>> movie_ratings{
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5},
    };

    cout << "\nHere are the movie ratings for reviewer #1 (array syntax):" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "\nHere are the movie ratings for reviewer #1 (vector syntax):" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
    return 0;
}