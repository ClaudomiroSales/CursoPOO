#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( double );
    
    //void setCourseName( string );

    //string getCourseName( );

    //void displayMessage( );

private:

    double courseName;

};

#endif // GRADEBOOK_H