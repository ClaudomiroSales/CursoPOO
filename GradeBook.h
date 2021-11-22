#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>
using std::string;

class GradeBook
{
public:

    GradeBook ( );    
    GradeBook( string , int = 0 );
    GradeBook( int );
    
    void setCourseName( string );
    
    void setNumAlunos( int );

    string getCourseName( );

    void displayMessage( );

private:

    string courseName;

    int numAlunos;

    const int MAXSIZENAME = 9;

};

#endif // GRADEBOOK_H