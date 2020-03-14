#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n);
unsigned long long factorial(unsigned long long n);

int main()
{
//    cout << fibonacci(5) << endl;
//    cout << fibonacci(30) << endl;
//    cout << fibonacci(40) << endl;

    cout << factorial(3) << endl; //6
    cout << factorial(8) << endl; //40320
    cout << factorial(12) << endl; //479001600
    cout << factorial(20) << endl; //2432902008176640000
    return 0;
}

//Fibonacci
unsigned long long fibonacci(unsigned long long n)
{
    if(n <= 1)
        return n; //Base case
    return fibonacci(n - 1) + fibonacci(n - 2); //Recursion
}

//Factorial
unsigned long long factorial(unsigned long long n)
{
    if(n == 0)
        return 1; //Base case
    return n * factorial(n - 1); //Recursive Case
}