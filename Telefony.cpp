#include <iostream>
#include "Telefony.h"


using namespace std;




short Telefony::i=0;


Telefony::Telefony(string ma, string mo, string r, string k, string p)
{
    marka=ma;
    model=mo;
    rok=r;
    kolor=k;
    pojemnosc=p;
}

Telefony::~Telefony()
{
}



void Telefony::Dodaj()
{

    getchar();

  cout <<"Podaj marke telefonu: "<<endl; //Przypisanie wartosci w obiekcie telefon
  getline(cin,marka);

  cout <<"Podaj model telefonu: "<<endl;
  getline(cin,model);

  cout <<"Podaj rok wyprodukowania telefonu: "<<endl;
  getline(cin,rok);

  cout <<"Podaj kolor telefonu: "<<endl;
  getline(cin,kolor);

  cout <<"Podaj pojemnosc telefonu (w GB): "<<endl;
  getline(cin,pojemnosc);

  i++;

  cout <<" Wcisnij ENTER ";
  getchar();
  system("clear");
}
void Telefony::Zobacz()
{
  if ( i != 0)                             //Musi byc conajmniej 1 element do wypisania
  {
    for (short s = 0; s < i; s++)   //s jest indeksem umozliwiajacym wypisywanie kolejnych elementow. Wypisuje ich od 0 do i.
    {
      cout <<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
      cout <<"x     Telefon nr "<<s+1<<": "<<endl;
      cout <<"x     Marka: "<<marka<<endl;
      cout <<"x     Model: "<<model<<endl;
      cout <<"x     Rok Produkcji: "<<rok<<endl;
      cout <<"x     Kolor: "<<kolor<<endl;
      cout <<"x     Pojemnosc: "<<pojemnosc<<endl;
      cout <<"x";
      cout <<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;


    }
  }
  else
  cout <<"Nie ma zadnego telefonu w bazie!";

  cout <<"Nacisnij ENTER";

  getchar();
}

void Telefony::Zapisz()
{
  ofstream plik("telefony.txt", ios::out | ios::trunc);  //Program zapisuje baze do pliku "telefony.txt"

  plik <<i<<"\n";

  for (short s = 0; s < i; s++)
  {
    plik <<marka<<endl;
    plik <<model<<endl;
    plik <<rok<<endl;
    plik <<kolor<<endl;
    plik <<pojemnosc<<endl;
  }

  cout <<"Dane zostaly zapisane!. Wcisnij ENTER";

  getchar();
  system("clear");
}



void Telefony::Wczytaj()
{
  ifstream plik("telefony.txt", ios::in);  //Program wczytuje dane z pliku "telefony.txt" do bazy

  plik >> i;


  short s = 0;

  do
  {
    plik >>marka;
    plik >>model;
    plik >>rok;
    plik >>kolor;
    plik >>pojemnosc;
    s++;
  } while( !plik.eof() ); //sprawdzenie czy wskaznik pliku znajduje sie na jego koncu

  cout <<"Wczytano dane. Nacisnij ENTER!";

  getchar();
  system("clear");
}

void Telefony::Usun()
{
  short element;

  if (i != 0)
  {
    cout <<"Podaj numer telefonu ktory chcesz usunac: ";
    cin >>element;
    cin.ignore();

    if (element > i)
    cout <<"Operacja nie powiodla sie. Brak telefonu o takim numerze";
    else
    {
      for (short k = element; k < i; k++)
      {
        marka[k-1] = marka[k];   //Nastepuje tutaj zastepienie jednego elementu, elementem nastepnym
        model[k-1] = model[k];
        rok[k-1] = rok[k];
        kolor[k-1] = kolor[k];
        pojemnosc[k-1] = pojemnosc[k];
      }
      i--;

      cout <<"Operacja zakonczyla sie sukcesem! Telefon o numerze "<<element<<" zostal usuniety!";
      Zapisz();
    }

  }
  else
  {
    cout <<"Nie ma telefonow w bazie! Wcisnij ENTER!";
    getchar();
  }
  system("clear");
}

void Telefony::Edytuj()
{
        int zmiana;

  if (i != 0)
  {
    cout <<"Podaj numer telefonu ktory chcesz zmienic: ";
    cin >>zmiana;
    cin.ignore();

    if (zmiana > i)
    cout <<"Operacja nie powiodla sie. Brak telefonu o takim numerze";
    else
    {

   cout <<"Podaj marke telefonu: \n";
     cin>>marka[zmiana-1];                                //jest -1 bo zakladam ze numeracja telefonow jest taka jak w wypisaniu. 										//Natomiast
                                                        // tablica zaczyna sie od zera.
   cout <<"Podaj model telefonu: \n";
     cin>>model[zmiana-1];
   cout <<"Podaj rok produkcji telefonu: \n";
     cin>>rok[zmiana-1];
   cout <<"Podaj kolor telefonu: \n";
     cin>>kolor[zmiana-1];
   cout <<"Podaj pojemnosc telefonu (w GB): \n";
     cin>>pojemnosc[zmiana-1];


      cout <<"Operacja zakonczyla sie sukcesem! telefon o numerze "<<zmiana<<" zostal zmieniony!";
      Zapisz();
    }

  }
  else if (i==0)
  {
    cout <<"Nie ma telefonow w bazie!! Wcisnij ENTER!"<<endl;
    getchar();
  }

}
