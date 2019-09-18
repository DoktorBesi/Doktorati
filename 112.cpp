#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
	int a;
	cout<<*Upisi cijeli broj razlicit od 0: ";
	cin>>a;
	if (a<0)
	{
		cout<<"Broj "<<a<<" jedan je negativan. \
		Njegova apsolutna vrijednost je "<<-a<<endl;
		
	}
	else
	{
		cout<<"Broj"<<a<<" je pozitivan. \
		Njegova apsolutna vrijednost je "<<a<<endl;
	}

