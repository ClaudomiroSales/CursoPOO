/*
* Multiple line
* comment
*/
//Single line comment
#include<iostream>
using std::cout;

#include "GradeBook.h"

//This is where the execution of program begins
int main()
{
   
   GradeBook gradebook;

   gradebook.displayMessage( );

   GradeBook g1;

   g1.displayMessage( );
   
   return 0;
}