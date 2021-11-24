#include "SmartPhone.h"

#include <iostream>
using std::cout;

int SmartPhone::numPhones = 0;


const Data SmartPhone::RELEASEDATE = Data(25,9,2014);

SmartPhone::SmartPhone()
:pinCode(0), IDPHONE( 12345 ), dataAtual( )
{
	numPhones++;
	cout << "A quantidade de smartphones criados eh " << numPhones << '\n';
}

SmartPhone::SmartPhone(const SmartPhone &sp)
:pinCode(sp.pinCode), IDPHONE(sp.IDPHONE), dataAtual(sp.dataAtual)
{
	history = sp.history;
	cout << "Quantidade de paginas visisitadas " << history.size() << '\n';
	listHistory( );
	numPhones++;
	cout << "A quantidade de smartphones criados eh " << numPhones << '\n';
}


SmartPhone::SmartPhone(int IDPh, const Data &dataOut)
:IDPHONE(IDPh), dataAtual(dataOut)
{
	numPhones++;
	cout << "A quantidade de smartphones criados eh " << numPhones << '\n';
}

SmartPhone::~SmartPhone()
{

}

void SmartPhone::mostrarInfo( )
{
	cout << "A data de lancamento deste modelo eh: ";
	RELEASEDATE.print( );
	cout << '\n';
	cout << "O numero de smartphones vendidos eh: " << numPhones << '\n'; 
		 
}


void SmartPhone::updateHistory(const string &newPage)
{
	history.push_back( newPage );
}


void SmartPhone::listHistory( ) const
{
	cout << "As paginas visitas foram\n";
	for( unsigned int i = 0; i < history.size( ); i++ )
		cout << history[ i ] << '\n';
}

void SmartPhone::mostrarData( ) const
{
	cout << "A data atual eh: "; dataAtual.print( );	
	cout << '\n';
}