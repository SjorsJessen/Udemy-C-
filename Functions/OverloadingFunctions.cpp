#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Overloading functions
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void OverloadFunctions();

//int main()
//{
//    OverloadFunctions();
//    return 0;
//}

void OverloadFunctions()
{
    print(100); //int
    print('A'); //Character is always promoted to int should print 65 ASCII {'A
    print(123.5); //Double
    print(123.5f); //Float is promoted to double
    print("C-style string"); //C-Style string is converted to a C++ string

    string s{"C++ string"};
    print(s); //Print C++ strings

    print("C-style string", s); //First argument is converted to a C++ string

    vector<string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
}

void print(int num)
{
    cout << "Printing int: " << num << endl;
}

void print(double num)
{
    cout << "Printing double: " << num << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

void print(string s, string r)
{
    cout << "Printing string: " << s + " " + r << endl;
}

void print(vector<string> v)
{
    cout << "Printing vector of strings: ";
    for(auto s : v)
        cout << s + " ";
    cout << endl;
}
