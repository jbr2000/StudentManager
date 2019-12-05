#include "student.h"
#include <string>
#include <iostream>
using std::string;
using std::cin;
void student::setName(string first, string last)
{
        firstName=first;
        lastName=last;
}

string student::fullName()
{
        string name;
        name = firstName;
        name.append(" ");
        name.append(lastName);
        return name;
}
        
