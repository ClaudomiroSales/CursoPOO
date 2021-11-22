
#include "GradeBook.cpp"
#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
 
   GradeBook gradebook1( "Math" );
   GradeBook gradebook2( "Physicssfdsfdsfgsdfgsdfgsdfgdsfgsdfgsdfgsdfgsdfdsfgsdfgfsadgf" );
   
   
   gradebook1.displayMessage( );
   gradebook2.displayMessage( );

   cout << "Os cursos sao: " << gradebook1.getCourseName( ) << " e " << gradebook2.getCourseName( ) << '\n';
   
   
   return 0;
}