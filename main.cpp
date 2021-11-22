
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

   //cout << "\n\n";

   //Constructor de cópia
   GradeBook gradebook5( gradebook2 );
   
   cout << "Usando o constructor de copia: GradeBook gradebook5( gradebook2 ); \n";
   cout << "O gradebook5 eh copia do grandebook2.\n";
   gradebook2.displayMessage( );
   gradebook5.displayMessage( );

   return 0;
}