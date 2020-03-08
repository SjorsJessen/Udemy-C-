//
// Created by Sjors Jessen on 08/03/2020.
//

#include <iostream>
#include <map>

using namespace std;

void FillDictionary();
void IfStatements();

int main()
{
    //FillDictionary();
    IfStatements();
    return 0;
}

void IfStatements()
{
    int num{};
    const int min{10};
    const int max{100};

    cout << "Enter a number between " << min << " and " << max << endl;
    cin >> num;

    if(num >= min)
    {
        cout << "\n========================= If statement 1 =============================" << endl;
        cout << num << " is greater than or equal to " << min << endl;

        int difference {num - min};
        cout << num << " is " << difference << " greater than " << min << endl;
    }

    if(num <= max)
    {
        cout << "\n========================= If statement 2 =============================" << endl;
        cout << num << " is less than or equal to " << max << endl;

        int difference{max - num};
        cout << num << " is " << difference << " less than " << max << endl;
    }

    if(num >= min && num <= max)
    {
        cout << "\n========================= If statement 3 =============================" << endl;
        cout << num << " is in range " << endl;
        cout << "This means statement 1 and 2 must also display!" << endl;
    }

    if(num == min || num == max)
    {
        cout << "\n========================= If statement 4 =============================" << endl;
        cout << num << " is right on the boundary " << endl;
        cout << "This means that all 4 statements display!" << endl;
    }
}

void FillDictionary()
{
    //Maps are practically what dictionaries are in C#!
    //Remember to include the <map> library!

    //Todo: Move to a advanced segment later on, this was for testing only


    map<int, string> stringLookUpTable;
    map<int, string> passwordHashForUser;

    map<int, string> userNameForUserID;

    userNameForUserID[0] = string("John Doe");
    cout << "User #0 is named: " << userNameForUserID[0] << endl;

    map<int, string> values;
    values[0] = "Test 1";
    values[1] = "Test 2";

    //Expanded written for loop to get map values
    for(map<int, string>::value_type& value : values)
    {
        cout << value.first << ", " << value.second << endl;
    }

    //Simply written for loop to get map values
    for(auto& value : values)
    {
        cout << value.first << ", " << value.second << endl;
    }

    cout << endl;
}


