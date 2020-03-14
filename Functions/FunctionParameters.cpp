#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void pass_vector(vector<string> v);

//Function Parameters
void function_parameters();
void pass_by_value1(int num)
{
    num = 1000;
}
void pass_by_value2(string s)
{
    s = "Changed";
}
void pass_by_value3(vector<string> v)
{
    v.clear(); //Deletes all vector elements
}
//void print_vector(vector<string> v)
//{
//    for(auto value : v)
//        cout << value << " ";
//    cout << endl;
//}

//Default Argument Values
void default_argument_values();
void greetings(string name, string prefix = "Mr.", string suffix = "");
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

//Pass By Reference
void pass_by_reference();
void pass_by_reference1(int &num);
void pass_by_reference2(string &name);
void pass_by_reference3(vector<string> &v);
void print_vector(const vector<string> &v); //Should be const due to avoiding changes when printing strings

//int main()
//{
//    //function_parameters();
//    //default_argument_values();
//    pass_by_reference();
//    cout << endl;
//    return 0;
//}

void pass_by_reference()
{
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_reference1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "another_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_reference1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name {"Glenn"};
    cout << "name before calling pass_by_ref2: " << name << endl;
    pass_by_reference2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    vector<string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_reference3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    cout << endl;
}

void default_argument_values()
{
    double cost{0};
    cost = calc_cost(100.0,0.08,4.25); //Will use no default arguments

    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(100.0, 0.08); //Will use default shipping. 100 + 8 + 4.25
    cout << "Cost is: " << cost << endl;

    cost = calc_cost(200.0); //Will use default tax and shipping. 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl;

    cost = calc_cost();
    cout << "Cost is: " << cost << endl; //100 + 6 + 3.50

    greetings("Glenn Jones", "Dr.", "M.D");
    greetings("James Rogers", "Professor", "Ph.D.");
    greetings("Frank Miller", "Dr.");
    greetings("William Smith");
    greetings("Mary Howard", "Mrs.", "Ph.D.");
}

//void function_parameters()
//{
//    int num{10};
//    int another_num{20};
//
//    cout << "num before calling pass_by_value1: " << num << endl;
//    pass_by_value1(num);
//    cout << "num after calling pass_by_value1: " << num << endl;
//
//    cout << "another num before calling pass_by_value1: " << another_num << endl;
//    pass_by_value1(another_num);
//    cout << "another num after calling pass_by_value1: " << another_num << endl;
//
//    string name{"Frank"};
//    cout << "\nName before calling pass_by_value2: " << name << endl;
//    pass_by_value2(name);
//    cout << "\nName after calling pass_by_value2: " << name << endl;
//
//    vector<string> stooges{"Larry", "Moe", "Curly"};
//    cout << "\nstooges before calling pass_by_value3: ";
//    print_vector(stooges);
//    pass_by_value3(stooges);
//
//    cout << "\nstooges after calling pass_by_value3: ";
//    print_vector(stooges);
//}

void greetings(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " + name + " " + suffix << endl;
}

void pass_by_reference1(int &num)
{
    num = 1000;
}

void pass_by_reference2(string &name)
{
    name = "Changed";
}

void pass_by_reference3(vector<string> &v)
{
    v.clear();
}

void print_vector(const vector<string> &v)
{
    for(auto s: v)
        cout << s << " ";
    cout << endl;
}

double calc_cost(double base_cost, double tax_rate, double shipping)
{
    return base_cost += (base_cost * tax_rate) + shipping;
}


