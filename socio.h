#ifndef SOCIO
#define SOCIO

#include "define.h"
#include <iostream>
#include <string.h>

using namespace std;

class Socio
{
private:
    string ci;
    string nombre;
public:
    Socio();
    Socio(string ci, string nombre);
    int getCi();
    void setCi(int ci);
    string getNombre();
    void setNombre(string nombre);
    ~Socio();
};
#endif