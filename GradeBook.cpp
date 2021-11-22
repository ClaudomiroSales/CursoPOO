#include "GradeBook.h"

#include <iostream>
using std::cout;

GradeBook::GradeBook( )
:courseName(""), numAlunos( 0 ), MAXSIZENAME( 9 )
{  
}

GradeBook::GradeBook( string name, int numAlunos )
:MAXSIZENAME( 9 )
{
    setCourseName( name );
    setNumAlunos( numAlunos );
}

GradeBook::GradeBook( int numAlunos )
:courseName(""), MAXSIZENAME( 9 )
{
    setNumAlunos( numAlunos );
}

GradeBook::GradeBook( const GradeBook& other )
:MAXSIZENAME( other.MAXSIZENAME )
{
    this->courseName = other.courseName;
    this->numAlunos  = other.numAlunos;
}

/* GradeBook::GradeBook( const GradeBook& other )
:courseName( other.courseName ), numAlunos( other.numAlunos )
{
    
} */

 void GradeBook::setCourseName( string name )
{
    if ( name.length( ) <= MAXSIZENAME )
        courseName = name;
    else   
        {
            courseName = name.substr( 0, MAXSIZENAME );
            cout << "Nome alterado. Excedeu o valor maximo. \n";
        }
}

void GradeBook::setNumAlunos( int numAlunos )
{
    if ( numAlunos > 0 )
        this->numAlunos = numAlunos;
    else
        this->numAlunos = 0;
}

string GradeBook::getCourseName( )
{
    return courseName;
} 

void GradeBook::displayMessage( ) 
{
    if( courseName.size( ) > 0 )
        cout << "Welcome to the Grade Book for course " << courseName << '.';          
    else
        cout << "Welcome to the Grade Book. Curso sem nome.";

    cout << " A Turma tem " << numAlunos << " aluno.\n";  

}