#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>


using namespace std;

class Telefony  //deklaracja klasy
{
private:
  string marka;
  string model;
  string rok;
  string kolor;
  string pojemnosc;


public:
    static short i;           // zmienna przechowujaca ilosc telefonow
    Telefony(string="brak", string="brak", string="brak", string="brak", string="brak");
    ~Telefony();
    void Dodaj();
    void Zobacz();
    void Zapisz();
    void Wczytaj();
    void Usun();
    void Edytuj();
};
