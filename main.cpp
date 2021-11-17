/*
* Multiple line
* comment
*/
//Single line comment
#include<iostream>
using std::cout;
using std::cin;
using std::getline;

#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
   
   GradeBook gradebook1( "Math" );
   GradeBook gradebook2( "Physics" );
   
   
   gradebook1.displayMessage( );
   gradebook2.displayMessage( );

   cout << "Os cursos sao: " << gradebook1.getCourseName( ) << " e " << gradebook2.getCourseName( ) << '\n';
   
   
   return 0;
}