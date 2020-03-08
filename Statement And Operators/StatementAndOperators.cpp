#include <iostream>

using namespace std;

void AssignValue();
void ArithmeticOperator();
void AssignmentOperatorExercise();
void EurToDollarConverter();
void IncrementAndDecrement();
void MixedExpressionsAndConversions();
int AssignmentArithmeticOperatorExercise(int number);

int main()
{
    //AssignValue();
    //ArithmeticOperator();
    //EurToDollarConverter();
    //AssignmentOperatorExercise();
    //AssignmentArithmeticOperatorExercise(10);
    //IncrementAndDecrement();
    MixedExpressionsAndConversions();
    return 0;
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