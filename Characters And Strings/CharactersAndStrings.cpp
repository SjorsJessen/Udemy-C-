#include <iostream>
#include <string>

void CStyleString();
void CPPStrings();

using namespace std;

/*
 * TESTING CHARACTERS
 * --------------------------------------------------
 * isalpha(c) | True if c is a letter
 * isalnum(c) | True if c is a letter or digit
 * isdigit(c) | True if c is a digit
 * islower(c) | True if c is a lowercase letter
 * isprint(c) | True if c is a printable character
 * ispunct(c) | True if c is a punctuation character
 * isupper(c) | True if c is an uppercase letter
 * isspace(c) | True if c is whitespace
 * --------------------------------------------------
 *
 *
 * CONVERTING CHARACTERS
 * --------------------------------------------------
 * tolower(c) | returns lowercase of c
 * toupper(c) | returns uppercase of c
 * --------------------------------------------------
 */

//int main()
//{
//    //CStyleString();
//    CPPStrings();
//    return 0;
//}

void CPPStrings()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1,0,3}; //App
    string s7 {10,'X'}; //XXXXXXXXXX

    cout << s0 << endl; //No garbage in relation to what would happen when using C-string without initialization
    cout << s0.length() << endl; //Empty string (0)
    cout << s5 << endl;

//    //Assignment
//    cout << "\nAssignment" << "\n===========================" << endl;
//
//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 << endl; //Watermelon
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl; //Watermelon
//
//    s3 = "Frank";
//    cout << "s3 is now: " << s3 << endl; //Frank
//
//    s3[0] = 'C'; //Crank
//    cout << "s3 changed first letter to 'C: " << s3 << endl; //Crank
//    s3.at(0) = 'P';
//    cout << "s3 changed first letter to 'P: " << s3 << endl; //Prank
//
//
//    //Error
////    s3 = "nice " + " cold " + s5 + " juice"; Needs variable after +
//
//    //For loop
//    cout << "\nFor loop " << "\n===========================" << endl;
//    s1 = "Apple";
//    for(size_t i {0}; i < s1.length(); ++i)
//        cout << s1.at(i); //or s1[0] //Apple
//    cout << endl;
//
//    //Range-based For loop
//    for(char c : s1)
//        cout << c; //Apple
//    cout << endl;
//
//    //Substring
//    cout << "\nSubstring" << "\n===========================" << endl;
//    s1 = "This is a test";
//
//    cout << s1.substr(0,4) << endl; //This
//    cout << s1.substr(5,2) << endl; //is
//    cout << s1.substr(10,4) << endl; //test
//
//    //Erase
//    cout << "\nErase" << "\n===========================" << endl;
//    s1 = "This is a test";
//    s1.erase(0,5); //Erases 'This' from s1 results in: "is a test"
//    cout << "s1 is now: " << s1 << endl; //is a test

    //getline
    cout << "\ngetline" << "\n===========================" << endl;

    string full_name{};

    cout << "Enter your full name: " << endl;
    getline(cin, full_name);

    cout << "Your full name is: " << full_name << endl;

    //Find
    cout << "\nFind" << "\n===========================" << endl;

    s1 = "The secret word is Boo";
    string word{};

    cout << "Enter the word to find: "; //'position' searches for the input and where it is located
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word << " not found" << endl;

    cout << endl;
}

void CStyleString()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

//    cout << "Enter your first name: ";
//    cin >> first_name;
//
//    cout << "Enter your last name: ";
//    cin >> last_name;
//    cout << "====================================" << endl;
//
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//
//    strcpy(full_name, first_name); //copy first_name to full_name
//    strcat(full_name, " "); //concatenate full_name and a space
//    strcat(full_name, last_name); //concatenate last_name to full_name
//
//    cout << "Your full name is " << full_name << endl;
//
//    cout << "==================================" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;
//    cout << "your full name is " << full_name << endl;

    cout << "Enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout <<"------------------------------------" << endl;
    strcpy(temp, full_name);

    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same!" << endl;
    else
        cout << temp << " and " << full_name << " are different!" << endl;

    cout << "-----------------------------------" << endl;

    for(size_t i{0}; i < strlen(full_name); ++i)
    {
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]); //Converts the characters to uppercase
    }
    cout << "Your full name is " << full_name << endl;

    cout << "-----------------------------------" << endl;
    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are the same!" << endl;
    else
        cout << temp << " and " << full_name << " are different!" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name <<": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp <<": " << strcmp(full_name, temp) << endl;

}
