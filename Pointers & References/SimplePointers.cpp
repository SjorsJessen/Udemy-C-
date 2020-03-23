#include <iostream>
#include <vector>
#include <string>

void store_address_in_pointer();
void dereferencing_pointer();
void dynamic_memory_allocation();
void relationship_between_pointers_and_arrays();
void pointer_arithmetic();

void passing_pointers_to_functions();

using namespace std;

int main()
{
    //store_address_in_pointer();
    //dereferencing_pointer();
    //dynamic_memory_allocation();
    //relationship_between_pointers_and_arrays();
    //pointer_arithmetic();
    passing_pointers_to_functions();
    cout << endl;

    return 0;
}

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void swap(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v)
{
    //(*v).at(0) = "Funny"; //Not possible due to const vector<string>
    for (auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
    //v = nullptr; //Not possible due to const 'v'
}
void passing_pointers_to_functions()
{
//    //Double Data
//    int value{10};
//    int *int_ptr{nullptr};
//
//    cout << "Value: " << value << endl;
//    double_data(&value);
//    cout << "Value: " << value << endl;
//
//    cout << "==============================" << endl;
//    int_ptr = &value;
//    double_data(int_ptr);
//    cout << "Value: " << value << endl;

//    //Swap
//    int x{100}, y{200};
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;
//
//    swap(&x,&y);
//    cout << "\nx: " << x << endl;
//    cout << "y: " << y << endl;

    //Display
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);
    cout << endl;
}

void pointer_arithmetic()
{
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while(*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout << *score_ptr++ << endl; //Will generate same outcome as while loop above

    cout << "\n-------------------------" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl; //false
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl; //true

    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; //true
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl; //true

    p3 = &s3; //Point to James
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl; //false

    cout << "\n----------------------------" << endl;
    char name[]{"Frank"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
    cout << endl;
}

void relationship_between_pointers_and_arrays()
{
    int scores[]{100,95,83};

    cout << "Value of scores " << scores << endl;

    int *score_ptr{scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArray Subscript Notation-----------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer Subscript Notation-----------------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset Notation-----------------------------" << endl;
    cout << *(score_ptr) << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset Notation-----------------------------" << endl;
    cout << *(scores) << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
}

void dynamic_memory_allocation()
{
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl; //Will show its memory location in the Heap
    delete int_ptr; //Deletes pointer and frees op the storage

    size_t size{0};
    double *temp_ptr{nullptr};

    cout << "How many temps? ";
    cin >> size;

    temp_ptr = new double[size]; //Create memory space in the heap for 'size' amount of doubles
    cout << temp_ptr << endl; //Displays memory location of the first double of 'size'
    delete [] temp_ptr; //Syntax to remove array pointer from storage

//    while(true) //Never do this! Will create a infinte loop of memory leaks resulting in crash!
//        temp_ptr = new double[size];
    cout << endl;
}

void dereferencing_pointer()
{
    int score{100};
    int *score_ptr{&score};

    cout << *score_ptr << endl; //100

    *score_ptr = 200;

    cout << *score_ptr << endl; //200
    cout << score << endl; //200

    cout << "\n------------------------------" << endl;
    double high_temp{100.7};
    double low_temp{37.4};
    double *temp_ptr{&high_temp};

    cout << *temp_ptr << endl; //100.7
    temp_ptr = &low_temp;
    cout << *temp_ptr << endl; //37.4


    cout << "\n------------------------------" << endl;
    string name{"Frank"};
    string *string_ptr{&name};

    cout << *string_ptr << endl; //Frank
    name = "James";
    cout << *string_ptr << endl; //James


    cout << "\n------------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr {&stooges};

    //'dot' (.) has higher priority than the referencing symbol (*) that's why we have to use parentheses
    cout << "First stooge " << (*vector_ptr).at(0) << endl; //Larry

    cout << "Stooges: ";
    for(auto stooge : *vector_ptr)
        cout << stooge << " ";
    cout << endl;
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
