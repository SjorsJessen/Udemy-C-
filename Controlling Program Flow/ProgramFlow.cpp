//
// Created by Sjors Jessen on 08/03/2020.
//

#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

void FillDictionary();
void IfStatements();
void IfElseStatements();
void Grades();
void ShippingCalculator();

int main()
{
    //FillDictionary();
    //IfStatements();
    //IfElseStatements();
    //Grades();
    ShippingCalculator();
    return 0;
}

void ShippingCalculator()
{
    int length{}, width{}, height{};

    double base_cost{2.50};

    const int tier1_threshold{100}; //volume
    const int tier2_threshold{500}; //volume

    int max_dimension_length{10}; //inches

    double tier1_surcharge{0.10}; //10% extra
    double tier2_surcharge{0.25}; //25% extra

    //All dimensions must be 10 inches or less!

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "Sorry package rejected - dimensions exceeded" << endl;
    }
    else
    {
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;

        if(package_volume > tier2_threshold)
        {
            package_cost += package_cost * tier2_surcharge;
            cout << "Adding tier2 surcharge" << endl;
        }
        else if (package_volume > tier1_threshold)
        {
            package_cost += package_cost * tier1_surcharge;
            cout << "Adding tier1 surcharge" << endl;
        }

        cout << fixed << setprecision(2); //Prints dollars nicely (need to #include <iomanip>)
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;
    }
    cout << endl;
}

void Grades()
{
    int score{};
    cout << "Enter your score on the exam (0-100): ";
    cin >> score;

    char letter_grade{};

    if(score >= 0 && score <= 100)
    {
        if(score > 90)
            letter_grade = 'A';
        else if(score > 80)
            letter_grade = 'B';
        else if(score > 70)
            letter_grade = 'C';
        else if(score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';

        cout << "Your grade is: " << letter_grade << endl;

        if(letter_grade == 'F')
            cout << "You failed the test!" << endl;
        else
            cout << "You passed the test. Congrats!" << endl;
    }
    else
    {
        cout << "Sorry, " << score << " is not in range!" << endl;
    }
}

void IfElseStatements()
{
    int num{};
    const int target{10};

    cout << "Enter a number and I'll compare it to: " << target << ": ";
    cin >> num;

    if(num >= target)
    {
        cout << "\n====================================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int difference{num - target};
        cout << num << " is " << difference << " greater than " << target << endl;
    }
    else
    {
        cout << "\n====================================================" << endl;
        cout << num << " is less than " << target << endl;
        int difference{target - num};
        cout << num << " is " << difference << " less than " << target << endl;
    }
    cout << endl;
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


