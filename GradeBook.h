#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
using std::cout;

#include <string>
using std::string;

class GradeBook
{
public:
    
    GradeBook( string name )
    {
        setCourseName( name );
    }
    //~GradeBook();

    void setCourseName( string name )
    {
        courseName = name;
    }

    string getCourseName(  )
    {
        return courseName;
    }

    void displayMessage( ) const
    {
        cout << "Welcome to the Grade Book for course " << courseName << '\n';
    }

private:

    string courseName;

};

#endif // GRADEBOOK_H