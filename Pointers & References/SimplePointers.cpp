#include <iostream>
#include <vector>
#include <string>

void store_address_in_pointer();

using namespace std;

int main()
{
    store_address_in_pointer();

    return 0;
}

void store_address_in_pointer()
{
    int num {10};
    cout << "Value of num is: " << num << endl; //Initialized value
    cout << "sizeof num is: " << sizeof(num) << endl; //Byte size
    cout << "Address of num is: " << &num << endl; //Address in memory

    int *p;
    cout << "\nValue of p is: " << p << endl;
    cout << "Address of p is: " << &p << endl;
    cout << "sizeof p is: " << sizeof(p) << endl;

    p = nullptr;
    cout << "\nValue of p is: " << p << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};

    cout << "\nsizeof p1 is " << sizeof(p1) << endl;
    cout << "sizeof p2 is " << sizeof(p2) << endl;
    cout << "sizeof p3 is " << sizeof(p3) << endl;
    cout << "sizeof p4 is " << sizeof(p4) << endl;
    cout << "sizeof p5 is " << sizeof(p5) << endl;

    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout << "Value of score is: " << score << endl;
    cout << "Address of score is: " << &score << endl;

    //Score ptr has same value as score address because it is pointing to it!
    cout << "Value of score_ptr is: " << score_ptr << endl;

    //score_ptr = &high_temp; //Pointer assigment not possible due to different datatypes

    cout << endl;
}
