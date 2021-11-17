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
   
   GradeBook gradebook;
   string nameOfCourse;

   cout << "Digite o nome do curso: ";
   getline( cin, nameOfCourse );
   gradebook.setCourseName( nameOfCourse );


   gradebook.displayMessage( );

   
   return 0;
}