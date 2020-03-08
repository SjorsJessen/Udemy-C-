#include <iostream>

using namespace std;

int AssignmentArithmeticOperatorExercise(int number);

void AssignValue();
void ArithmeticOperator();
void AssignmentOperatorExercise();
void EurToDollarConverter();
void IncrementAndDecrement();
void MixedExpressionsAndConversions();
void TestingForEquality();
void RelationalOperators();
void LogicalOperators();

int main()
{
    //AssignValue();
    //ArithmeticOperator();
    //EurToDollarConverter();
    //AssignmentOperatorExercise();
    //AssignmentArithmeticOperatorExercise(10);
    //IncrementAndDecrement();
    //MixedExpressionsAndConversions();
    //TestingForEquality();
    //RelationalOperators();
    LogicalOperators();

    return 0;
}

void LogicalOperators()
{
    int num{};
    const int lower{10};
    const int upper{20};

    cout << boolalpha;

//    //Determine if an entered integer is between two other integers
//    //assume lower < upper
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//
//    bool within_bounds{false};
//
//    within_bounds = {num > lower && num < upper};
//    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

//    //Determine if an entered integer is outside two other integers
//    //assume lower < upper
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//
//    bool outside_bounds{false};
//
//    outside_bounds = {num < lower || num > upper};
//    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;

//    //Determine if an entered integer is exactly on the boundary
//    //assume lower < upper
//    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//
//    bool on_bounds{false};
//    on_bounds = {num == lower || num == upper};
//    cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;

    //Determine is you need to wear a coat based on temperature and wind speed
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};

    const double temperature_for_coat{45}; //temperature below this value requires a coat
    const int wind_speed_for_coat{25}; //wind over this value requires a coat

    //Requires a coat if either wind is too high or temperature is too low
    cout << "\nEnter the current temperature in {F}: ";
    cin >> temperature;
    cout << "Enter wind speed in {mph}: ";
    cin >> wind_speed;

    wear_coat = {temperature < temperature_for_coat || wind_speed > wind_speed_for_coat};
    cout << "Do you need to wear a coat using OR: " << wear_coat << endl;

    //Requires a coat if BOTH the wind speed is too high AND temperature is too low
    wear_coat = {temperature < temperature_for_coat && wind_speed > wind_speed_for_coat};
    cout << "Do you need to wear a coat using AND: " << wear_coat << endl;

    cout << endl;
}

void RelationalOperators()
{
    int num1{}, num2{};

    cout << boolalpha;
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;

//    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
}

void TestingForEquality()
{
    bool equal_result{false};
    bool not_equal_result{false};

    int num1{}, num2{};
    double double1{}, double2{};

    cout << boolalpha; //Converts 1 and 0 of booleans to true or false

//    cout << "Enter two integers separated by space: ";
//    cin >> num1 >> num2;
//    equal_result = {num1 == num2};
//    not_equal_result = {num1 != num2};
//    cout << "Comparision result {equals}: " << equal_result << endl;
//    cout << "Comparision result {not equals}: " << not_equal_result << endl;

    cout << "Enter an integer and a double separated by space: ";
    cin >> num1 >> double1; //Due to mixed expressions the int will be converted to a double and then the comparision happens
    equal_result = {num1 == double1};
    not_equal_result = {num1 != double1};
    cout << "Comparision result {equals}: " << equal_result << endl;
    cout << "Comparision result {not equals}: " << not_equal_result << endl;
}

void MixedExpressionsAndConversions()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;
    double average{0.0};

    average = static_cast<double>(total) / count; //Total will be converted to double
    //average = (double)total / count; //Old C++ conversion
    //Static Cast is better to use because it also checks if the operand can be converted to a double!

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    cout << endl;
}

void EurToDollarConverter()
{
    const double usd_per_eur{1.19};
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros{0.0};
    double dollars{0.0};

    cin >> euros;
    dollars = euros * usd_per_eur;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;
}

void AssignmentOperatorExercise()
{
    int num1{13};
    int num2{0};

    num1 = 5;
    num2 = num1;

    cout << "The value of num1 is: " << num1 << " & num2 is: " << num2 << endl;
}

void ArithmeticOperator()
{
    int num1{200};
    int num2{100};

    //cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result{0};

    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num1 << " / " << num2 << " = " << result << endl; //0.5 becomes 0 due to being integers

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num1 % num2; //Calculates and outputs the remainder of the calculation
    cout << num1 << " % " << num2 << " = " << result << endl;

    num1 = 10;
    num2 = 3;

    result = num1 % num2; //remainder is 1
    cout << num1 << " % " << num2 << " = " << result << endl;

    result = num1 * + num2;

    cout << 5/10 << endl;
    cout << 5.0/10.0 << endl;

    cout << endl;
}

void AssignValue()
{
    int num1{10};
    int num2{20};

    //num1 = num2 = 1000; //Assigns right to left. Doesn't work when using constants or different data types.
    //100 = num1; Doesn't work because 100 is a literal.

    cout << "Num1 is " << num1 << endl;
    cout << "Num2 is " << num2 << endl;
}

void IncrementAndDecrement()
{
    int counter{10};
    int result{0};

//    //Example 1
//    cout << "Counter: " << counter << endl;
//
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//
//    counter++;
//    cout << "Counter: " << counter << endl;
//
//    ++counter;
//    cout << "Counter: " << counter << endl;

//    //Example 2 Pre-Increment assignment
//    cout << "Counter: " << counter << endl;
//
//    result = ++counter;
//    cout << "Pre Increment Counter: " << counter << endl;
//    cout << "Pre Increment Result: " << result << endl;
//
//
//    //Example 3 Post-Increment assignment
//    cout << "Counter: " << counter << endl;
//
//    result = counter++;
//    cout << "Post Increment Counter: " << counter << endl;
//    cout << "Post Increment Result: " << result << endl;

//    //Example 4
//    cout << "Counter: " << counter << endl;
//
//    result = ++counter + 10;
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

    //Example 5
    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;
}

int AssignmentArithmeticOperatorExercise(int number)
{
    int original_number{number};

    number = number * 2;
    cout << "Current value of number is: " <<  number << endl;

    number = number + 9;
    cout << "Current value of number is: " <<  number << endl;

    number = number - 3;
    cout << "Current value of number is: " <<  number << endl;

    number = number / 2;
    cout << "Current value of number is: " <<  number << endl;

    number = number - original_number;
    cout << "Current value of number is: " <<  number << endl;

    number = number % 3;
    cout << "Current value after modulo operation is: " <<  number << endl;

    cout << "End result of number is: " <<  number << endl;
    return number;
}