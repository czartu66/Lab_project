#pragma once
#include "Telefony.h"

class Uzytkownicy:
    public Telefony
{
private:
    string nazwa_uz;
    static int counter;	

public:
    Uzytkownicy(string="brak");
    ~Uzytkownicy();
    void Dodaj_uz();
};
