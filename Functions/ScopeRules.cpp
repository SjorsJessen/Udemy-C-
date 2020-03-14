#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

void scope_rules();

int num {300}; //Global variable - declared outside any class or function

void global_example()
{
    cout << "\nGlobal num is: " << num << " in global_example - start " << endl; //300
    num *= 2; //Will search outward for 'num' because it's not inside this function declaration
    cout << "\nGlobal num is: " << num << " in global_example - end " << endl; //600
}

void local_example(int x)
{
    int num {1000}; //Local to local example
    cout << "\nLocal num is: " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    //num1 in main is not within scope - so it ca
}

void static_local_example()
{
    static int num {5000}; //Local to static_local_example static - retains it value between calls (kinda acts like a global variable, only in a local scope)
    cout << "\nLocal static num is: " << num << " in static_local_example - start" << endl;
    num += 1000;
    cout << "\nLocal static num is: " << num << " in static_local_example - end" << endl;
}


//int main()
//{
//    scope_rules();
//    return 0;
//}

void scope_rules()
{
    int num {100}; //Local to main
    int num1 {500}; //Local to main

    cout << "Local num is: " << num << " in main" << endl;

    {   //Creates a new level of scope
        int num {200}; //Local to this inner block
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num 1 is : " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();

    cout << endl;
}
