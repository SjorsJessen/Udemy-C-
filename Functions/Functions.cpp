#include <iostream>
#include <cmath> //Required for math calculations
#include <cstdlib> //Required for rand()
#include <ctime> //Required for time)

void MathCalculations();
void RandomNumberCalculations();
void MathFunctionsExercise();

using namespace std;

int main()
{
    //MathCalculations();
    //RandomNumberCalculations();
    //MathFunctionsExercise();
    return 0;
}

void MathFunctionsExercise()
{
    double bill_total {102.78};
    size_t number_of_guests {5};

    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----

    double individual_bill = bill_total / number_of_guests;
    size_t individual_bill_1 = floor(individual_bill);
    size_t individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill * 100) / 100;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n"
    << "The individual bill at location 2 will be $" << individual_bill_2 << "\n"
    << "The individual bill at location 3 will be $" << individual_bill_3;
}

void RandomNumberCalculations()
{
    int random_number{};
    size_t count{10}; //number of random numbers to generate
    int min{1}; //lower_bound (inclusive)
    int max{6}; //upper_bound (inclusive)

    //Seed the random number generator
    //If you don't seed the generator you will get the same sequence random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr)); //Seeds the random number generator with time

    for (size_t i {1}; i <= count; ++i)
    {
        random_number = rand() % max + min; //Generate a random number (min, max)
        cout << random_number << endl;
    }

    cout << endl;
}

void MathCalculations()
{
    double num {};

    cout << "Enter a number (double): ";
    cin >> num;

    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
    cout << "The cubed root of " << num << " is: " << cbrt(num) << endl;

    cout << "The sine of " << num << " is: " << sin(num) << endl;
    cout << "The cosine of " << num << " is: " << cos(num) << endl;

    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
    cout << "The floor of " << num << " is: " << floor(num) << endl;
    cout << "The round of " << num << " is: " << round(num) << endl;

    double power{};
    cout << "\nEnter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is " << pow(num, power) << endl;

    cout << endl;
}