#ifndef _STUDENT_H_
#define _STUDENT_H_

using std::string;

class student
{
private:
        string firstName;
        string lastName;
                

public:
       void setName(string first, string last);
       void fullName();
};





#endif


