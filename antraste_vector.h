#ifndef ANTRASTE_VECTOR_H_INCLUDED
#define ANTRASTE_VECTOR_H_INCLUDED

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <vector>
#include <numeric>
#include <limits>
#include <fstream>
#include <random>
#include <chrono>
#include <algorithm>

const int daugiausia = 50;

class Studentas1
{

  public:

   inline Studentas1() : vardas("vardas"), pavarde("pavarde"), egz(0) { }

   /*
   inline Studentas1() 
   {
     	int egz = 0;
   }
   */

   inline ~Studentas1(){ }

    void setName(std::string);
    void setSurname(std::string);
    void setExam(int);

    inline std::string getName() const {return vardas; };
    inline std::string getSurname() const { return pavarde; };
    inline int getExam() const { return egz;};
    
      int n = 0;
      double galutinis;
      std::vector<int> vektoriukas;

  private:

      std::string vardas;
      std::string pavarde;
      int egz; 
};

void konteineris (char& simbolis, char pirmas, char antras, char trecias);
void ar_tas_simboliukas (char& simbolis, char pirmas, char antras);
void ar_tinkamas_skaiciukas (int& skaicius, int pradzia, int pabaiga);
double rastimediana (std::vector<int> vekt);
double vidurkis (int const* nd, int n);
double galutinis (char kas_cia1,  Studentas1& Studentas);
double galutinis_skaitant (char kas_cia1, Studentas1& Studentas, std::vector<int> vektoriukas);
void pazymiu_generavimas (char kas_cia,  Studentas1& Studentas);
bool rikiuojam( Studentas1& a, Studentas1& b);
void I_FAILA_pazymiu_generavimas ( Studentas1& Studentas, std::string pavadinimas, int kiek);
bool rikiuojam_pagal_bala( Studentas1& a,  Studentas1& b);
void vektorius();

#endif // ANTRASTE_VECTOR_H_INCLUDED
