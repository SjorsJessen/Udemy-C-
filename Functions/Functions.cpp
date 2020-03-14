#include <iostream>
#include <cmath> //Required for math calculations
#include <cstdlib> //Required for rand()
#include <ctime> //Required for time()

const double pi{3.14159};

void MathCalculations();
void RandomNumberCalculations();
void MathFunctionsExercise();

//Function prototype examples
void area_circle();
void volume_cylinder();

double calc_area_circle(double);
double calc_volume_cylinder(double radius, double height);

void array_to_functions();
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);


using namespace std;

int main()
{
    //MathCalculations();
    //RandomNumberCalculations();
    //MathFunctionsExercise();
    //area_circle();
    //volume_cylinder();
    array_to_functions();
    return 0;
}

void array_to_functions()
{
    int my_scores[] {100,98,90,86,84};

    print_array(my_scores, 5);
    set_array(my_scores, 5, 100); //Sets every value of the array to 100
    print_array(my_scores, 5);
    print_array(my_scores, 5);

    cout << endl;
}

void print_array(const int arr[], size_t size) //const
{
    for(size_t i{0}; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
    //arr[0] = 50000; //Bug, solve by setting array to const to avoid changes and make array read only
}

void set_array(int arr[], size_t size, int value) //Sets each element to value
{
    for(size_t i{0}; i < size; ++i)
        arr[i] = value;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    return calc_area_circle(radius) * height;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
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
