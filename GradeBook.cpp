#include "GradeBook.h"

#include <iostream>
using std::cout;

GradeBook::GradeBook( )
{
    courseName = "";
}

GradeBook::GradeBook( string name )
{
    setCourseName( name );
}

 void GradeBook::setCourseName( string name )
{
    if ( name.length( ) < maxSizeName )
        courseName = name;
    else   
        {
            courseName = name.substr( 0, maxSizeName );
            cout << "Nome alterado. Excedeu o valor maximo. \n";
        }
}

string GradeBook::getCourseName( )
{
    return courseName;
} 

void GradeBook::displayMessage( ) 
{
     cout << "Welcome to the Grade Book for course " << courseName << '\n';
}