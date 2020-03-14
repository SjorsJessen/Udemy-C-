#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void pass_vector(vector<string> v);

void function_parameters();

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear(); //Deletes all vector elements
}

void print_vector(vector<string> v)
{
    for(auto value : v)
        cout << value << " ";
    cout << endl;
}

int main()
{
    function_parameters();

    cout << endl;
    return 0;
}

void function_parameters()
{
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "another num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another num after calling pass_by_value1: " << another_num << endl;

    string name{"Frank"};
    cout << "\nName before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "\nName after calling pass_by_value2: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);

    cout << "\nstooges after calling pass_by_value3: ";
    print_vector(stooges);
}


