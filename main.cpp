
#include "GradeBook.cpp"
#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
 
   cout << "Usando sobrecarga e parametros default.\n\n";

   GradeBook gradebook0;
   GradeBook gradebook1( "Math" );
   const GradeBook GRADEBOOK2( "Physicssfdsfdsfgsdfgsdfgsdfgdsfgsdfgsdfgsdfgsdfdsfgsdfgfsadgf" );
   GradeBook gradebook3( "Geography", 10 );
   GradeBook gradebook4( 20 );

   //cout << "\n\n";

   //Constructor de cópia
   const GradeBook GRADEBOOK5( GRADEBOOK2 );
   
   cout << "\nDuas versões do método displayMessage: const e não const\n";
   GRADEBOOK2.displayMessage( );
   GRADEBOOK5.displayMessage( );
   gradebook3.displayMessage( );//Objects não const podem usar métodos const

   //ERROR: tentando usar método não const
   //GRADEBOOK5.setNumAlunos( 10 );

   return 0;
}