
#include "GradeBook.cpp"
#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
 
   cout << "Usando sobrecarga e parametros default.\n\n";

   GradeBook gradebook0;
   GradeBook gradebook1( "Math" );
   GradeBook gradebook2( "Physicssfdsfdsfgsdfgsdfgsdfgdsfgsdfgsdfgsdfgsdfdsfgsdfgfsadgf" );
   GradeBook gradebook3( "Geography", 10 );
   GradeBook gradebook4( 20 );

   cout << "\n\n";

   
   
   gradebook0.displayMessage( );
   gradebook1.displayMessage( );
   gradebook2.displayMessage( );
   gradebook3.displayMessage( );
   gradebook4.displayMessage( );
   
   cout << "Os cursos sao: " << gradebook1.getCourseName( ) << " e " << gradebook2.getCourseName( ) << '\n';
   
   
   return 0;
}