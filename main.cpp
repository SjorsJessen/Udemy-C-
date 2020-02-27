#include <iostream>
#include <vector>

using namespace std;

void initVectors();
void initArrays();
void printMessage();
void addVectors(vector<int> test_scores);
void movieRatingsVector();

int returnInt();

int main()
{
    printMessage();
    initVectors();
    initArrays();
    movieRatingsVector();
    return 0;
}

void printMessage()
{
    cout << "Hello, World!" << endl;
    cout << "This comes from return int: " << returnInt() << endl;
}

void initVectors()
{
    //Vector with chars
    vector<char> vowels {'a', 'b', 'c', 'd'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    //Vector with ints
    vector<int> test_scores {100,98,99};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " <<endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    addVectors(test_scores);
}

void addVectors(vector<int> test_scores)
{
    int score_to_add(0);
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\n For loop test scores: " << endl;
    for (int test_score : test_scores)
    {
        cout << test_score << endl;
    }

    cout << "\nThere are now " << test_scores.size() << " in the vector" << endl;

    //cout << "\nThis should cause an exception " << test_scores.at(10) << endl;
}

void initArrays()
{
    int arrayValues[]{1,2,3,4};
    cout << "\nThis is array value 2: " << arrayValues[3] << endl;
}

void movieRatingsVector()
{
    vector<vector<int>> movie_ratings
    {
            {1,2,3,4},
            {1,2,4,4},
            {1,3,4,5}
    };

    cout << "\nHere are the movie ratings from reviewer #1 using array syntax: " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie ratings from reviewer #1 using vector syntax: " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    cout << endl;
}

int returnInt(){
    return 3;
}

