#include <iostream>
#include "Uzytkownicy.h"

int Uzytkownicy::counter=0;

Uzytkownicy::Uzytkownicy(string n)
{
	nazwa_uz=n;
	counter++;
}

Uzytkownicy::~Uzytkownicy()
{
	counter--;
}

void Uzytkownicy::Dodaj_uz()
{
	cout<<"Podaj nazwe uzytkownika: "<<endl;
	cin>>nazwa_uz;
	cout<<"Dane zostaly wprowadzone, wcisnij klawisz ENTER"<<endl;
	getchar();
}
	

