#ifndef FECHA
#define FECHA

#include "define.h"
#include <iostream>
#include <string.h>

using namespace std;

class Fecha
{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAnio();
    void setAnio(int anio);
    ~Fecha();


    /*friend ostream& operator << (ostream&,Fecha&);
    friend bool operator ==(const Fecha&, const Fecha&);
    friend bool operator <(const Fecha&,const Fecha&);*/
};
#endif