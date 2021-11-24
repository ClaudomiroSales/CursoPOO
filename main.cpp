/*
* Multiple line
* comment
*/
#include<iostream>
using std::cout;

#include "SmartPhone.h"
#include "SmartPhone.cpp"
#include "Data.h"
#include "Data.cpp"


int main()
{

   SmartPhone sp1( 132323, Data(30,9,2014) );

   SmartPhone::mostrarInfo( );
   sp1.mostrarData( );

   
   return 0;
}