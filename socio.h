#ifndef SOCIO
#define SOCIO

#include "define.h"
#include <iostream>
#include <string.h>
#include "DtSocio.h"

using namespace std;

class Socio
{
private:
    string ci;
    string nombre;
public:
    Socio();
    Socio(string ci, string nombre);
    string getCi();
    void setCi(string ci);
    string getNombre();
    void setNombre(string nombre);
    ~Socio();


};
#endif