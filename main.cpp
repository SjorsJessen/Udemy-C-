#include <iostream>
#include <vector>

void initVectors();

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    initVectors();

    return 0;
}

void initVectors() {
    vector<char> vectors {'a', 'b', 'c', 'd'};
    cout << "This is vector 0: " << vectors.at(1) << endl;
}

