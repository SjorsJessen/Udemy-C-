#include <iostream>
#include <cmath> //Required for math calculations
#include <cstdlib> //Required for rand()
#include <ctime> //Required for time)

void MathCalculations();

void RandomNumberCalculations();

using namespace std;

int main()
{
    //MathCalculations();
    RandomNumberCalculations();
    return 0;
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
