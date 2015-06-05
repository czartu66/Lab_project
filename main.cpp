#include <iostream>
#include "Telefony.h"
#include "Uzytkownicy.h"
#include <cstdlib>




int main()
{


Telefony telefon;
Uzytkownicy u1;

 /* cout<<         " - \n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
                 "| |\n"
      "//  ------------\n"
      "||  /  ...  \  ||\n"
      "|| |  :::::  | ||\n"
      "||  \  '''  /  ||\n"
      "||   '-...-'   ||\n"
      "|/.-----------.\|\n"
      "|||___________|||\n"
      "||[__][___][__]||\n"
      "||=== ===== ===||\n"
      "|\  ===   ===  /|\n"
      "| `'""""""""""` |\n"
      "|[TALK] === === |\n"
      "|.---..---..---.|\n"
      "||_1_||_2_||_3_||\n"
      "|.---..---..---.|\n"
      "||_4_||_5_||_6_||\n"
      "|.---..---..---.|\n"
      "||_7_||_8_||_9_||\n"
      "|.---..---..---.|\n"
      "||_*_||_0_||_#_||\n"
      "|____ _____ ____|\n"
      "|==== ===== ====|\n"
      "|====  ___  ====|\n"
      "|   .'`   `'.   |\n"
      "|  /  .:::.  \  |\n"
      "\ '           ' /\n"
      " `--.........--' \n"; */

      cout<< "WITAJ W MOIM KATALOGU Z TELEFONAMI\n";
  cout << "\n\n\n";


	
  int wybor;

  do
  {

    u1.Dodaj_uz();

    cout <<"Aktualnie posiadasz "<<telefon.i<<" telefon/y"<<endl;
    cout <<"1. Dodaj Telefon "<<endl;
    cout <<"2. Zobacz wszystkie telefony "<<endl;
    cout <<"3. Zapisz wprowadzone telefony "<<endl;
    cout <<"4. Wczytaj telefony z bazy "<<endl;
    cout <<"5. Usun telefon "<<endl;
    cout <<"6. Edytuj telefon "<<endl;

    cout <<"7. KONIEC PROGRAMU"<<endl<<endl;

    cin>>wybor;


    switch (wybor)
    {
      case 1: telefon.Dodaj();
      break;
      case 2: telefon.Zobacz();
      break;
      case 3: telefon.Zapisz();
      break;
      case 4: telefon.Wczytaj();
      break;
      case 5: telefon.Usun();
      break;
      case 6: telefon.Edytuj();
      break;
      case 7:
      cout<<"Zakonczono program, nacisnij ENTER";
      break;
      default:
      cout<<"Tej opcji nie ma w systemie!"<<endl;
      break;

    }


  } while (wybor != 7);


  return 0;
}
