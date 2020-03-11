#include <iostream>

void CStyleString();

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

int main()
{
    //CStyleString();
    return 0;
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
