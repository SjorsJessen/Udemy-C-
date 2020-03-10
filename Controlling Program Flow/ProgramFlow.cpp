//
// Created by Sjors Jessen on 08/03/2020.
//

#include <iostream>
#include <map>
#include <iomanip>
#include <vector>

using namespace std;

void FillDictionary();
void IfStatements();
void IfElseStatements();
void Grades();
void ShippingCalculator();
void SwitchStatement();
void EnumSwitchStatement();
void ConditionalOperator();
void ForLoop();
void RangeBasedForLoop();
void WhileLoop();
void DoWhileLoop();
void ContinueBreak();
void InfiniteLoops();

int main()
{
    //FillDictionary();
    //IfStatements();
    //IfElseStatements();
    //Grades();
    //ShippingCalculator();
    //SwitchStatement();
    //EnumSwitchStatement();
    //ConditionalOperator();
    //ForLoop();
    //RangeBasedForLoop();
    //WhileLoop();
    //DoWhileLoop();
    //ContinueBreak();
    InfiniteLoops();
    return 0;
}

void InfiniteLoops()
{
//    //Infinite For Loop case which is a programming mistake.
//    for(;;)
//        cout << "This will print forever" << endl;

//    //Infinite While Loop case which is a programming mistake.
//    while(true)
//        cout << "This will print forever" << endl;

//    //Infinite Do While Loop case which is a programming mistake.
//    do
//    {
//        cout << "This will print forever" << endl;
//    }while(true);

    //Proper Infinite Loop which user can break out of, wouldn't recommend, though
    while(true)
    {
        char again{};
        cout << "Do you want to loop again? (Y/N): ";
        cin >> again;

        if(again == 'N' || again == 'n')
            break;
    }

}

void ContinueBreak()
{
    vector<int> values {1, 2, -1, 3, -1, -99, 7, 8, 10};
    /*
     * Goes back to top after first -1 hit,
     * then prints 3,
     * then hits -1 again and goes back to top
     * and there it finally hit -99 and breaks the loop
    */
    for(auto value : values)
    {
        if(value == -99)
            break;
        else if(value == -1)
            continue;
        else
            cout << value << endl;
    }
    cout << "Hit -99, so I broke out of the loop" << endl;
}

void DoWhileLoop()
{
    char selection{};
    do
    {
        cout << "\n------------------------" << endl;
        cout << "1. Do this " << endl;
        cout << "2. Do that " << endl;
        cout << "3. Do something else " << endl;
        cout << "Q. To Quit. " << endl;
        cout << "\nEnter your selection: ";
        cin >> selection;

        switch(selection)
        {
            case '1': cout << "You pressed Do this"; break;
            case '2': cout << "You pressed Do that"; break;
            case '3': cout << "You pressed Something else"; break;
            case 'Q':
            case 'q':
                cout << "You've quit! Goodbye."; break;
            default: cout << "You failed to input a valid character, try again!"; break;
        }
    } while(selection != 'q' && selection != 'Q');
}

void WhileLoop()
{
//    int num{0};
//    cout << "Enter a positive integer - start the countdown: ";
//    cin >> num;
//
//    while(num > 0)
//    {
//        cout << num << endl;
//        --num;
//    }
//    cout << "Blastoff!" << endl;

//    int num{};
//    cout << "Enter a positive integer to count up to: ";
//    cin >> num;
//
//    int i{1};
//    while(num >= i)
//    {
//        cout << i << endl;
//        i++;
//    }
//
//    int number{};
//    cout << "Enter an integer less than 100: ";
//    cin >> number;
//
//    while(number >= 100)
//    {
//        cout << "Enter an integer less than 100: ";
//        cin >> number;
//    }
//
//    cout << "Thanks" << endl;


    bool done{false};
    int number{0};

    while(!done)
    {
        cout << "Enter an integer between 1 and 5";
        cin >> number;

        if(number <= 1 || number >= 5)
        {
            cout << "Out of range, try again" << endl;
        }
        else
        {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
}

void RangeBasedForLoop()
{
//    int scores[] {10,20,30};
//
//    for (auto score : scores)
//        cout << score << endl;

//    vector<double>temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temperature{};
//    double total{};
//
//    for(auto temperature : temperatures)
//        total += temperature;
//
//    if(!temperatures.empty())
//        average_temperature = total / temperatures.size();
//
//    cout << fixed << setprecision(1);
//    cout << "Average temperature is: " << average_temperature << endl;

//    //Possible to initialize the values which the loop will go through inside the loop itself
//    for(auto value : {1,2,3,4,5})
//        cout << "Value is: " << value << endl;


//    for(auto c : "This is a test")
//    {
//        if(c != ' ')//If is not a space, print
//            cout << c;
//    }

    for(auto c : "This is a test")
        if(c == ' ')
            cout << "\t"; //Replace space with a tab
        else
            cout << c;

    cout << endl;
}

void ForLoop()
{
//    for (int i{1}; i <= 10; i += 2)
//    {
//        cout << "i is: " << i << endl;
//    }

//    for (int i {10}; i > 0; --i)
//        cout << "i is: " << i << endl;
//    cout << "Blast off!" << endl;

//    for (int i{10}; i <= 100; i+=10)
//    {
//        if(i % 15 == 0)
//            cout << "i is: " << i << endl;
//    }

//    for (int i{1}, j{5}; i <= 5; ++i, ++j)
//    {
//        cout << i << " + " << j << " = " << i + j << endl;
//    }

//    for (int i{1}; i <= 100; ++i)
//    {
//        cout << i;
//
//        if(i % 10 == 0)
//            cout << endl;
//        else
//            cout << " ";
//    }

//    //This prints the same as the above for loop!
//    for (int i{1}; i <= 100; ++i)
//    {
//        cout << i << ((i % 10 == 0) ? "\n" : " ");
//    }

    vector<int> nums {10,20,30,40,50};
    //use 'unsigned' to avoid negative number integers and only use positives
    for (unsigned i{0}; i < nums.size(); ++i)
        cout << nums[i] << endl;

    cout << endl;
}

void ConditionalOperator()
{
    int num{};
    cout << "Enter an integer: ";
    cin >> num;

    //Traditional IfElse statement
    if(num % 2 == 0)
        cout << num << " is even " << endl;
    else
        cout << num << " is odd " << endl;

    //Conditional IfElse operator
    cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

    int num1{}, num2{};
    cout << "Enter two integers separated by a space: " << endl;
    cin >> num1 >> num2;

    if(num1 != num2)
    {
        cout << "Largest: " << ((num1 > num2) ? num1 : num2 ) << endl;
        cout << "Smallest: " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else
    {
        cout << "The numbers are the same" << endl;
    }
}

void EnumSwitchStatement()
{
    enum Direction{left, right, up, down};

    Direction heading_direction{left};

    switch(heading_direction)
    {
        case left:
            cout << "You're heading into the left direction!" << endl;
            break;
        case right:
            cout << "You're heading into the right direction!" << endl;
            break;
        case up:
            cout << "You're heading into the upward direction!" << endl;
            break;
        case down:
            cout << "You're heading into the downward direction!" << endl;
            break;
        default: cout << "Inserted Direction is not a valid enum value!";
    }
    cout << endl;
}

void SwitchStatement()
{
    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: " << endl;
    cin >> letter_grade;

    switch(letter_grade)
    {
        case 'A':
        case 'a':
            cout << "You need a a 90 or above!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "You need 80-89 for a B!" << endl;
            break;
        case 'C':
        case 'c':
            cout << "You need 70-79 for an average grade!" << endl;
            break;
        case 'D':
        case 'd':
            cout << "You should strive for a better grade. All you need is 60-69.!" << endl;
            break;
        case 'F':
        case 'f':
        {
            char confirm{}; //Needs curly brackets to create a variable in C++ switch statement.
            cout << "Are you sure (Y/N)?";
            cin >> confirm;

            if(confirm == 'Y' || confirm == 'y')
                cout << "Why would you settle for such a low grade. Go study!" << endl;
            else if(confirm == 'N' || confirm == 'n')
                cout << "Good to hear. Aim high!" << endl;
            else
                cout << "You didn't insert a Y/N!" << endl;

            break;
        }
        default: cout << "Insert a valid grade letter!";
    }
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


